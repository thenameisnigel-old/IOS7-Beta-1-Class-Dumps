/* SiteIconDownloader.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SiteIconDownloadRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableIndexSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SiteIconDownloader : XXUnknownSuperclass <SiteIconDownloadRequestDelegate> {
	NSMutableIndexSet* _activeAndPendingBookmarkIdentifiers;
	NSMutableArray* _pendingDownloadRequests;
	NSMutableSet* _activeDownloadRequests;
}
+(id)sharedSiteIconDownloader;
-(void)siteIconDownloadRequest:(id)request didLoadIconData:(id)data;
-(void)siteIconDownloadRequestDidFail:(id)siteIconDownloadRequest;
-(void)_siteIconDownloadRequestDidFinish:(id)_siteIconDownloadRequest;
-(void)cancelAllDownloads;
-(unsigned)_maximumSimultaneousDownloads;
-(void)_startDownloadRequestIfPossible;
-(void)downloadIconsForBookmark:(id)bookmark withBrowserView:(id)browserView;
-(void)downloadIconsForBookmark:(id)bookmark;
-(BOOL)_downloadIsActiveOrPendingForBookmark:(id)bookmark;
-(void)dealloc;
-(id)init;
@end