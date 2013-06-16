/* ADStoreJSO_Bindings.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "JSExport.h"


@protocol ADStoreJSO_Bindings <JSExport>
-(void)redeemiTunesGiftCode:(id)code listener:(id)listener;
-(void)purchaseItemWithID:(id)anId offerIdentifier:(id)identifier listener:(id)listener;
-(void)lookupItemWithID:(id)anId listener:(id)listener;
-(void)registerItemsForPurchase:(id)purchase;
@optional
-(void)redeemiTunesGiftCode:(id)code listener:(id)listener __JS_EXPORT_AS__redeemiTunesGiftCode:(id)code3;
-(void)purchaseItemWithID:(id)anId offerIdentifier:(id)identifier listener:(id)listener __JS_EXPORT_AS__purchaseItemWithID:(id)anId4;
-(void)lookupItemWithID:(id)anId listener:(id)listener __JS_EXPORT_AS__lookupItemWithID:(id)anId3;
@end