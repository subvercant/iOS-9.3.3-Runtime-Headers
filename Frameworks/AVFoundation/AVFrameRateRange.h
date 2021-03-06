/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {

	AVFrameRateRangeInternal* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_CM5 maxFrameDuration; 
@property (readonly) SCD_Struct_CM5 minFrameDuration; 
+(id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(SCD_Struct_CM5)minFrameDuration;
-(BOOL)includesFrameDuration:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)maxFrameDuration;
-(id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)includesFrameRate:(double)arg1 ;
-(double)minFrameRate;
-(double)maxFrameRate;
@end

