<?php
/*
 * @file .inc
 */

// Page callback display list config OG:Tags
function og_tags_manage() {
  $types = _node_types_build();

	$output = '';

	$query = db_select('og_tag_importer', 'oti');
	$query->fields('oti');

	$results = $query->execute()->fetchAll();
	
	$slac_ogs = array();
	foreach ($results as $rs) {
    $actions = array();
    $actions[] = l(t('Edit'), 'admin/config/content/og_tag_importer/'.$rs->id.'/edit');
    $actions[] = l(t('Delete'), 'admin/config/content/og_tag_importer/'.$rs->id.'/delete');
		$slac_ogs[] = array(
			'type' => $types->names[$rs->type],
			'actions' => implode(' | ', $actions),
		);
	}

	$header = array(
		'type' => t('Content type'),
		'edit' => t('Actions'),
	);

	if (!empty($slac_ogs)) {
		$output .= theme('table', array(
		  'header' => $header,
		  'rows' => $slac_ogs,
		));
	}

	return $output;
}

// Form add OG:Tags
function og_tags_form_add($form, &$form_state) {
	$types = _node_types_build();
	$bundles = array_keys($types->names);
	$bundle = reset($bundles);
  
  $form['og_bundle'] = array(
    '#type' => 'select',
    '#title' => t('Please select the node type to import the contents into'),
    '#options' => $types->names,
    '#default_value' => $bundle,
    '#ajax' => array(
      'callback' => 'ajax_change_bundle_callback',
      'wrapper' => 'og-tags-attribute',
      'method' => 'replace',
      'effect' => 'fade',
    ), 
  );

  $form['og'] = array(
    '#title' => 'mapping',
    '#description' => t('Override mapping configuration for OG:Tag import'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#type' => 'fieldset',
    '#id' => 'og-tags-attribute',
  );
    
  $options = array(
    'link' => array('' => t('--select--')),
    'image' => array('' => t('--select--')),
    'text' => array('' => t('--select--')),
  );
    
  if (!empty($form_state['values']['og_bundle'])) {
  	$bundle = $form_state['values']['og_bundle'];
  }

  $fields = field_info_instances('node', $bundle);
  foreach ($fields as $field_name => $instance) {
    switch($instance['widget']['module']) {
      case 'link':
        $options['link'][$field_name] = $instance['label'];
      break;
      case 'image':
        $options['image'][$field_name] = $instance['label'];
      break;
      case 'media':
				if ($instance['widget']['settings']['allowed_types']['image'] == 'image') {
					$options['image'][$field_name] = $instance['label'];
				}      	
      break;
      case 'text':
        $options['text']['title'] = t('Title');
        $options['text'][$field_name] = $instance['label'];
      break;
    }
  }
  
  $form['og']['og_title'] = array(
    '#title' => 'og:title',
    '#type' => 'select',
    '#options' => $options['text'],
  );
  
  $form['og']['og_image'] = array(
    '#title' => 'og:image',
    '#type' => 'select',
    '#options' => $options['image'],
  );

  $form['og']['og_url'] = array(
    '#title' => 'og:url',
    '#type' => 'select',
    '#options' => $options['link'],
  );
  
  $form['og']['og_description'] = array(
    '#title' => 'og:description',
    '#type' => 'select',
    '#options' => $options['text'],
  );

  $form['og']['og_site_name'] = array(
    '#title' => 'og:site_name',
    '#type' => 'select',
    '#options' => $options['text'],
  );
  $form['submit'] = array(
  	'#type' => 'submit',
  	'#value' => t('Save'),
  );

	return $form;
}

//submit page create new og_tag
function og_tags_form_add_submit($form, &$form_state) {
	$values = $form_state['values'];
	$id = db_insert('og_tag_importer') // Table name no longer needs {}
	->fields(array(
		'type' => $values['og_bundle'],
	  'og_title' => $values['og_title'],
	  'og_image' => $values['og_image'],
	  'og_url' => $values['og_url'],
	  'og_description' => $values['og_description'],
	  'og_site_name' => $values['og_site_name'],
	))
	->execute();

	drupal_goto('admin/config/content/og_tag_importer');
}

function og_tags_form_edit($form, &$form_state, $og_tag) {
	$types = _node_types_build();
	$bundle = $og_tag['type'];

	$form['og_tag_id'] = array(
		'#type' => 'value',
		'#value' => $og_tag['id'],
	);
  
  $form['og_bundle'] = array(
    '#type' => 'select',
    '#title' => t('Please select the node type to import the contents into'),
    '#options' => $types->names,
    '#default_value' => $bundle,
    '#ajax' => array(
      'callback' => 'ajax_change_bundle_callback',
      'wrapper' => 'og-tags-attribute',
      'method' => 'replace',
      'effect' => 'fade',
    ), 
  );

  $form['og'] = array(
    '#title' => 'mapping',
    '#description' => t('Override mapping configuration for OG:Tag import'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#type' => 'fieldset',
    '#id' => 'og-tags-attribute',
  );
    
  $options = array(
    'link' => array('' => t('--select--')),
    'image' => array('' => t('--select--')),
    'text' => array('' => t('--select--')),
  );
    
  if (!empty($form_state['values']['og_bundle'])) {
  	$bundle = $form_state['values']['og_bundle'];
  }

  $fields = field_info_instances('node', $bundle);
  foreach ($fields as $field_name => $instance) {
    switch($instance['widget']['module']) {
      case 'link':
        $options['link'][$field_name] = $instance['label'];
      break;
      case 'image':
        $options['image'][$field_name] = $instance['label'];
      break;
      case 'media':
				if ($instance['widget']['settings']['allowed_types']['image'] == 'image') {
					$options['image'][$field_name] = $instance['label'];
				}      	
      break;
      case 'text':
        $options['text']['title'] = t('Title');
        $options['text'][$field_name] = $instance['label'];
      break;
    }
  }
  
  $default_title = $og_tag['og_title'];
  $form['og']['og_title'] = array(
    '#title' => 'og:title',
    '#type' => 'select',
    '#options' => $options['text'],
    '#default_value' => $default_title,
  );
  
  $default_image = $og_tag['og_image'];
  $form['og']['og_image'] = array(
    '#title' => 'og:image',
    '#type' => 'select',
    '#options' => $options['image'],
    '#default_value' => $default_image,
  );

  $default_url = $og_tag['og_url']; 
  $form['og']['og_url'] = array(
    '#title' => 'og:url',
    '#type' => 'select',
    '#options' => $options['link'],
    '#default_value' => $default_url,
  );
 
  $default_description = $og_tag['og_description'];  
  $form['og']['og_description'] = array(
    '#title' => 'og:description',
    '#type' => 'select',
    '#options' => $options['text'],
    '#default_value' => $default_description,
  );

  $default_site_name = $og_tag['og_site_name'];
  $form['og']['og_site_name'] = array(
    '#title' => 'og:site_name',
    '#type' => 'select',
    '#options' => $options['text'],
    '#default_value' => $default_site_name,
  );
  $form['submit'] = array(
  	'#type' => 'submit',
  	'#value' => t('Save'),
  );

	return $form;
}

//submit page update og_tag
function og_tags_form_edit_submit($form, &$form_state) {
	$values = $form_state['values'];
	$id = db_update('og_tag_importer') // Table name no longer needs {}
	->fields(array(
		'type' => $values['og_bundle'],
	  'og_title' => $values['og_title'],
	  'og_image' => $values['og_image'],
	  'og_url' => $values['og_url'],
	  'og_description' => $values['og_description'],
	  'og_site_name' => $values['og_site_name'],
	))
	->condition('id', $values['og_tag_id'])
	->execute();

	drupal_goto('admin/config/content/og_tag_importer');
}

// ajax callback change bundle
function ajax_change_bundle_callback($form, &$form_state) {
  return $form['og'];
}

//form confirm delete og_tag
function og_tags_form_delete($form, $form_state, $og_tag) {
  $form['#og_tag'] = $og_tag;
  $types = _node_types_build();
  $bundle = $types->names[$og_tag['type']];
  return confirm_form($form, t('Are you sure you want to delete the OG:Tab %bundle?', array('%bundle' => $bundle)), 'admin/config/content/og_tag_importer', t('This action cannot be undone.'), t('Delete'), t('Cancel'));
}

//function submit delete og tag
function og_tags_form_delete_submit($form, &$form_state) {
	$id = $form['#og_tag']['id'];
	$num_deleted = db_delete('og_tag_importer')
	  ->condition('id', $id)
	  ->execute();

	drupal_goto('admin/config/content/og_tag_importer');
}


//Form import content from url
function og_tags_form_importer($form, &$form_state, $og_tag) {
  $bundle = $og_tag['type'];

  if (!empty($form_state['data_og'])) {
    form_load_include($form_state, 'inc', 'node', 'node.pages');
    $data = $form_state['data_og'];
    
    global $user;
    $node = (object) array(
      'uid' => $user->uid,
      'type' => $bundle,
      'language' => LANGUAGE_NONE,
    );
    
    //unset($_SESSION['data_og']);
    foreach ($data as $field_name => $values) {
      if ($field_name == 'title') {
        $node->title = $values[0];
      } 
      else {
        $field_info = field_info_field($field_name);
        switch($field_info['module']) {
          case 'link':
            $node->{$field_name}[LANGUAGE_NONE][0]['url'] = $values[0];
          break;
          
          case 'image':
          case 'mediafield':
            // we will need to save the image value first, assuming we are getting an image url
            $image = _og_tag_importer_image_import($values[0]);
            if (!empty($image)) {
              $node->{$field_name}[LANGUAGE_NONE][0]['fid'] = $image['fid'];
            }              
            
          break;

          default:
            if (array_key_exists('value', $field_info['columns'])) {
              try {
                $node->{$field_name}[LANGUAGE_NONE][0]['value'] = implode("\n\n", $values);
              } catch (Exception $e) {}
            }
          break;
        }
      }
    }
    node_object_prepare($node);

    $form = node_form($form, $form_state, $node);
    
    return $form;
  }

  $types = _node_types_build();

  $form['og_tag'] = array(
  	'#type' => 'value',
  	'#value' => $og_tag,
  );
  
  $form['message'] = array(
    '#prefix' => '<div class="messages status">',
    '#suffix' => '</div>',
    '#markup' => t('Currently contents pulled in will be imported into %type.', array('%type' => $types->names[$bundle])),
  );

  $form['url'] = array(
    '#type' => 'textfield',
    '#title' => t('External url'),
    '#description' => t('Please enter the url of the article where you are attempting to pull OG tags from'),
    '#required' => TRUE,
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import'),
  );

  return $form;
}

//validate data
function og_tags_form_importer_validate($form, &$form_state) {
	$v = $form_state['values'];
  
  // invalid url
  if (!valid_url($v['url'], true)) {
    form_set_error('url', t('Please enter an absolute url such as http://www.yahoo.com'));
  }
  
  // if the content does not have any og tags
  // perform the fetch here
  $result = og_tag_importer_fetch($v['url']);
  if ($result['error'] == 1) {
    form_set_error('url', $result['message']);
  }
  
  // store the fetched tags for submission handler
  $form_state['og_tags_fetch'] = (array_key_exists('data', $result)) ? $result['data'] : array();
}

//create node from url
function og_tags_form_importer_submit($form, &$form_state) {
	if (array_key_exists('og_tags_fetch', $form_state)) {
    $og_tags = $form_state['og_tags_fetch'];
    $tags = $form_state['values']['og_tag'];
    $bundle = $tags['type'];
    $mapping = og_tag_importer_auto_map($tags);
    $data = array();
    foreach ($og_tags as $tag_name => $value) {
      $key = str_replace(':', '_', $tag_name);

      if (array_key_exists($key, $tags)) {
        $map = $tags[$key];
      }else {
        $map = array_key_exists($tag_name, $mapping) ? $mapping[$tag_name] : '';
      }

      if ($map != '') {
        $data[$map][] = $value;
      }
    }

    drupal_session_start();
    $form_state['data_og'] = $data;
    $form_state['rebuild'] = TRUE;
  }else {
    drupal_set_message('A problem has occurred with fetch data.', 'error');
  }
}

