Pod::Spec.new do |s|
  s.name             = 'AceAnalytics'
  s.version          = '2.8.2'
  s.summary          = 'NHN DATA iOS ACE COUNTER Module'

s.homepage         = 'https://github.com/nhn/acecounter.sdk.ios'
s.license          = { :type => 'Apache License, Version 2.0', :file => 'acecounter.sdk.ios-2.8.1/LICENSE.md' }
s.author           = 'NHN DATA Corp.'
s.source           = { :http => 'https://github.com/nhn/acecounter.sdk.ios/archive/refs/tags/2.8.1.zip' }

s.platform     = :ios
s.ios.deployment_target = '14.0'
s.requires_arc = true

s.ios.vendored_frameworks = 'acecounter.sdk.ios-2.8.1/framework/ACE.xcframework'
s.frameworks = 'AppTrackingTransparency'
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
