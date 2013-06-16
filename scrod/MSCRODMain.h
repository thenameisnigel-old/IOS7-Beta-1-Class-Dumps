/* MSCRODMain.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "scrod-Structs.h"
#import "SCROServerDelegate.h"

@class SCROHandler;

__attribute__((visibility("hidden")))
@interface MSCRODMain : XXUnknownSuperclass <SCROServerDelegate> {
	SCROHandler* _handlers[3];
	CFRunLoopRef* _runLoops;
	CFRunLoopRef _mainRunLoop;
	BOOL _stop;
}
+(id)commandPath;
+(id)versionString;
+(id)processIdentifier;
-(int)performActionForKey:(int)key handlerType:(int)type trusted:(BOOL)trusted;
-(int)getValue:(id*)value forKey:(int)key withObject:(id)object handlerType:(int)type trusted:(BOOL)trusted;
-(int)getValue:(id*)value forKey:(int)key handlerType:(int)type trusted:(BOOL)trusted;
-(int)setValue:(id)value forKey:(int)key handlerType:(int)type trusted:(BOOL)trusted;
-(int)registerCallbackForKey:(int)key forClientIdentifier:(unsigned)clientIdentifier handlerType:(int)type trusted:(BOOL)trusted;
-(int)handleEvent:(id)event handlerType:(int)type trusted:(BOOL)trusted;
-(void)handleCallback:(id)callback;
-(void)_serverTimeoutNotificationHandler:(id)handler;
-(void)stop;
-(void)_goDogGo:(id)go;
-(int)run;
-(id)_safeHandlerForType:(int*)type;
-(void)dealloc;
-(id)initWithArgc:(int)argc argv:(const char**)argv;
@end