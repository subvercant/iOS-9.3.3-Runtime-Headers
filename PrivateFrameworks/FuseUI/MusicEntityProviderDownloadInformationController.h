/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <FuseUI/FuseUI-Structs.h>
@class NSObject;

@interface MusicEntityProviderDownloadInformationController : NSObject {

	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	MusicEntityDownloadInformation _lastDownloadInformation;
	vector<__weak id<MusicEntityProviderDownloadInformationControllerObserver>, std::__1::allocator<__weak id<MusicEntityProviderDownloadInformationControllerObserver> > >* _observers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _processingSerialQueue;

}

@property (nonatomic,readonly) MusicEntityDownloadInformation lastDownloadInformation; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                            //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processingSerialQueue;                  //@synthesize processingSerialQueue=_processingSerialQueue - In the implementation block
+(MusicEntityDownloadInformation)_downloadInformationWithKeepLocalEntityCount:(unsigned long long)arg1 nonPurgeableEntityCount:(unsigned long long)arg2 relevantActiveDownloads:(id)arg3 ;
-(id)init;
-(void)addDownloadInformationObserver:(id)arg1 ;
-(MusicEntityDownloadInformation)lastDownloadInformation;
-(void)removeDownloadInformationObserver:(id)arg1 ;
-(void)_beginGeneratingDownloadInformationChanges;
-(NSObject*<OS_dispatch_queue>)processingSerialQueue;
-(void)_endGeneratingDownloadInformationChanges;
-(void)getDownloadInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setDownloadInformation:(MusicEntityDownloadInformation)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
@end

