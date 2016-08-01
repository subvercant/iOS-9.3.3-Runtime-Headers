/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL;

@interface RCFileInputWaveformDataSource : RCWaveformDataSource {

	NSObject*<OS_dispatch_queue> _serialQueue;
	double _cachedDuration;
	float _loadingProgress;
	NSURL* _AVFileURL;

}

@property (nonatomic,copy,readonly) NSURL * AVFileURL;                   //@synthesize AVFileURL=_AVFileURL - In the implementation block
@property (nonatomic,readonly) BOOL savesGeneratedWaveform; 
-(double)duration;
-(BOOL)setPaused:(BOOL)arg1 ;
-(float)loadingProgress;
-(void)startLoading;
-(void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(BOOL)arg2 segmentFlushInterval:(double)arg3 ;
-(void)saveGeneratedWaveformIfNecessary;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)initWithAVFileURL:(id)arg1 ;
-(BOOL)savesGeneratedWaveform;
-(void)setLoadingProgress:(float)arg1 ;
-(NSURL *)AVFileURL;
@end
