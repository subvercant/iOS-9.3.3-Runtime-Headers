/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSearchResult.h>

@class WBSParsecImageRepresentation, NSArray, NSNumber, NSString;

@interface WBSParsecSearchSimpleResult : WBSParsecSearchResult {

	WBSParsecImageRepresentation* _titleGlyph;
	NSArray* _moreIconRepresentations;
	BOOL _descriptionTextCanWrap;
	BOOL _hasSingleLineDescriptionAndTitle;
	NSNumber* _titleMaximumNumberOfLines;
	NSString* _descriptionLeadInText;
	NSNumber* _descriptionMaximumNumberOfLines;
	NSString* _footnote;

}

@property (nonatomic,readonly) NSNumber * titleMaximumNumberOfLines;                    //@synthesize titleMaximumNumberOfLines=_titleMaximumNumberOfLines - In the implementation block
@property (nonatomic,readonly) NSString * descriptionLeadInText;                        //@synthesize descriptionLeadInText=_descriptionLeadInText - In the implementation block
@property (nonatomic,readonly) NSNumber * descriptionMaximumNumberOfLines;              //@synthesize descriptionMaximumNumberOfLines=_descriptionMaximumNumberOfLines - In the implementation block
@property (nonatomic,readonly) BOOL descriptionTextCanWrap;                             //@synthesize descriptionTextCanWrap=_descriptionTextCanWrap - In the implementation block
@property (nonatomic,readonly) NSString * footnote;                                     //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,readonly) BOOL hasSingleLineDescriptionAndTitle;                   //@synthesize hasSingleLineDescriptionAndTitle=_hasSingleLineDescriptionAndTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreIcons; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)footnote;
-(NSNumber *)descriptionMaximumNumberOfLines;
-(NSString *)descriptionLeadInText;
-(id)titleGlyphWithSession:(id)arg1 ;
-(BOOL)hasMoreIcons;
-(id)moreIconsWithSession:(id)arg1 ;
-(NSNumber *)titleMaximumNumberOfLines;
-(BOOL)descriptionTextCanWrap;
-(BOOL)hasSingleLineDescriptionAndTitle;
@end
