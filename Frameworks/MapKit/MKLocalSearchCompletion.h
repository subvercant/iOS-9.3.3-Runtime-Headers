/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCompletionItem;
#import <MapKit/MapKit-Structs.h>
@class NSString, MKMapItem, NSArray, GEOSearchCategory;

@interface MKLocalSearchCompletion : NSObject {

	id<GEOCompletionItem> _item;
	NSString* _sourceID;
	NSString* _localizedSectionHeader;
	MKMapItem* _mapItem;
	BOOL _alreadySentFeedback;

}

@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * titleHighlightRanges; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSArray * subtitleHighlightRanges; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) GEOSearchCategory * category; 
@property (nonatomic,copy) NSString * sourceID;                                                   //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * localizedSectionHeader;                                     //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
@property (nonatomic,readonly) NSArray * displayLines; 
@property (getter=_alreadySentFeedback,nonatomic,readonly) BOOL alreadySentFeedback;              //@synthesize alreadySentFeedback=_alreadySentFeedback - In the implementation block
-(id<GEOCompletionItem>)geoCompletionItem;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOSearchCategory *)category;
-(NSString *)title;
-(NSString *)subtitle;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(BOOL)getCoordinate:(SCD_Struct_MK7*)arg1 ;
-(id)queryLine;
-(id)calloutTitle;
-(void)sendFeedback;
-(NSString *)localizedSectionHeader;
-(NSArray *)displayLines;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(NSArray *)subtitleHighlightRanges;
-(id)initWithGeoCompletionItem:(id)arg1 ;
-(BOOL)_alreadySentFeedback;
-(NSArray *)titleHighlightRanges;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(id)iconWithScale:(double)arg1 ;
-(id)copyStorage;
-(MKMapItem *)mapItem;
@end

