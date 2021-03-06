/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, NSMutableArray, GEOVectorTile;

@interface GEOMapEdgeConnectionFinder : GEOMapRequest {

	GEOMapAccess* _map;
	GEOMapTileFinder* _tileFinder;
	NSMutableArray* _builders;
	GEOVectorTile* _tile;
	SCD_Struct_GE152* _junction;
	SCD_Struct_GE16 _coordinate;

}
-(void)cancel;
-(void)dealloc;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(void)findConnectionsIn:(/*^block*/id)arg1 ;
-(void)findConnectionsOut:(/*^block*/id)arg1 ;
-(id)initWithMap:(id)arg1 tile:(id)arg2 junction:(SCD_Struct_GE152*)arg3 coordinate:(SCD_Struct_GE16)arg4 ;
@end

