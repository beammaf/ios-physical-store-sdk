Pod::Spec.new do |s|
    s.name              = 'PhysicalStoreSdk'
    s.version           = '1.0.15'
    s.summary           = 'Physical Store Detect SDK Provided by Beam UAE'
    s.homepage          = 'http://beamuae.app/'
    s.dependency 'Moya/RxSwift', '14.0.0'
    s.dependency 'RxCoreLocation', '~> 1.4.0'
    s.dependency 'RxBluetoothKit', '~> 6.0.0'

    s.author            = { 'Name' => 'developer@beamuae.app' }
    s.license           = { :type => 'MIT', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :git => 'https://github.com/beammaf/ios-physical-store-sdk.git',:branch => 'master'}

    s.ios.deployment_target = '11.0'
    s.ios.vendored_frameworks = 'PhysicalStoreSdk.framework'
    s.requires_arc = true
end
