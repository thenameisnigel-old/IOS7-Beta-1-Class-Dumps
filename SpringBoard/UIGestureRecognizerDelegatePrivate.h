/* UIGestureRecognizerDelegatePrivate.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"


@protocol UIGestureRecognizerDelegatePrivate <UIGestureRecognizerDelegate>
@optional
-(BOOL)_gestureRecognizer:(id)recognizer canBePreventedByGestureRecognizer:(id)recognizer2;
-(BOOL)_gestureRecognizer:(id)recognizer canPreventGestureRecognizer:(id)recognizer2;
-(BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)_gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;
-(BOOL)_gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)failByGestureRecognizer;
-(BOOL)_gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;
@end