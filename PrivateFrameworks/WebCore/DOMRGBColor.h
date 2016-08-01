/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue * red; 
@property (readonly) DOMCSSPrimitiveValue * green; 
@property (readonly) DOMCSSPrimitiveValue * blue; 
@property (readonly) DOMCSSPrimitiveValue * alpha; 
-(void)dealloc;
-(DOMCSSPrimitiveValue *)alpha;
-(CGColorRef)color;
-(DOMCSSPrimitiveValue *)red;
-(DOMCSSPrimitiveValue *)green;
-(DOMCSSPrimitiveValue *)blue;
-(void)finalize;
@end
