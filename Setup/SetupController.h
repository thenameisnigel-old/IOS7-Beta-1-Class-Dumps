/* SetupController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "BuddyControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "Setup-Structs.h"
#import "EmergencyDialerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIActionSheet, UINavigationController, NSString, NSTimer, PCPersistentTimer, UIWindow, UIAlertView, NSMutableDictionary, NSMutableIndexSet, UIViewController, iForgotView, EmergencyDialer, BuddyLanguageController, UIView, UITapGestureRecognizer, NSMutableArray, PSListController;

__attribute__((visibility("hidden")))
@interface SetupController : XXUnknownSuperclass <BuddyControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, EmergencyDialerDelegate> {
	UIWindow* _window;
	UIView* _windowView;
	UITapGestureRecognizer* _menuButtonRecognizer;
	NSMutableArray* _buddyControllers;
	BuddyLanguageController* _languageController;
	PSListController* _wifiController;
	BOOL _wifiControllerInAdvancedMode;
	UIActionSheet* _menuButtonSheet;
	BOOL _displayEmergencyDialer;
	UINavigationController* _nav;
	NSString* _languageAtStartup;
	BOOL _shouldAnimateLanguageScreen;
	BOOL _languageScreenHasUnlocked;
	BOOL _shouldIgnoreiTunesLanguagePushOnResume;
	BOOL _buddyUiFinished;
	BOOL _buddyDone;
	BOOL _languageAlertDelegateReady;
	BOOL _earlyExitAllowed;
	BOOL _wifiWillPush;
	iForgotView* _iForgotView;
	BOOL _networkReachable;
	BOOL _isConnectedOverWifi;
	BOOL _supportsCellularActivation;
	BOOL _supportsCellularActivationInitialized;
	NSTimer* _wifiTimeoutTimer;
	BOOL _showingWifiTimeoutSpinner;
	BOOL _appleIDConfigurationDownloadStarted;
	BOOL _appleIDConfigurationDownloaded;
	BOOL _appleIDServiceEnabled;
	BOOL _appleIDWifiSkipAlertShown;
	BOOL _appleIDConfigured;
	PCPersistentTimer* _inactivityTimer;
	UIAlertView* _wifiAlert;
	UIAlertView* _languageAlert;
	UIAlertView* _iPadHomeButtonAlert;
	UIAlertView* _eraseAlert;
	UIAlertView* _badWifiAlert;
	int _systemTimeUpdateStatus;
	NSMutableArray* _controllersToRemove;
	NSMutableDictionary* _accountInfo;
	EmergencyDialer* _emergencyDialer;
	BOOL _appleIDNeedsToVerifyTerms;
	NSString* _iCloudAppleIdFromActivation;
	NSMutableIndexSet* _viewControllerIndexesToRemoveOnPush;
	UIViewController* _topViewControllerForRemovingIndexes;
}
@property(retain, nonatomic) UIViewController* topViewControllerForRemovingIndexes;
@property(retain, nonatomic) NSMutableIndexSet* viewControllerIndexesToRemoveOnPush;
@property(assign, nonatomic) BOOL appleIDNeedsToVerifyTerms;
@property(copy, nonatomic) NSString* iCloudAppleIdFromActivation;
+(void)localeCheck:(double)check;
+(id)sharedSetupController;
+(void)initialize;
-(void)disagreeToTerms;
-(id)accountInfo;
-(void)setAppleIDConfigured;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)appleIDChoiceControllerWantsModalWifiPicker;
-(void)activationControllerWantsWifiPicker;
-(void)deviceRestoreChoiceControllerWantsWifiPicker;
-(void)_popToWifi;
-(id)topBuddyController;
-(void)buddyControllerDone:(id)done;
-(void)buddyControllerDone:(id)done nextControllerClass:(Class)aClass;
-(void)_buddyControllerDone:(id)done nextControllerClass:(Class)aClass nextController:(id)controller;
-(id)_controllerForClass:(Class)aClass;
-(id)popToBuddyControllerWithClass:(Class)aClass animated:(BOOL)animated;
-(id)_controllerFollowingControllerClass:(Class)aClass;
-(void)_pushBuddyController:(id)controller;
-(void)_wifiControllerDone:(id)done;
-(void)_wifiControllerReallyDone;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)removeViewControllerIndexesFromNavHierarchyOnNextPush:(id)navHierarchyOnNextPush;
-(void)removeViewControllerFromNavHierarchy:(id)navHierarchy;
-(id)_viewControllerForBuddyController:(id)buddyController;
-(void)wifiBuddyButtonPressed;
-(void)_registrationDataStatusChanged:(CFDictionaryRef)changed;
-(void)_activationStateChanged;
-(BOOL)suspendAppPostActivation;
-(void)_updateAirportNextButton;
-(id)wifiController;
-(id)_newWifiControllerInstance;
-(BOOL)deviceHasWiFi;
-(id)controllerAtActivationFlowPoint;
-(id)controllerAtCloudConfigFlowPoint;
-(id)controllerAtCloudConfigInstallationFlowPoint;
-(BOOL)supportsCellularActivation;
-(id)controllerAtLocationServicesFlowPoint;
-(id)controllerAtDeviceRestoreFlowPoint;
-(id)controllerAtAppleIDChoiceFlowPoint;
-(BOOL)_restoreFromBackupJustFinished;
-(BOOL)_restoredFromBackup;
-(BOOL)_restoredOrSetupIniTunes;
-(id)_setupStateKey;
-(void)_languageControllerAlertDone;
-(void)_languageControllerDone;
-(void)didPresentAlertView:(id)view;
-(void)_showMiniAlert:(BOOL)alert withLanguage:(id)language;
-(void)_animateControllerGroup;
-(void)_setupStateChanged;
-(void)_setupSnapshotRemoved;
-(void)dialerDidDismiss:(id)dialer;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)_modalWifiControllerDone:(id)done;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)_showModalWifiSettings;
-(void)menuButtonPressed;
-(BOOL)startedInFakeMode;
-(BOOL)networkReachable;
-(BOOL)isConnectedOverWiFi;
-(int)systemTimeUpdateStatus;
-(void)_setSystemTime;
-(void)hideiForgot;
-(void)showiForgot;
-(void)updateLoadingStatus;
-(void)didEnterBackground;
-(void)suspendApp;
-(void)resetBuddyPostActivation:(BOOL)activation;
-(void)resume;
-(void)resign;
-(void)_refreshLanguage;
-(void)buddyWillFinish;
-(void)checkForUpdatedCarrierBundle;
-(void)countryScanUpdate;
-(void)_reachabilityChanged:(id)changed;
-(void)wifiTimeoutFired:(id)fired;
-(void)_resetWifiControllerTimeoutSpinner;
-(void)wifiNetworkJoinStarted:(id)started;
-(void)wifiBuddyJoinFinished:(id)finished;
-(void)wifiNetworkJoinFailed:(id)failed;
-(void)_clearWifiTimeoutTimer;
-(void)run;
-(void)_createNavInAirplaneMode:(BOOL)airplaneMode;
-(BOOL)_isBackInBuddyAfterRestoreFromBackup:(BOOL)backup;
-(BOOL)_isBackInBuddyForAppleID;
-(BOOL)_isBackInBuddyForActivationOnly;
-(BOOL)_hasLocaleAndLanguage;
-(id)navigationController;
-(void)_skipControllersSpecifiedByCloudConfigurationConfiguration;
-(void)_finishBuddy;
-(void)setBuddyComplete:(BOOL)complete;
-(void)batteryStateDidChange;
-(void)_inactivityTimerFired:(id)fired;
-(void)checkAndStartInactivityTimer;
-(void)stopInactivityTimer;
-(void)dealloc;
@end