/* BuddyTableHeaderView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Setup-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;

__attribute__((visibility("hidden")))
@interface BuddyTableHeaderView : XXUnknownSuperclass {
	float _verticalOffset;
	UILabel* _textLabel;
}
@property(readonly, assign, nonatomic) UILabel* textLabel;
@property(assign, nonatomic) float verticalOffset;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_getTextLabelFrame:(CGRect*)frame height:(float*)height forWidth:(float)width;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end