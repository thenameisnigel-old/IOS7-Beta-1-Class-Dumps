/* SBNotificationCenterBounceAnimator.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBounceBehaviorDelegate.h"
#import "UIDynamicAnimatorDelegate.h"
#import "SpringBoard-Structs.h"

@class SBBouncingSystem, SBBounceSettings, SBBounceBehavior, UIDynamicAnimator, _SBNotificationCenterBouncingItem;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterBounceAnimator : XXUnknownSuperclass <UIDynamicAnimatorDelegate, SBBounceBehaviorDelegate> {
	UIDynamicAnimator* _animator;
	SBBouncingSystem* _system;
	SBBounceBehavior* _behavior;
	_SBNotificationCenterBouncingItem* _item;
	id _completion;
	SBBounceSettings* _settings;
	CGRect _targetFrame;
	BOOL _didBounce;
}
@property(copy, nonatomic, getter=_completion, setter=_setCompletion:) id completion;
@property(retain, nonatomic, getter=_behavior, setter=_setBehavior:) SBBounceBehavior* behavior;
@property(readonly, assign, nonatomic, getter=_animator) UIDynamicAnimator* animator;
-(void)bounceBehaviorDidBounce:(id)bounceBehavior;
-(void)dynamicAnimatorDidPause:(id)dynamicAnimator;
-(void)_updateSettings;
-(void)beginBounceWithInitialFrame:(CGRect)initialFrame targetFrame:(CGRect)frame velocity:(CGPoint)velocity stepper:(id)stepper completion:(id)completion;
-(void)dealloc;
-(id)initWithReferenceBounds:(CGRect)referenceBounds settings:(id)settings;
@end