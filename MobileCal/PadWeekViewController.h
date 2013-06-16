/* PadWeekViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import "CalendarLandscapeViewController.h"
#import "OverridableRightNavigationBarButtonItems.h"
#import "OverridableToolbarItems.h"
#import "CanSelectDate.h"
#import "CanHandleEventShowing.h"


__attribute__((visibility("hidden")))
@interface PadWeekViewController : CalendarLandscapeViewController <OverridableToolbarItems, OverridableRightNavigationBarButtonItems, CanSelectDate, CanHandleEventShowing> {
}
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)weekGroup:(id)group didSelectEvent:(id)event;
-(id)pushedDayViewControllerWithDate:(id)date animated:(BOOL)animated;
-(void)showEvent:(id)event animated:(BOOL)animated;
-(void)selectDate:(id)date animated:(BOOL)animated;
@end