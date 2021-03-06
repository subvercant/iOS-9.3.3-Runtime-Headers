/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface MPUMatchMediaDownloadObserver : MPUMediaDownloadObserver <MPStoreDownloadManagerObserver> {

	MPStoreDownload* _storeDownload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRestoreDownload;
-(void)dealloc;
-(BOOL)isPurchasing;
-(void)cancelDownload;
-(double)downloadProgress;
-(BOOL)isPaused;
-(id)initWithStoreDownload:(id)arg1 ;
-(void)_onQueue_invalidate;
-(BOOL)isCurrentlyPlayable;
-(BOOL)canCancel;
-(void)pauseDownload;
-(void)resumeDownload;
-(double)rawDownloadProgress;
-(double)rawDownloadTotal;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
@end

