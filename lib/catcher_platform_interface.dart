import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'catcher_method_channel.dart';

abstract class CatcherPlatform extends PlatformInterface {
  /// Constructs a CatcherPlatform.
  CatcherPlatform() : super(token: _token);

  static final Object _token = Object();

  static CatcherPlatform _instance = MethodChannelCatcher();

  /// The default instance of [CatcherPlatform] to use.
  ///
  /// Defaults to [MethodChannelCatcher].
  static CatcherPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [CatcherPlatform] when
  /// they register themselves.
  static set instance(CatcherPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getPlatformVersion() {
    throw UnimplementedError('platformVersion() has not been implemented.');
  }
}
