/* ADSLayerHostWindow.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AdSheet-Structs.h"


__attribute__((visibility("hidden")))
@interface ADSLayerHostWindow : XXUnknownSuperclass {
}
+(id)layerHostWindowForView:(id)view;
-(void)setFrame:(CGRect)frame;
-(id)init;
-(void)_updateTransformLayerForClassicPresentation;
-(void)_setupConfiguration;
-(CGPoint)_centerForFrame:(CGRect)frame;
-(CGPoint)_adjustForClassic:(CGPoint)classic;
-(CGAffineTransform)_screenTransform:(float)transform;
-(BOOL)_isWindowServerHostingManaged;
@end