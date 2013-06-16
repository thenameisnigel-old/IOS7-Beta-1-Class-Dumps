/* PodcastsViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "FocusedTableViewController.h"
#import "iPodOut-Structs.h"

@class MPMediaQuery;

__attribute__((visibility("hidden")))
@interface PodcastsViewController : FocusedTableViewController {
	MPMediaQuery* podcastsQuery;
}
@property(retain, nonatomic) MPMediaQuery* podcastsQuery;
-(void).cxx_destruct;
-(int)restoreWithPathComponent:(id)pathComponent;
-(void)writeCurrentPositionIntoNavigationPathComponent:(id)component;
-(BOOL)enableQuickNav;
-(id)viewControllerForCurrentRow;
-(void)selectAction:(BOOL)action transition:(int)transition;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)statusBarTitle;
-(void)viewDidLoad;
-(id)init;
@end