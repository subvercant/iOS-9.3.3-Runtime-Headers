/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCompletionGroup.h>

@class NSArray, NSString, GEOSuggestionEntryList;

@interface _GEOPlaceCompletionGroup : NSObject <GEOCompletionGroup> {

	GEOSuggestionEntryList* _entryList;
	NSArray* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSString * localizedSectionHeader; 
-(void)dealloc;
-(NSString *)description;
-(NSArray *)items;
-(id)initWithCompletion:(id)arg1 query:(id)arg2 ;
-(id)initWithSuggestionEntryList:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 completion:(id)arg4 traits:(id)arg5 ;
-(NSString *)localizedSectionHeader;
@end

