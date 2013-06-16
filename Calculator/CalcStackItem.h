/* CalcStackItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface CalcStackItem : XXUnknownSuperclass {
	unsigned _op;
	unsigned _precedence;
	NSString* _number;
}
+(int)tagForOperator:(unsigned)anOperator;
+(unsigned)operatorForTag:(int)tag;
+(unsigned)precedenceOfOperator:(unsigned)anOperator;
-(id)description;
-(id)number;
-(unsigned)precedence;
-(unsigned)op;
-(void)dealloc;
-(id)initWithNumber:(id)number operator:(unsigned)anOperator openParenthesisCount:(unsigned)count;
@end