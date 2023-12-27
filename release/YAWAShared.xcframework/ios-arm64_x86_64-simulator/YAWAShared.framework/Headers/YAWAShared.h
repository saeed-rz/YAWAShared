#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class YAWASWeatherData, YAWASGeoData, YAWASCloudsCompanion, YAWASClouds, YAWASCoordCompanion, YAWASCoord, YAWASGeoDataCompanion, YAWASMainCompanion, YAWASMain, YAWASSysCompanion, YAWASSys, YAWASWeatherCompanion, YAWASWeather, YAWASWind, YAWASWeatherDataCompanion, YAWASWindCompanion, YAWASKotlinThrowable, YAWASKotlinArray<T>, YAWASKotlinException, YAWASKotlinRuntimeException, YAWASKotlinIllegalStateException, YAWASKotlinx_serialization_coreSerializersModule, YAWASKotlinx_serialization_coreSerialKind, YAWASKotlinNothing;

@protocol YAWASPlatform, YAWASPlatform_, YAWASKotlinx_serialization_coreKSerializer, YAWASKotlinx_serialization_coreEncoder, YAWASKotlinx_serialization_coreSerialDescriptor, YAWASKotlinx_serialization_coreSerializationStrategy, YAWASKotlinx_serialization_coreDecoder, YAWASKotlinx_serialization_coreDeserializationStrategy, YAWASKotlinIterator, YAWASKotlinx_serialization_coreCompositeEncoder, YAWASKotlinAnnotation, YAWASKotlinx_serialization_coreCompositeDecoder, YAWASKotlinx_serialization_coreSerializersModuleCollector, YAWASKotlinKClass, YAWASKotlinKDeclarationContainer, YAWASKotlinKAnnotatedElement, YAWASKotlinKClassifier;

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

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchCitySearchTerm:(NSString *)searchTerm appId:(NSString *)appId completionHandler:(void (^)(NSArray<YAWASGeoData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchCity(searchTerm:appId:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clouds")))
@interface YAWASClouds : YAWASBase
- (instancetype)initWithAll:(int64_t)all __attribute__((swift_name("init(all:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) YAWASCloudsCompanion *companion __attribute__((swift_name("companion")));
- (YAWASClouds *)doCopyAll:(int64_t)all __attribute__((swift_name("doCopy(all:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t all __attribute__((swift_name("all")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clouds.Companion")))
@interface YAWASCloudsCompanion : YAWASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) YAWASCloudsCompanion *shared __attribute__((swift_name("shared")));
- (id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Coord")))
@interface YAWASCoord : YAWASBase
- (instancetype)initWithLon:(double)lon lat:(double)lat __attribute__((swift_name("init(lon:lat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) YAWASCoordCompanion *companion __attribute__((swift_name("companion")));
- (YAWASCoord *)doCopyLon:(double)lon lat:(double)lat __attribute__((swift_name("doCopy(lon:lat:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Coord.Companion")))
@interface YAWASCoordCompanion : YAWASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) YAWASCoordCompanion *shared __attribute__((swift_name("shared")));
- (id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoData")))
@interface YAWASGeoData : YAWASBase
- (instancetype)initWithName:(NSString *)name lat:(double)lat lon:(double)lon country:(NSString *)country state:(NSString * _Nullable)state __attribute__((swift_name("init(name:lat:lon:country:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) YAWASGeoDataCompanion *companion __attribute__((swift_name("companion")));
- (YAWASGeoData *)doCopyName:(NSString *)name lat:(double)lat lon:(double)lon country:(NSString *)country state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(name:lat:lon:country:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoData.Companion")))
@interface YAWASGeoDataCompanion : YAWASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) YAWASGeoDataCompanion *shared __attribute__((swift_name("shared")));
- (id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main")))
@interface YAWASMain : YAWASBase
- (instancetype)initWithTemp:(double)temp feelsLike:(double)feelsLike tempMin:(double)tempMin tempMax:(double)tempMax pressure:(int64_t)pressure humidity:(int64_t)humidity __attribute__((swift_name("init(temp:feelsLike:tempMin:tempMax:pressure:humidity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) YAWASMainCompanion *companion __attribute__((swift_name("companion")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main.Companion")))
@interface YAWASMainCompanion : YAWASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) YAWASMainCompanion *shared __attribute__((swift_name("shared")));
- (id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sys")))
@interface YAWASSys : YAWASBase
- (instancetype)initWithType:(int64_t)type id:(int64_t)id country:(NSString *)country sunrise:(int64_t)sunrise sunset:(int64_t)sunset __attribute__((swift_name("init(type:id:country:sunrise:sunset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) YAWASSysCompanion *companion __attribute__((swift_name("companion")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sys.Companion")))
@interface YAWASSysCompanion : YAWASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) YAWASSysCompanion *shared __attribute__((swift_name("shared")));
- (id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather")))
@interface YAWASWeather : YAWASBase
- (instancetype)initWithId:(int64_t)id main:(NSString *)main description:(NSString *)description icon:(NSString *)icon __attribute__((swift_name("init(id:main:description:icon:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) YAWASWeatherCompanion *companion __attribute__((swift_name("companion")));
- (YAWASWeather *)doCopyId:(int64_t)id main:(NSString *)main description:(NSString *)description icon:(NSString *)icon __attribute__((swift_name("doCopy(id:main:description:icon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *icon __attribute__((swift_name("icon")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *main __attribute__((swift_name("main")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather.Companion")))
@interface YAWASWeatherCompanion : YAWASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) YAWASWeatherCompanion *shared __attribute__((swift_name("shared")));
- (id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherData")))
@interface YAWASWeatherData : YAWASBase
- (instancetype)initWithCoord:(YAWASCoord *)coord weather:(NSArray<YAWASWeather *> *)weather base:(NSString *)base main:(YAWASMain *)main visibility:(int64_t)visibility wind:(YAWASWind *)wind clouds:(YAWASClouds *)clouds dt:(int64_t)dt sys:(YAWASSys *)sys timezone:(int64_t)timezone id:(int64_t)id name:(NSString *)name cod:(int64_t)cod __attribute__((swift_name("init(coord:weather:base:main:visibility:wind:clouds:dt:sys:timezone:id:name:cod:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) YAWASWeatherDataCompanion *companion __attribute__((swift_name("companion")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherData.Companion")))
@interface YAWASWeatherDataCompanion : YAWASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) YAWASWeatherDataCompanion *shared __attribute__((swift_name("shared")));
- (id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wind")))
@interface YAWASWind : YAWASBase
- (instancetype)initWithSpeed:(double)speed deg:(int64_t)deg gust:(double)gust __attribute__((swift_name("init(speed:deg:gust:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) YAWASWindCompanion *companion __attribute__((swift_name("companion")));
- (YAWASWind *)doCopySpeed:(double)speed deg:(int64_t)deg gust:(double)gust __attribute__((swift_name("doCopy(speed:deg:gust:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t deg __attribute__((swift_name("deg")));
@property (readonly) double gust __attribute__((swift_name("gust")));
@property (readonly) double speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wind.Companion")))
@interface YAWASWindCompanion : YAWASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) YAWASWindCompanion *shared __attribute__((swift_name("shared")));
- (id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol YAWASKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<YAWASKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<YAWASKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol YAWASKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<YAWASKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<YAWASKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol YAWASKotlinx_serialization_coreKSerializer <YAWASKotlinx_serialization_coreSerializationStrategy, YAWASKotlinx_serialization_coreDeserializationStrategy>
@required
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

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol YAWASKotlinx_serialization_coreEncoder
@required
- (id<YAWASKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<YAWASKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<YAWASKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<YAWASKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<YAWASKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) YAWASKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol YAWASKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<YAWASKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<YAWASKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<YAWASKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) YAWASKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol YAWASKotlinx_serialization_coreDecoder
@required
- (id<YAWASKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<YAWASKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (YAWASKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<YAWASKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<YAWASKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) YAWASKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol YAWASKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol YAWASKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<YAWASKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<YAWASKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<YAWASKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) YAWASKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface YAWASKotlinx_serialization_coreSerializersModule : YAWASBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<YAWASKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<YAWASKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<YAWASKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<YAWASKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<YAWASKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<YAWASKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<YAWASKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<YAWASKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol YAWASKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface YAWASKotlinx_serialization_coreSerialKind : YAWASBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol YAWASKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<YAWASKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<YAWASKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<YAWASKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<YAWASKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) YAWASKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface YAWASKotlinNothing : YAWASBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol YAWASKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<YAWASKotlinKClass>)kClass provider:(id<YAWASKotlinx_serialization_coreKSerializer> (^)(NSArray<id<YAWASKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<YAWASKotlinKClass>)kClass serializer:(id<YAWASKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<YAWASKotlinKClass>)baseClass actualClass:(id<YAWASKotlinKClass>)actualClass actualSerializer:(id<YAWASKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<YAWASKotlinKClass>)baseClass defaultDeserializerProvider:(id<YAWASKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<YAWASKotlinKClass>)baseClass defaultDeserializerProvider:(id<YAWASKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<YAWASKotlinKClass>)baseClass defaultSerializerProvider:(id<YAWASKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol YAWASKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol YAWASKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol YAWASKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol YAWASKotlinKClass <YAWASKotlinKDeclarationContainer, YAWASKotlinKAnnotatedElement, YAWASKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
