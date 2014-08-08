<?php
/*
 * @file .ince
 */

function feed_generator_ical() {
	$types = _node_types_build();

	$rows = array();
	$query = db_select('ical_mapping', 'im');
	$query->fields('im');

	$result = $query->execute()->fetchAll();
	$ims = array();
	foreach ($result as $key => $value) {
		$bundle = $value->bundle;
		unset($value->bundle);
		$data = (array) $value;

		$str_data = "";
		foreach ($data as $k => $v) {
			if ($str_data) {
				$str_data .= '<br />';
			}

			$str_data .= strtoupper($k) . ': ' . $v;
		}

		$ims[$bundle] = $str_data;
	}

	foreach ($types->names as $key => $type) {
		$actions = array();
		$actions[] = l('edit', 'admin/structure/feed_generator/ical/'.$key.'/edit');
		if (!empty($ims[$key])) {
			$actions[] = l('delete', 'admin/structure/feed_generator/ical/'.$key.'/delete');	
		}
		
		$rows[] = array(
			'type' => $type,
			'config' => !empty($ims[$key]) ? $ims[$key] : 'None',
			'actions' => implode(' | ', $actions),
		);
	}

	$header = array(
		'type' => 'Content type',
		'config' => 'Configuage',
		'actions' => 'Actions',
	);

	$output = theme('table', array(
	  'header' => $header,
	  'rows' => $rows,
	));

	return $output;
}

function simpleviews_ical_form($form, &$form_state, $type) {
	$bundle = $type->orig_type;
	$fields = field_info_instances('node', $bundle);

	$query = db_select('ical_mapping', 'im');
	$query->fields('im');
	$query->condition('im.bundle', $bundle);
	$default_value = $query->execute()->fetchAssoc();
	
	$summary = array(
		'default_title' => t('- Default Title -'),
	);

	$date = array(
		'' => t('- select -'),
	);

	$location = array(
		'none' => t('- select -'),
	);

	foreach ($fields as $field_name => $instance) {
		switch ($instance['widget']['module']) {
			case 'text':
				$summary['field_data_'.$field_name.'.'.$field_name] = $instance['label'];
				$location['field_data_'.$field_name.'.'.$field_name] = $instance['label'];
				break;
			
			case 'date':
				$date['field_data_'.$field_name.'.'.$field_name.'_value'] = $instance['label'];
				break;
		}
	}

	$form['bundle'] = array(
		'#type' => 'value',
		'#value' => $bundle,
	);

	$form['summary'] = array(
    '#type' => 'select',
    '#title' => t('Summary'),
    '#options' => $summary,
    '#default_value' => empty($default_value['summary']) ? '' : $default_value['summary'],
    '#required' => TRUE,
  );

  $form['date'] = array(
    '#type' => 'select',
    '#title' => t('Event date'),
    '#options' => $date,
    '#default_value' => empty($default_value['date']) ? '' : $default_value['date'],
    '#required' => TRUE,
  );

  $form['location'] = array(
    '#type' => 'select',
    '#title' => t('Location'),
    '#options' => $location,
    '#default_value' => empty($default_value['location']) ? '' : $default_value['location'],
  );

  $form['submit'] = array(
  	'#type' => 'submit',
  	'#value' => t('Save'),
  );

	return $form;
}

function simpleviews_ical_form_submit($form, &$form_state) {
	$values = $form_state['values'];
	db_merge('ical_mapping')
    ->key(array('bundle' => $form_state['values']['bundle']))
    ->fields(array(
    		'bundle' => $values['bundle'],
    		'summary' => $values['summary'],
    		'date' => $values['date'],
    		'location' => $values['location'],
    	)
    )
    ->execute();

  drupal_goto('admin/structure/feed_generator/add/ical');
}

//form confirm delete og_tag
function simpleviews_ical_form_delete($form, &$form_state, $type) {
  $form['#ical'] = $type;
  return confirm_form($form, t('Are you sure you want to delete the this configuage?'), 'admin/structure/feed_generator/ical', t('This action cannot be undone.'), t('Delete'), t('Cancel'));
}

//function submit delete og tag
function simpleviews_ical_form_delete_submit($form, &$form_state) {
  $bundle = $form['#ical']->orig_type;

  $num_deleted = db_delete('ical_mapping')
    ->condition('bundle', $bundle)
    ->execute();

  drupal_goto('admin/structure/feed_generator/ical');
}