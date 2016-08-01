/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ATXDataStore;

@interface _ATXFeedback : NSObject {

	_ATXDataStore* _store;
	double _decayHalfLifeSeconds;
	double _baseAlpha;
	double _baseBeta;
	double _priorMean;
	double _priorAlpha;
	double _priorBeta;

}

@property (nonatomic,readonly) double baseAlpha; 
@property (nonatomic,readonly) double baseBeta; 
@property (nonatomic,readonly) double currentAlpha; 
@property (nonatomic,readonly) double currentBeta; 
+(id)sharedInstance;
-(id)init;
-(id)initWithDataStore:(id)arg1 ;
-(void)removeFeedbackForBundle:(id)arg1 ;
-(void)putFeedbackScoresForApps:(id)arg1 into:(double*)arg2 ;
-(void)doDecayAtTime:(double)arg1 ;
-(double)baseAlpha;
-(double)baseBeta;
-(double)currentAlpha;
-(double)currentBeta;
-(void)decayCounts;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 ;
-(void)putNopScoresForApps:(id)arg1 into:(double*)arg2 atTime:(double)arg3 ;
@end
