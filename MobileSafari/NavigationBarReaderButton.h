/* NavigationBarReaderButton.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

__attribute__((visibility("hidden")))
@interface NavigationBarReaderButton : XXUnknownSuperclass {
	UIImageView* _glyphView;
	UIImageView* _glyphKnockoutView;
	BOOL _drawsLightGlyph;
}
@property(assign, nonatomic) BOOL drawsLightGlyph;
-(void)setSelected:(BOOL)selected completion:(id)completion;
-(void)setHighlighted:(BOOL)highlighted;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end