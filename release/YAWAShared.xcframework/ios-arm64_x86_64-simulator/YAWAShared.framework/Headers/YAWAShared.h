#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class YAWASWeatherData, YAWASClouds, YAWASCoord, YAWASMain, YAWASSys, YAWASWeather, YAWASWind, YAWASKotlinThrowable, YAWASKotlinArray<T>, YAWASKotlinException, YAWASKotlinRuntimeException, YAWASKotlinIllegalStateException;

@protocol YAWASPlatform, YAWASPlatform_, YAWASKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface YAWASBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface YAWASBase (YAWASBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface YAWASMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface YAWASMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorYAWASKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface YAWASNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface YAWASByte : YAWASNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface YAWASUByte : YAWASNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface YAWASShort : YAWASNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface YAWASUShort : YAWASNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface YAWASInt : YAWASNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface YAWASUInt : YAWASNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface YAWASLong : YAWASNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface YAWASULong : YAWASNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface YAWASFloat : YAWASNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface YAWASDouble : YAWASNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface YAWASBoolean : YAWASNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface YAWASGreeting : YAWASBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol YAWASPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface YAWASIOSPlatform : YAWASBase <YAWASPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Platform_")))
@protocol YAWASPlatform_
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform_")))
@interface YAWASIOSPlatform_ : YAWASBase <YAWASPlatform_>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenWeatherAPI")))
@interface YAWASOpenWeatherAPI : YAWASBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentWeatherDataLat:(double)lat lon:(double)lon appId:(NSString *)appId completionHandler:(void (^)(YAWASWeatherData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentWeatherData(lat:lon:appId:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clouds")))
@interface YAWASClouds : YAWASBase
- (instancetype)initWithAll:(int64_t)all __attribute__((swift_name("init(all:)"))) __attribute__((objc_designated_initializer));
- (YAWASClouds *)doCopyAll:(int64_t)all __attribute__((swift_name("doCopy(all:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t all __attribute__((swift_name("all")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Coord")))
@interface YAWASCoord : YAWASBase
- (instancetype)initWithLon:(double)lon lat:(double)lat __attribute__((swift_name("init(lon:lat:)"))) __attribute__((objc_designated_initializer));
- (YAWASCoord *)doCopyLon:(double)lon lat:(double)lat __attribute__((swift_name("doCopy(lon:lat:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main")))
@interface YAWASMain : YAWASBase
- (instancetype)initWithTemp:(double)temp feelsLike:(double)feelsLike tempMin:(double)tempMin tempMax:(double)tempMax pressure:(int64_t)pressure humidity:(int64_t)humidity __attribute__((swift_name("init(temp:feelsLike:tempMin:tempMax:pressure:humidity:)"))) __attribute__((objc_designated_initializer));
- (YAWASMain *)doCopyTemp:(double)temp feelsLike:(double)feelsLike tempMin:(double)tempMin tempMax:(double)tempMax pressure:(int64_t)pressure humidity:(int64_t)humidity __attribute__((swift_name("doCopy(temp:feelsLike:tempMin:tempMax:pressure:humidity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double feelsLike __attribute__((swift_name("feelsLike")));
@property (readonly) int64_t humidity __attribute__((swift_name("humidity")));
@property (readonly) int64_t pressure __attribute__((swift_name("pressure")));
@property (readonly) double temp __attribute__((swift_name("temp")));
@property (readonly) double tempMax __attribute__((swift_name("tempMax")));
@property (readonly) double tempMin __attribute__((swift_name("tempMin")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sys")))
@interface YAWASSys : YAWASBase
- (instancetype)initWithType:(int64_t)type id:(int64_t)id country:(NSString *)country sunrise:(int64_t)sunrise sunset:(int64_t)sunset __attribute__((swift_name("init(type:id:country:sunrise:sunset:)"))) __attribute__((objc_designated_initializer));
- (YAWASSys *)doCopyType:(int64_t)type id:(int64_t)id country:(NSString *)country sunrise:(int64_t)sunrise sunset:(int64_t)sunset __attribute__((swift_name("doCopy(type:id:country:sunrise:sunset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t sunrise __attribute__((swift_name("sunrise")));
@property (readonly) int64_t sunset __attribute__((swift_name("sunset")));
@property (readonly) int64_t type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather")))
@interface YAWASWeather : YAWASBase
- (instancetype)initWithId:(int64_t)id main:(NSString *)main description:(NSString *)description icon:(NSString *)icon __attribute__((swift_name("init(id:main:description:icon:)"))) __attribute__((objc_designated_initializer));
- (YAWASWeather *)doCopyId:(int64_t)id main:(NSString *)main description:(NSString *)description icon:(NSString *)icon __attribute__((swift_name("doCopy(id:main:description:icon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *icon __attribute__((swift_name("icon")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *main __attribute__((swift_name("main")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherData")))
@interface YAWASWeatherData : YAWASBase
- (instancetype)initWithCoord:(YAWASCoord *)coord weather:(NSArray<YAWASWeather *> *)weather base:(NSString *)base main:(YAWASMain *)main visibility:(int64_t)visibility wind:(YAWASWind *)wind clouds:(YAWASClouds *)clouds dt:(int64_t)dt sys:(YAWASSys *)sys timezone:(int64_t)timezone id:(int64_t)id name:(NSString *)name cod:(int64_t)cod __attribute__((swift_name("init(coord:weather:base:main:visibility:wind:clouds:dt:sys:timezone:id:name:cod:)"))) __attribute__((objc_designated_initializer));
- (YAWASWeatherData *)doCopyCoord:(YAWASCoord *)coord weather:(NSArray<YAWASWeather *> *)weather base:(NSString *)base main:(YAWASMain *)main visibility:(int64_t)visibility wind:(YAWASWind *)wind clouds:(YAWASClouds *)clouds dt:(int64_t)dt sys:(YAWASSys *)sys timezone:(int64_t)timezone id:(int64_t)id name:(NSString *)name cod:(int64_t)cod __attribute__((swift_name("doCopy(coord:weather:base:main:visibility:wind:clouds:dt:sys:timezone:id:name:cod:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *base __attribute__((swift_name("base")));
@property (readonly) YAWASClouds *clouds __attribute__((swift_name("clouds")));
@property (readonly) int64_t cod __attribute__((swift_name("cod")));
@property (readonly) YAWASCoord *coord __attribute__((swift_name("coord")));
@property (readonly) int64_t dt __attribute__((swift_name("dt")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) YAWASMain *main __attribute__((swift_name("main")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) YAWASSys *sys __attribute__((swift_name("sys")));
@property (readonly) int64_t timezone __attribute__((swift_name("timezone")));
@property (readonly) int64_t visibility __attribute__((swift_name("visibility")));
@property (readonly) NSArray<YAWASWeather *> *weather __attribute__((swift_name("weather")));
@property (readonly) YAWASWind *wind __attribute__((swift_name("wind")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wind")))
@interface YAWASWind : YAWASBase
- (instancetype)initWithSpeed:(double)speed deg:(int64_t)deg gust:(double)gust __attribute__((swift_name("init(speed:deg:gust:)"))) __attribute__((objc_designated_initializer));
- (YAWASWind *)doCopySpeed:(double)speed deg:(int64_t)deg gust:(double)gust __attribute__((swift_name("doCopy(speed:deg:gust:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t deg __attribute__((swift_name("deg")));
@property (readonly) double gust __attribute__((swift_name("gust")));
@property (readonly) double speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface YAWASPlatform_iosKt : YAWASBase
+ (id<YAWASPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt_")))
@interface YAWASPlatform_iosKt_ : YAWASBase
+ (id<YAWASPlatform_>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface YAWASKotlinThrowable : YAWASBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (YAWASKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) YAWASKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface YAWASKotlinException : YAWASKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface YAWASKotlinRuntimeException : YAWASKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface YAWASKotlinIllegalStateException : YAWASKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface YAWASKotlinCancellationException : YAWASKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(YAWASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface YAWASKotlinArray<T> : YAWASBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(YAWASInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<YAWASKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol YAWASKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
