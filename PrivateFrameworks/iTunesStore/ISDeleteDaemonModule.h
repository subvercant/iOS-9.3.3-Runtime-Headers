/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject {

	CFURLStorageSessionRef _storageSession;
	CFURLCacheRef _urlCache;
	SSAppPurchaseHistoryCache* _purchaseHistoryCache;

}
-(void)dealloc;
-(id)init;
-(unsigned long long)purgeableSpace;
-(unsigned long long)purge:(unsigned long long)arg1 ;
@end
