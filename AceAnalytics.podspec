Pod::Spec.new do |s|
    s.name             = 'AceAnalytics'
    s.version          = '2.2.11'
    s.summary          = 'NHN ACE iOS SDK ACE COUNTER'

  s.homepage         = 'https://github.com/nhn/acecounter.sdk.ios'
  s.license          = { :type => 'Apache License, Version 2.0', :file => 'acecounter.sdk.ios-2.2.11/LICENSE.md' }
  s.author           = 'NHN ACE Corp.'
  s.source           = { :http => 'https://github.com/nhn/acecounter.sdk.ios/archive/refs/tags/2.2.11.zip' }

  s.platform     = :ios, '14.0'
  s.requires_arc = true

  s.ios.vendored_frameworks = 'acecounter.sdk.ios-2.2.11/framework/ACE.xcframework'
  s.frameworks = 'AppTrackingTransparency'
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
