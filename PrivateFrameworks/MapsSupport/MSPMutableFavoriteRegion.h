/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoriteRegion.h>

@class NSString, GEOMapRegion;

@interface MSPMutableFavoriteRegion : MSPMutableFavorite <MSPFavoriteRegion>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) GEOMapRegion * geoMapRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)immutableObjectClass;
+(id)mutableObjectProtocol;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(id)transferToImmutableWithError:(out id*)arg1 ;
-(void)setGeoMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)geoMapRegion;
@end

