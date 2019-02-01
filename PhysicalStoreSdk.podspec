Pod::Spec.new do |s|
    s.name              = 'PhysicalStoreSdk'
    s.version           = '0.0.9'
    s.summary           = 'Physical Store Detect SDK Provided by Beam UAE'
    s.homepage          = 'http://beamuae.app/'

    s.author            = { 'Name' => 'developer@beamuae.app' }
    s.license           = { :type => 'MIT', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :git => 'https://github.com/beammaf/ios-physical-store-sdk.git',:branch => 'master'}

    s.ios.deployment_target = '11.0'
    s.ios.vendored_frameworks = 'Alamofire.framework' ,'PhysicalStoreSdk.framework','RxMoya.framework','Moya.framework','Result.framework','RxAtomic.framework','RxCocoa.framework','RxCoreLocation.framework','RxMoya.framework','RxSwift.framework'
    s.requires_arc = true
end
