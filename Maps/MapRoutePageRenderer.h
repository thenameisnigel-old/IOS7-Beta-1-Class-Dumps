/* MapRoutePageRenderer.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "MapPageRenderer.h"

@class MNRoute, NSMutableArray, RouteStepCalloutCell, UIColor;

__attribute__((visibility("hidden")))
@interface MapRoutePageRenderer : MapPageRenderer {
	MNRoute* _route;
	NSMutableArray* _routeStepCells;
	NSMutableArray* _routeStepCalloutCells;
	XXStruct_gLbvpC topLeftCorner;
	XXStruct_gLbvpC mlMapPoint;
	XXStruct_gLbvpC mrMapPoint;
	RouteStepCalloutCell* _redPinCallout;
	RouteStepCalloutCell* _greenPinCallout;
	UIColor* _routeCenterPrintColor;
	UIColor* _routeOutlinePrintColor;
	UIColor* _routeShadowColor;
	UIColor* _routeHighlightColor;
	NSMutableArray* _snapshotObjects;
}
@property(retain, nonatomic) MNRoute* route;
-(void)dealloc;
-(void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;
-(void)_layoutRouteStepCalloutAtIndex:(unsigned)index depth:(int)depth;
-(void)_drawBottomMarginContentInRect:(CGRect)rect;
-(void)_drawAddressWithPin:(int)pin address:(id)address inRect:(CGRect)rect;
-(void)drawTopContentInRect:(CGRect)rect forPageAtIndex:(int)index;
-(void)_drawRouteLineInRect:(CGRect)rect zoomLevel:(float)level transform:(CGAffineTransform)transform;
-(CGAffineTransform)_overviewAffineTransformForRect:(CGRect)rect zoomLevel:(float)level;
-(CGRect)overviewRect;
-(int)numberOfPages;
-(void)_preparePageContent;
-(int)routeStepsPerPage;
-(void)prepareForDrawingPages:(NSRange)drawingPages;
-(id)initWithRoute:(id)route worldView:(id)view;
-(float)_zoomLevelForCoordinateRegion:(XXStruct_Yvvv9D)coordinateRegion;
@end