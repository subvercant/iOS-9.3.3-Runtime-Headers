/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLTableCaptionElement, DOMHTMLTableSectionElement, DOMHTMLCollection, NSString;

@interface DOMHTMLTableElement : DOMHTMLElement

@property (retain) DOMHTMLTableCaptionElement * caption; 
@property (retain) DOMHTMLTableSectionElement * tHead; 
@property (retain) DOMHTMLTableSectionElement * tFoot; 
@property (readonly) DOMHTMLCollection * rows; 
@property (readonly) DOMHTMLCollection * tBodies; 
@property (copy) NSString * align; 
@property (copy) NSString * bgColor; 
@property (copy) NSString * border; 
@property (copy) NSString * cellPadding; 
@property (copy) NSString * cellSpacing; 
@property (copy) NSString * frameBorders; 
@property (copy) NSString * rules; 
@property (copy) NSString * summary; 
@property (copy) NSString * width; 
-(int)structuralComplexityContribution;
-(id)insertRow:(int)arg1 ;
-(void)deleteRow:(int)arg1 ;
-(DOMHTMLTableSectionElement *)tHead;
-(void)setTHead:(DOMHTMLTableSectionElement *)arg1 ;
-(DOMHTMLTableSectionElement *)tFoot;
-(void)setTFoot:(DOMHTMLTableSectionElement *)arg1 ;
-(DOMHTMLCollection *)tBodies;
-(NSString *)frameBorders;
-(void)setFrameBorders:(NSString *)arg1 ;
-(void)setRules:(NSString *)arg1 ;
-(id)createTHead;
-(void)deleteTHead;
-(id)createTFoot;
-(void)deleteTFoot;
-(id)createTBody;
-(id)createCaption;
-(void)deleteCaption;
-(NSString *)width;
-(void)setWidth:(NSString *)arg1 ;
-(DOMHTMLCollection *)rows;
-(void)setCellPadding:(NSString *)arg1 ;
-(NSString *)cellPadding;
-(DOMHTMLTableCaptionElement *)caption;
-(NSString *)summary;
-(void)setCaption:(DOMHTMLTableCaptionElement *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)align;
-(void)setBgColor:(NSString *)arg1 ;
-(NSString *)bgColor;
-(NSString *)border;
-(NSString *)rules;
-(void)setCellSpacing:(NSString *)arg1 ;
-(void)setBorder:(NSString *)arg1 ;
-(NSString *)cellSpacing;
@end

