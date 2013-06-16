/* SocialLinksViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "BookmarksPanelStateRestoring.h"
#import "UITableViewDataSource.h"
#import "MobileSafari-Structs.h"
#import "UITableViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CatalogCategoryViewController.h"

@class UITableViewController, NSMutableArray, NSString, EmptyCollectionExplanationView, UIButton;
@protocol SocialLinksViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SocialLinksViewController : XXUnknownSuperclass <BookmarksPanelStateRestoring, CatalogCategoryViewController, UITableViewDelegate, UITableViewDataSource> {
	UITableViewController* _tableViewController;
	NSMutableArray* _cachedItems;
	EmptyCollectionExplanationView* _explanationView;
	BOOL _finishedFirstRequest;
	id<SocialLinksViewControllerDelegate> _delegate;
}
@property(readonly, assign, nonatomic) UIButton* navigationBarButton;
@property(readonly, assign, nonatomic) NSString* collectionType;
@property(assign, nonatomic) id<SocialLinksViewControllerDelegate> delegate;
+(BOOL)hasAnyAccount;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(id)safari_tableViewForScrollPositionSaving;
-(void)_requestCompleted:(id)completed;
-(void)_accountsChanged:(id)changed;
-(void)_itemsChanged:(id)changed;
-(void)_updateExplanationViewVisibility;
-(void)_clearExplanationView;
-(void)_showExplanationView;
-(void)restoreScrollPosition:(float)position;
-(float)currentScrollPosition;
-(BOOL)restoreStateWithDictionary:(id)dictionary;
-(id)currentStateDictionary;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)refreshStateChanged:(id)changed;
-(void)loadView;
-(id)bookmarksNavigationController;
-(void)dealloc;
-(id)init;
@end