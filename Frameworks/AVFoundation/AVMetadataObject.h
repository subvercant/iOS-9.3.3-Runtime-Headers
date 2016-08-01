/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVMetadataObjectInternal, NSString;

@interface AVMetadataObject : NSObject {

	AVMetadataObjectInternal* _objectInternal;

}

@property (readonly) SCD_Struct_CM5 time; 
@property (readonly) SCD_Struct_CM5 duration; 
@property (readonly) CGRect bounds; 
@property (readonly) NSString * type; 
+(id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(SCD_Struct_CM5)duration;
-(NSString *)type;
-(id)input;
-(SCD_Struct_CM5)time;
-(id)originalMetadataObject;
-(id)initWithType:(id)arg1 time:(SCD_Struct_CM5)arg2 duration:(SCD_Struct_CM5)arg3 bounds:(CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
@end
