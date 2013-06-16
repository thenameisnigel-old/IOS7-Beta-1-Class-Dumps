/* ClockPadTabBarController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ClockTabBarController.h"

@class NSArray, UIView, UISegmentedControl, UIViewController;
@protocol SegmentedViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ClockPadTabBarController : XXUnknownSuperclass <ClockTabBarController> {
	NSArray* _viewControllers;
	UIViewController* _selectedViewController;
	id<SegmentedViewControllerDelegate> _delegate;
	UISegmentedControl* _segmentedControl;
	UIView* _backgroundView;
	UIView* _keylineView;
}
@property(assign, nonatomic) unsigned selectedIndex;
@property(assign, nonatomic) id<SegmentedViewControllerDelegate> delegate;
@property(retain, nonatomic) UIViewController* selectedViewController;
@property(retain, nonatomic) NSArray* viewControllers;
-(void)segmentedControlIndexDidChange:(id)segmentedControlIndex;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)loadView;
-(void)dealloc;
-(id)initWithViewControllers:(id)viewControllers;
@end