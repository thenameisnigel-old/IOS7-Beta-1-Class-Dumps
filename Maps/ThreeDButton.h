/* ThreeDButton.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UILongPressGestureRecognizer;
@protocol ThreeDButtonDelegate;

__attribute__((visibility("hidden")))
@interface ThreeDButton : XXUnknownSuperclass {
	id<ThreeDButtonDelegate> _delegate;
	UIImageView* _defaultImageView;
	UIImageView* _activatedImageView;
	BOOL _activated;
	BOOL _longPressed;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _longPressEnabled;
	int _appearance;
	BOOL _showsTextIfNecessary;
}
@property(assign, nonatomic) BOOL showsTextIfNecessary;
@property(assign, nonatomic, getter=isLongPressEnabled) BOOL longPressEnabled;
@property(readonly, assign, nonatomic, getter=isLongPressed) BOOL longPressed;
@property(readonly, assign, nonatomic) BOOL activated;
@property(assign, nonatomic) int appearance;
@property(assign, nonatomic) id<ThreeDButtonDelegate> delegate;
+(id)button;
-(BOOL)longPressEnabled;
-(void)_handleLongPress:(id)press;
-(void)_userDefaultsChanged:(id)changed;
-(void)setEnabled:(BOOL)enabled animated:(BOOL)animated;
-(void)setActivated:(BOOL)activated animated:(BOOL)animated;
-(void)setAppearance:(int)appearance animated:(BOOL)animated;
-(void)_updateText;
-(id)defaultImageForCurrentAppearance;
-(CGRect)_highlightBounds;
-(void)dealloc;
-(void)_setup;
@end