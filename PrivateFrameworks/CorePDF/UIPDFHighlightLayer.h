/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <QuartzCore/CALayer.h>

@interface UIPDFHighlightLayer : CALayer {

	CGPathRef _clipPath;
	CGPathRef _borderPath;
	CGPoint offset;

}

@property (assign,nonatomic) CGPathRef clipPath; 
@property (assign,nonatomic) CGPathRef borderPath; 
@property (assign,nonatomic) CGPoint offset; 
-(void)dealloc;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(CGPathRef)clipPath;
-(void)setClipPath:(CGPathRef)arg1 ;
-(CGPathRef)borderPath;
-(void)setBorderPath:(CGPathRef)arg1 ;
@end

