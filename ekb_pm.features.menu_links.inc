<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ekb_pm_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-pm-links:forum/895
  $menu_links['menu-pm-links:forum/895'] = array(
    'menu_name' => 'menu-pm-links',
    'link_path' => 'forum/895',
    'router_path' => 'forum',
    'link_title' => 'PM Forum',
    'options' => array(
      'attributes' => array(
        'title' => 'Goes directly to the PM Forum',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-pm-links:node/8101
  $menu_links['menu-pm-links:node/8101'] = array(
    'menu_name' => 'menu-pm-links',
    'link_path' => 'node/8101',
    'router_path' => 'node/%',
    'link_title' => 'PM Docs',
    'options' => array(
      'attributes' => array(
        'title' => 'Project Management Documents',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-pm-links:pm/news
  $menu_links['menu-pm-links:pm/news'] = array(
    'menu_name' => 'menu-pm-links',
    'link_path' => 'pm/news',
    'router_path' => 'pm/news',
    'link_title' => 'PM Bulletin Board',
    'options' => array(
      'attributes' => array(
        'title' => 'The PM Bulletin Board contains recents news and updates that the PMs should be aware of.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('PM Bulletin Board');
  t('PM Docs');
  t('PM Forum');


  return $menu_links;
}
