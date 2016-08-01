/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CAScrollLayer : CALayer

@property (copy) NSString * scrollMode; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(NSString *)scrollMode;
-(void)scrollToPoint:(CGPoint)arg1 ;
-(void)scrollToRect:(CGRect)arg1 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(void)setScrollMode:(NSString *)arg1 ;
@end
