/* MKOverlay.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MKAnnotation.h"
#import "MapWebKitPlugin-Structs.h"


@protocol MKOverlay <MKAnnotation>
@property(readonly, assign, nonatomic) XXStruct_SRdqoD boundingMapRect;
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;
@optional
-(BOOL)canReplaceMapContent;
-(BOOL)intersectsMapRect:(XXStruct_SRdqoD)rect;
@end