/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextContainer;


@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider,NSTextContainerView>
@property (assign,nonatomic,__weak) NSTextContainer * textContainer; 
@property (assign,nonatomic) NSRange markedRange; 
@optional
-(NSRange)markedRange;
-(void)addTextAttachmentView:(id)arg1 forAttachment:(id)arg2;
-(NSTextContainer *)textContainer;
-(void)setTextContainer:(id)arg1;
-(void)setMarkedRange:(NSRange)arg1;

@required
-(CGPoint*)textContainerOrigin;
-(CGRect*)visibleRect;
-(UIEdgeInsets*)textContainerInset;
-(void)setConstrainedFrameSize:(CGSize)arg1;
-(void)invalidateTextContainerOrigin;
-(CGSize*)minSize;
-(BOOL)isHorizontallyResizable;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;

@end

