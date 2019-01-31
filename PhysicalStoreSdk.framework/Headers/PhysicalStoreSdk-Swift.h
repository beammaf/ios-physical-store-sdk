// Generated by Apple Swift version 4.2 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreBluetooth;
@import CoreLocation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PhysicalStoreSdk",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class PSStore;
@class PSTerminal;

SWIFT_PROTOCOL("_TtP16PhysicalStoreSdk15BeaconDetecable_")
@protocol BeaconDetecable
/// Starts the beacon scanner, detect beacon and get actual store information
- (void)detectedStoreWithStoreHandler:(void (^ _Nonnull)(PSStore * _Nonnull))storeHandler;
/// Returns detected terminal inside the store
- (void)detectedTerminalWithTerminalHandler:(void (^ _Nonnull)(PSTerminal * _Nonnull))terminalHandler;
/// Returns all the terminals inside the Store
- (void)getStoreTerminalsWithTerminalsHandler:(void (^ _Nonnull)(NSArray<PSTerminal *> * _Nonnull))terminalsHandler;
- (void)didErrorOccuredWithErrorHandler:(SWIFT_NOESCAPE void (^ _Nonnull)(NSError * _Nonnull))errorHandler;
@end






SWIFT_CLASS("_TtC16PhysicalStoreSdk8PSBeacon")
@interface PSBeacon : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16PhysicalStoreSdk7PSStore")
@interface PSStore : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull currency;
@property (nonatomic, readonly, copy) NSString * _Nonnull storeGroupID;
@property (nonatomic, readonly, copy) NSString * _Nonnull storeID;
@property (nonatomic, readonly, copy) NSString * _Nonnull storeDisplayName;
@property (nonatomic, readonly, copy) NSString * _Nonnull experienceType;
@property (nonatomic, readonly, copy) NSArray<PSTerminal *> * _Nonnull terminals;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC16PhysicalStoreSdk10PSTerminal")
@interface PSTerminal : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull terminalID;
@property (nonatomic, readonly, copy) NSString * _Nonnull terminalDisplayName;
- (nonnull instancetype)initWithTerminalID:(NSString * _Nonnull)terminalID terminalDisplayName:(NSString * _Nonnull)terminalDisplayName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class PhysicalStoreBuilder;
@class PhysicalStoreSdkManager;

SWIFT_PROTOCOL("_TtP16PhysicalStoreSdk13PhysicalStore_")
@protocol PhysicalStore <BeaconDetecable>
@property (nonatomic, weak) id <BeaconDetecable> _Nullable delegate;
+ (PhysicalStoreSdkManager * _Nonnull)initializeWithBuilder:(PhysicalStoreBuilder * _Nonnull)builder SWIFT_WARN_UNUSED_RESULT;
@end

/// Tps environment configuration for different usage
typedef SWIFT_ENUM(NSInteger, PhysicalStoreApiEnvironment, closed) {
  PhysicalStoreApiEnvironmentDev = 0,
  PhysicalStoreApiEnvironmentStaging = 1,
  PhysicalStoreApiEnvironmentProduction = 2,
};

@class PhysicalStoreEnvironment;
@protocol TokenProvider;

/// Initial creater builder for Tps
SWIFT_CLASS("_TtC16PhysicalStoreSdk20PhysicalStoreBuilder")
@interface PhysicalStoreBuilder : NSObject
- (nonnull instancetype)initWithEnvironment:(PhysicalStoreEnvironment * _Nonnull)environment tokenProvider:(id <TokenProvider> _Nonnull)tokenProvider OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, strong) PhysicalStoreEnvironment * _Nonnull currentEnvironment;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC16PhysicalStoreSdk24PhysicalStoreCredentials")
@interface PhysicalStoreCredentials : NSObject
@property (nonatomic, copy) NSString * _Nonnull partnerId;
@property (nonatomic, copy) NSString * _Nullable userId;
@property (nonatomic, copy) NSString * _Nonnull token;
- (nonnull instancetype)initWithToken:(NSString * _Nonnull)token userId:(NSString * _Nullable)userId partnerId:(NSString * _Nonnull)partnerId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Environment for the Tps
SWIFT_CLASS("_TtC16PhysicalStoreSdk24PhysicalStoreEnvironment")
@interface PhysicalStoreEnvironment : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PhysicalStoreEnvironment * _Nonnull shared;)
+ (PhysicalStoreEnvironment * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSString * _Nonnull baseUrl;
@property (nonatomic, readonly, strong) PhysicalStoreEnvironment * _Nonnull current;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (PhysicalStoreEnvironment * _Nonnull)selectEnvironment:(enum PhysicalStoreApiEnvironment)environment SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16PhysicalStoreSdk23PhysicalStoreSdkManager")
@interface PhysicalStoreSdkManager : NSObject <PhysicalStore>
@property (nonatomic, weak) id <BeaconDetecable> _Nullable delegate;
+ (PhysicalStoreSdkManager * _Nonnull)initializeWithBuilder:(PhysicalStoreBuilder * _Nonnull)builder SWIFT_WARN_UNUSED_RESULT;
- (void)detectedStoreWithStoreHandler:(void (^ _Nonnull)(PSStore * _Nonnull))storeHandler;
- (void)detectedTerminalWithTerminalHandler:(void (^ _Nonnull)(PSTerminal * _Nonnull))terminalHandler;
- (void)getStoreTerminalsWithTerminalsHandler:(SWIFT_NOESCAPE void (^ _Nonnull)(NSArray<PSTerminal *> * _Nonnull))terminalsHandler;
- (void)didErrorOccuredWithErrorHandler:(SWIFT_NOESCAPE void (^ _Nonnull)(NSError * _Nonnull))errorHandler;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Supply enrollment for authentication
SWIFT_PROTOCOL("_TtP16PhysicalStoreSdk13TokenProvider_")
@protocol TokenProvider
- (void)getStoreToken:(void (^ _Nonnull)(PhysicalStoreCredentials * _Nonnull))onTokenReceived;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
