/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKContactsSearchManagerDelegate.h>

@class CKContactsSearchManager, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate> {

	CKContactsSearchManager* _contactsSearchManager;

}

@property (nonatomic,retain) CKContactsSearchManager * contactsSearchManager;              //@synthesize contactsSearchManager=_contactsSearchManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2 ;
-(CKContactsSearchManager *)contactsSearchManager;
-(void)updateShortcutItems;
-(void)setContactsSearchManager:(CKContactsSearchManager *)arg1 ;
@end

