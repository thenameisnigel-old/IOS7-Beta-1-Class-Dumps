/* SBClockApplicationIconImageView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLiveIconImageView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface SBClockApplicationIconImageView : SBLiveIconImageView {
	CALayer* _seconds;
	CALayer* _minutes;
	CALayer* _hours;
}
+(void)_handleTimeChange:(id)change;
+(void)_timerFired:(id)fired;
+(void)initialize;
-(void)_timerFiredWithComponents:(id)components flags:(unsigned)flags;
-(void)_handleTimeChange:(id)change;
-(void)_updateUnanimated;
-(void)_updateUnanimatedWithComponents:(id)components;
-(void)dealloc;
-(void)_setAnimating:(BOOL)animating;
-(void)updateAnimatingState;
-(id)squareContentsImage;
-(id)contentsImage;
-(id)initWithFrame:(CGRect)frame;
@end