/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKViewElementStyleComposer;


@protocol IKStyleableElement
@property (nonatomic,__weak,readonly) id<IKStyleableElement> parentStyleableElement; 
@property (nonatomic,copy,readonly) NSString * elementName; 
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer; 
@required
-(id<IKStyleableElement>)parentStyleableElement;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(id)arg1;
-(NSString *)elementName;

@end

