/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFDeviceLockModel <NSObject>
@property (assign,nonatomic) id<SBFDeviceLockModelDelegate> delegate; 
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@optional
-(void)clearBlockedState;
-(void)refreshBlockedState;
-(void)noteNewMkbDeviceLockStateInfo:(id)arg1 options:(id)arg2;

@required
-(void)setDelegate:(id)arg1;
-(id<SBFDeviceLockModelDelegate>)delegate;
-(void)synchronize;
-(double)timeUntilUnblockedSinceReferenceDate;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)notePasscodeUnlockSucceeded;
-(void)notePasscodeUnlockFailedWithError:(id)arg1;
-(void)performPasswordTest:(/*^block*/id)arg1;
-(BOOL)isTemporarilyBlocked;
-(BOOL)isPermanentlyBlocked;

@end
