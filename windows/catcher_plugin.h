#ifndef FLUTTER_PLUGIN_CATCHER_PLUGIN_H_
#define FLUTTER_PLUGIN_CATCHER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace catcher {

class CatcherPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  CatcherPlugin();

  virtual ~CatcherPlugin();

  // Disallow copy and assign.
  CatcherPlugin(const CatcherPlugin&) = delete;
  CatcherPlugin& operator=(const CatcherPlugin&) = delete;

 private:
  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace catcher

#endif  // FLUTTER_PLUGIN_CATCHER_PLUGIN_H_
