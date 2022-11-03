#include "include/catcher/catcher_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "catcher_plugin.h"

void CatcherPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  catcher::CatcherPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
