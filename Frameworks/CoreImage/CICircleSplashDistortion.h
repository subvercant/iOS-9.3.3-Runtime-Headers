/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CICircleSplashDistortion : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(id)_kernel;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

