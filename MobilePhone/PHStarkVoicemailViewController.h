/* PHStarkVoicemailViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PHStarkGenericTableViewController.h"
#import "MobilePhone-Structs.h"

@class VMVoicemail;

__attribute__((visibility("hidden")))
@interface PHStarkVoicemailViewController : PHStarkGenericTableViewController {
	VMVoicemail* _queuedVoicemailForNextAppearance;
}
@property(retain) VMVoicemail* queuedVoicemailForNextAppearance;
-(id)subtitleForNoContentBanner;
-(id)titleForNoContentBanner;
-(void)programmaticallySelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)voicemailViewControllerPlayVoicemailEventNotification:(id)notification;
-(void)voicemailManagerChangedNotification:(id)notification;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end