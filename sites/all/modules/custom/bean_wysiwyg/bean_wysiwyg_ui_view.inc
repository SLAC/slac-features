<?php
function bean_wysiwyg_views_api()
{
    return array(
        'api' => 3.0,
        'path' => drupal_get_path('module', 'bean_wysiwyg')
    );
}

function bean_wysiwyg_views_default_views()
{
    $view = new view();
    $view->name = 'custom_block_listing';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'bean';
    $view->human_name = 'Custom Block Listing';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Custom Block Listing';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'none';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['style_plugin'] = 'grid';
    $handler->display->display_options['style_options']['default_row_class'] = FALSE;
    $handler->display->display_options['style_options']['row_class_special'] = FALSE;
    $handler->display->display_options['style_options']['columns'] = '3';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Field: Block: Label */
    $handler->display->display_options['fields']['label']['id'] = 'label';
    $handler->display->display_options['fields']['label']['table'] = 'bean';
    $handler->display->display_options['fields']['label']['field'] = 'label';
    $handler->display->display_options['fields']['label']['label'] = '';
    $handler->display->display_options['fields']['label']['alter']['path'] = 'admin/structure/block/manage/bean/[bean-link]/configure';
    $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
    /* Field: Block: Edit link */
    $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
    $handler->display->display_options['fields']['edit_link']['table'] = 'bean';
    $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
    $handler->display->display_options['fields']['edit_link']['label'] = '';
    $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
    /* Field: Block: Rendered Block */
    $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
    $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_bean';
    $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
    $handler->display->display_options['fields']['rendered_entity']['label'] = '';
    $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
    $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
    $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
    /* Filter criterion: Block: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'bean';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
        'content_block' => 'content_block',
    );

    /* Display: Custom Block Listing */
    $handler = $view->new_display('page', 'Custom Block Listing', 'page');
    $handler->display->display_options['display_description'] = 'A view to show bean blocks';
    $handler->display->display_options['path'] = 'admin/config/custom-block-listing';
    $handler->display->display_options['menu']['title'] = 'Custom Block Listing';
    $handler->display->display_options['menu']['description'] = 'Find the Block You Made, Edit it';
    $handler->display->display_options['menu']['weight'] = '-10';
    $handler->display->display_options['menu']['name'] = 'management';
    $handler->display->display_options['menu']['context'] = 1;
    $handler->display->display_options['menu']['context_only_inline'] = 0;


    $views[$view->name] = $view;
    return $views;
}
