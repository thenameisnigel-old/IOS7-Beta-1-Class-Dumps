/* SearchResultDealRequest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SearchResultResourceRequest.h"


__attribute__((visibility("hidden")))
@interface SearchResultDealRequest : SearchResultResourceRequest {
	id _dealHandler;
}
@property(copy, nonatomic) id dealHandler;
+(id)requestWithSearchResult:(id)searchResult;
-(void)dealloc;
-(void)handleError:(id)error;
-(void)handleData:(id)data;
-(id)urlRequest;
-(id)url;
@end