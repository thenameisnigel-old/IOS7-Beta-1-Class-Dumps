/* QLContentView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "NSObject.h"


@protocol QLContentView <NSObject>
-(void)updateWithQuickLookDocument:(id)quickLookDocument;
-(void)showBanner;
-(void)hideBanner;
-(id)initWithFrame:(CGRect)frame quickLookBannerViewDelegate:(id)delegate;
@end