/* VOTEventFactoryCallbackProtocol.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */



@protocol VOTEventFactoryCallbackProtocol
-(void)handleReturnToSpringBoard;
-(void)handleSystemWideServerDied;
-(void)handleOrientationChanged;
-(void)handleProximityEvent:(id)event;
-(void)handleRingerSwitchSwitched:(id)switched;
-(void)handleMediaKeyPress:(id)press;
-(void)handleLockButtonPress:(id)press;
-(void)handleMenuButtonPress:(id)press;
-(void)handleVolumeButtonPress:(id)press;
-(void)handleKeyboardKeyEvent:(id)event;
@end