/* SocialLinksTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WBSAutomaticReadingListItem, UIImage;

__attribute__((visibility("hidden")))
@interface SocialLinksTableViewCell : XXUnknownSuperclass {
	UIImage* _posterImage;
	WBSAutomaticReadingListItem* _item;
}
@property(retain, nonatomic) WBSAutomaticReadingListItem* item;
+(float)heightForItem:(id)item inTableView:(id)tableView;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)setPosterImage:(id)image;
-(void)layoutSubviews;
-(void)dealloc;
@end