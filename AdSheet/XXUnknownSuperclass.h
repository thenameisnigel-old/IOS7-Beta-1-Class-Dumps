/* XXUnknownSuperclass.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AdSheet-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (ADJSValueUtilities)
-(CGRect)_iAd_toCGRect;
-(void)_iAd_webThreadCallMethod:(id)method arguments:(id)arguments;
-(void)_iAd_setConstantValue:(id)value forProperty:(id)property;
@end

@interface XXUnknownSuperclass (ADJSPropertyUtilities)
-(id)_iAd_numberValueForKey:(id)key;
-(id)_iAd_stringValueForKey:(id)key;
-(id)_iAd_valueOfClass:(Class)aClass forKey:(id)key;
@end

@interface XXUnknownSuperclass (_iAd_Extras)
+(id)_iAd_colorWithRGBA:(unsigned)rgba;
@end

@interface XXUnknownSuperclass (ADWebArchiveExtras)
+(id)_iAd_sanitizedArchiveFromData:(id)data queryString:(id)string errorMessage:(id*)message subresourceOverride:(id)override;
@end

@interface XXUnknownSuperclass (ADFoundationExtras)
-(void)_iAd_writeToTemporaryFileForMIMEType:(id)mimetype sourceURL:(id)url completion:(id)completion;
-(void)_iAd_writeToTemporaryFileWithExtension:(id)extension completion:(id)completion;
@end

@interface XXUnknownSuperclass (ADFoundationExtras)
-(id)_iAd_stringValueForKey:(id)key;
@end

@interface XXUnknownSuperclass (ADFoundationExtras)
+(id)_iAd_validatedURLForURL:(id)url;
-(BOOL)_iAd_isHttpOrHttps;
-(BOOL)_iAd_isHttpOnly;
-(id)_iad_URLByRemovingDuplicateSlashes;
-(id)_iAd_URLByReplacingQueryStringWithString:(id)string;
@end

@interface XXUnknownSuperclass (ADFoundationExtras)
@property(readonly, assign, nonatomic) double _iAd_cacheControlMaxAge;
@end