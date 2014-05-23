<?php
/**
 * @file
 * geogratis_openlayers_base_layers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geogratis_openlayers_base_layers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
}
