/* MailStatusLabelView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSString;
@protocol MailStatusBarViewDelegate;

__attribute__((visibility("hidden")))
@interface MailStatusLabelView : XXUnknownSuperclass {
	id<MailStatusBarViewDelegate> _delegate;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
}
@property(copy, nonatomic) NSString* secondaryLabelText;
@property(copy, nonatomic) NSString* primaryLabelText;
@property(assign, nonatomic) id<MailStatusBarViewDelegate> delegate;
-(void)layoutSubviews;
-(void)update;
-(void)_setText:(id)text forLabel:(id*)label;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end