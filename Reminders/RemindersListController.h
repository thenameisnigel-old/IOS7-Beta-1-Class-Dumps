/* RemindersListController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"
#import "RemindersListHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "RemindersListModelDelegate.h"
#import "RemindersCheckboxCell.h"
#import "Reminders-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RemindersListModel, UILabel, RemindersListHeaderView, EKReminder, UITableView, RemindersCardController;
@protocol RemindersListControllerDelegate;

__attribute__((visibility("hidden")))
@interface RemindersListController : XXUnknownSuperclass <UITextFieldDelegate, UITextViewDelegate, RemindersListHeaderViewDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, RemindersListModelDelegate, RemindersCheckboxCell> {
	UILabel* _loadingLabel;
	BOOL _needsScrollToHighlightedReminder;
	EKReminder* _swipedReminder;
	BOOL _shouldIgnoreSwipeUpdates;
	BOOL _showsHeader;
	BOOL _shouldScrollToFirstIncompleteReminder;
	RemindersListModel* _model;
	EKReminder* _highlightedReminder;
	id<RemindersListControllerDelegate> _delegate;
	int _status;
	unsigned _numberOfEmptyRows;
	UITableView* _tableView;
	RemindersListHeaderView* _headerView;
	RemindersCardController* _containingCardController;
}
@property(readonly, assign) BOOL showsCompleted;
@property(assign, nonatomic) RemindersCardController* containingCardController;
@property(assign, nonatomic) BOOL shouldScrollToFirstIncompleteReminder;
@property(readonly, assign) RemindersListHeaderView* headerView;
@property(readonly, assign) UITableView* tableView;
@property(assign, nonatomic) unsigned numberOfEmptyRows;
@property(assign, nonatomic) int status;
@property(assign, nonatomic) BOOL showsHeader;
@property(assign, nonatomic) id<RemindersListControllerDelegate> delegate;
@property(retain, nonatomic) EKReminder* highlightedReminder;
@property(readonly, assign) RemindersListModel* model;
+(float)defaultTableCellHeight;
-(void).cxx_destruct;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)setBeingDisplayed:(BOOL)displayed;
-(void)didCheckOrUncheckReminder:(id)reminder atIndexPath:(id)indexPath;
-(void)checkboxCellDidTapCheckbox:(id)checkboxCell;
-(void)checkOrUncheckReminder:(id)reminder;
-(void)modelFinishedInitialLoad:(id)load;
-(void)model:(id)model loadedRemindersInRange:(NSRange)range;
-(void)scrollViewDidScroll:(id)scrollView;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)scrollToFirstIncompleteReminder;
-(void)scrollToHighlightedReminderIfNecessary;
-(BOOL)willBeDisplayingReminder:(id)reminder;
-(void)tableViewDeselectRow;
-(BOOL)shouldRemoveSectionForDelete:(id)aDelete;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableViewSpacingForExtraSeparators:(id)extraSeparators;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)setCellProperties:(id)properties fromReminder:(id)reminder ignoringTitle:(BOOL)title;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)listTappedAtPoint:(CGPoint)point;
-(void)handleRefresh;
-(void)showLoadingLabel;
-(void)hideLoadingLabelIfNecessary;
-(void)_scrollToMakeHighlightedReminderVisible;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)viewDidUnload;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)_reloadFontSizes:(id)sizes;
-(void)_localeChanged;
-(void)_significantTimeChange:(id)change;
-(void)updateViewConstraints;
-(void)loadView;
-(void)setStatus:(int)status animated:(BOOL)animated;
-(void)fadeOutHighlightedReminder;
-(id)locationStringForReminder:(id)reminder;
-(id)dueDateStringForReminder:(id)reminder;
-(id)indexPathForReminderAtModelIndex:(int)modelIndex;
-(int)modelIndexOfReminderAtIndexPath:(id)indexPath;
-(id)indexPathForReminder:(id)reminder;
-(BOOL)hasReminderAtIndexPath:(id)indexPath;
-(id)reminderAtIndexPath:(id)indexPath;
-(BOOL)allowsCreatingNewReminder;
-(BOOL)hasNoDataYet;
-(int)positionOfDeadlineInCells;
-(BOOL)displaysCalendarNameInCells;
-(BOOL)displaysDueDateInCellForDateComponents:(id)dateComponents;
-(BOOL)displaysDueDateInCells;
-(BOOL)isScheduled;
-(id)displayedCalendar;
-(void)calendarsChanged;
-(void)alarmsFired;
-(void)_eventStoreChanged:(id)changed;
-(void)eventStoreChangedWithChangedObjectIDs:(id)changedObjectIDs;
-(void)didDeleteReminderAtIndexPath:(id)indexPath;
-(void)_reloadTable;
-(void)_restoreScrollPosition:(id)position;
-(id)_prepareToRestoreScrollPosition;
-(void)configureHeaderView:(id)view;
-(void)headerEditButtonTapped;
-(Class)classForListModel;
-(int)headerViewStyle;
-(void)dealloc;
-(id)init;
@end