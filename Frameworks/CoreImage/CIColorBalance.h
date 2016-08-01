/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor, NSNumber;

@interface CIColorBalance : CIFilter {

	CIImage* inputImage;
	CIColor* inputColor;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;
	NSNumber* inputDamping;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputWarmth; 
@property (nonatomic,retain) NSNumber * inputDamping; 
+(id)customAttributes;
-(id)_kernel;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(void)setInputWarmth:(NSNumber *)arg1 ;
-(NSNumber *)inputWarmth;
-(NSNumber *)inputDamping;
-(void)setInputDamping:(NSNumber *)arg1 ;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end
