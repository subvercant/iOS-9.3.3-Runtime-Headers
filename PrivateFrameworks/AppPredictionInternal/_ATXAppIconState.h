/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSSet, NSObject;

@interface _ATXAppIconState : NSObject {

	NSDictionary* _appLocation;
	NSSet* _dockedApps;
	NSSet* _folderApps;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)reload;
-(id)loadIconState;
-(void)parseIconState:(id)arg1 ;
-(id)allAppsOnSpringboard;
-(id)allDockedApps;
-(id)allFolderApps;
-(BOOL)appOnDockWithBundleId:(id)arg1 ;
-(BOOL)appInFolderWithBundleId:(id)arg1 ;
-(long long)springboardPageNumberForBundleId:(id)arg1 ;
-(long long)springboardPageLocationForBundleId:(id)arg1 ;
-(long long)folderPageNumberForBundleId:(id)arg1 ;
@end
