Pod::Spec.new do |s|
    s.name              = 'PhysicalStoreSdk'
    s.version           = '0.1.2'
    s.summary           = 'Physical Store Detect SDK Provided by Beam UAE'
    s.homepage          = 'http://beamuae.app/'
    s.dependency 'Moya/RxSwift', '~> 12.0'
    s.dependency 'RxCoreLocation', '~> 1.3.1'
    s.dependency 'RxBluetoothKit', '~> 5.1.4'

    s.author            = { 'Name' => 'developer@beamuae.app' }
    s.license           = { :type => 'MIT', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :git => 'https://github.com/beammaf/ios-physical-store-sdk.git',:branch => 'develop'}

    s.ios.deployment_target = '11.0'
    s.ios.vendored_frameworks = 'PhysicalStoreSdk.framework'
    s.requires_arc = true
end
