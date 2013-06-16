/* MCSDeleteMailboxOperation.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MCSMailboxOperation.h"

@class MFMailboxUid;

__attribute__((visibility("hidden")))
@interface MCSDeleteMailboxOperation : MCSMailboxOperation {
	MFMailboxUid* _mailboxToDelete;
}
-(id)localizedErrorTitle;
-(id)localizedErrorDescription;
-(id)accountForErrorHandling;
-(id)mailboxToRemove;
-(BOOL)revert;
-(BOOL)commit;
-(void)dealloc;
-(id)initWithMailboxToDelete:(id)aDelete;
@end