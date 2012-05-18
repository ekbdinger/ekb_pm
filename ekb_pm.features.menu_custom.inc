<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ekb_pm_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-pm-links
  $menus['menu-pm-links'] = array(
    'menu_name' => 'menu-pm-links',
    'title' => 'PM Links',
    'description' => 'This is a menu with links for the PM Team',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('PM Links');
  t('This is a menu with links for the PM Team');


  return $menus;
}
