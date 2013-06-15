/* SBStarkBannerSubActionCell.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBCollectionViewCell.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SBStarkBannerSubActionCell : SBCollectionViewCell {
	UILabel* _label;
	BOOL _roundedCorners;
}
@property(assign, nonatomic) BOOL roundedCorners;
@property(copy, nonatomic) NSString* labelText;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)_didSetHighlighted:(BOOL)highlighted;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end