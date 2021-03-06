/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@protocol OS_dispatch_group;
@class CKDMMCSItemGroupSet, CKDOperation, NSMutableArray, NSObject;

@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling> {

	CKDMMCSItemGroupSet* _itemGroupSet;
	CKDOperation* _operation;
	NSMutableArray* _itemGroupContexts;
	/*^block*/id _itemGroupCompletionBlock;
	/*^block*/id _itemGroupSetCompletionBlock;
	NSObject*<OS_dispatch_group> _itemGroupSetCompletionGroup;

}

@property (nonatomic,retain) CKDMMCSItemGroupSet * itemGroupSet;                                    //@synthesize itemGroupSet=_itemGroupSet - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * operation;                                       //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSMutableArray * itemGroupContexts;                                    //@synthesize itemGroupContexts=_itemGroupContexts - In the implementation block
@property (nonatomic,copy) id itemGroupCompletionBlock;                                             //@synthesize itemGroupCompletionBlock=_itemGroupCompletionBlock - In the implementation block
@property (nonatomic,copy) id itemGroupSetCompletionBlock;                                          //@synthesize itemGroupSetCompletionBlock=_itemGroupSetCompletionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> itemGroupSetCompletionGroup;              //@synthesize itemGroupSetCompletionGroup=_itemGroupSetCompletionGroup - In the implementation block
-(void)cancel;
-(CKDOperation *)operation;
-(void)setOperation:(CKDOperation *)arg1 ;
-(void)start;
-(id)initWithItemGroupSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)itemGroupCompletionBlock;
-(void)addItemGroupContext:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)itemGroupSetCompletionGroup;
-(NSMutableArray *)itemGroupContexts;
-(id)itemGroupSetCompletionBlock;
-(CKDMMCSItemGroupSet *)itemGroupSet;
-(void)setItemGroupSetCompletionBlock:(id)arg1 ;
-(void)setItemGroupSet:(CKDMMCSItemGroupSet *)arg1 ;
-(void)setItemGroupContexts:(NSMutableArray *)arg1 ;
-(void)setItemGroupCompletionBlock:(id)arg1 ;
-(void)setItemGroupSetCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

