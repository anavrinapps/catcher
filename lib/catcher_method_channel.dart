import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

import 'catcher_platform_interface.dart';

/// An implementation of [CatcherPlatform] that uses method channels.
class MethodChannelCatcher extends CatcherPlatform {
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('catcher');

  @override
  Future<String?> getPlatformVersion() async {
    final version = await methodChannel.invokeMethod<String>('getPlatformVersion');
    return version;
  }
}
