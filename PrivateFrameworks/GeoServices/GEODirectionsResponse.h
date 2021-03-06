/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitDecoderData, NSData, GEORouteDisplayHints, NSMutableArray, GEOStyleAttributes, NSString, GEOPBTransitRoutingIncidentMessage;

@interface GEODirectionsResponse : PBCodable <NSCopying> {

	SCD_Struct_GE1* _supportedTransportTypes;
	SCD_Struct_GE61 _timepointUsed;
	unsigned long long _debugLatencyMs;
	SCD_Struct_GE62* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	GEOTransitDecoderData* _decoderData;
	NSData* _directionsResponseID;
	GEORouteDisplayHints* _displayHints;
	NSData* _graphV3;
	NSMutableArray* _incidentsOffRoutes;
	NSMutableArray* _incidentsOnRoutes;
	int _instructionSignFillColor;
	int _localDistanceUnits;
	NSMutableArray* _placeSearchResponses;
	NSMutableArray* _routes;
	unsigned _selectedRouteIndex;
	NSMutableArray* _serviceGaps;
	NSData* _sessionState;
	int _status;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _suggestedRoutes;
	NSString* _transitDataVersion;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	BOOL _isNavigable;
	BOOL _routeDeviatesFromOriginal;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) BOOL hasDebugLatencyMs; 
@property (assign,nonatomic) unsigned long long debugLatencyMs; 
@property (assign,nonatomic) int status;                                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;                                                  //@synthesize routes=_routes - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeSearchResponses;                                    //@synthesize placeSearchResponses=_placeSearchResponses - In the implementation block
@property (assign,nonatomic) BOOL hasLocalDistanceUnits; 
@property (assign,nonatomic) int localDistanceUnits;                                                   //@synthesize localDistanceUnits=_localDistanceUnits - In the implementation block
@property (assign,nonatomic) BOOL hasRouteDeviatesFromOriginal; 
@property (assign,nonatomic) BOOL routeDeviatesFromOriginal;                                           //@synthesize routeDeviatesFromOriginal=_routeDeviatesFromOriginal - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                                            //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasIsNavigable; 
@property (assign,nonatomic) BOOL isNavigable;                                                         //@synthesize isNavigable=_isNavigable - In the implementation block
@property (assign,nonatomic) BOOL hasInstructionSignFillColor; 
@property (assign,nonatomic) int instructionSignFillColor;                                             //@synthesize instructionSignFillColor=_instructionSignFillColor - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidentsOnRoutes;                                       //@synthesize incidentsOnRoutes=_incidentsOnRoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidentsOffRoutes;                                      //@synthesize incidentsOffRoutes=_incidentsOffRoutes - In the implementation block
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) SCD_Struct_GE62* problemDetails; 
@property (nonatomic,readonly) unsigned long long supportedTransportTypesCount; 
@property (nonatomic,readonly) int* supportedTransportTypes; 
@property (assign,nonatomic) BOOL hasSelectedRouteIndex; 
@property (assign,nonatomic) unsigned selectedRouteIndex;                                              //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestedRoutes;                                         //@synthesize suggestedRoutes=_suggestedRoutes - In the implementation block
@property (assign,nonatomic) BOOL hasTimepointUsed; 
@property (assign,nonatomic) SCD_Struct_GE64 timepointUsed;                                            //@synthesize timepointUsed=_timepointUsed - In the implementation block
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData;                                      //@synthesize decoderData=_decoderData - In the implementation block
@property (nonatomic,readonly) BOOL hasGraphV3; 
@property (nonatomic,retain) NSData * graphV3;                                                         //@synthesize graphV3=_graphV3 - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitDataVersion; 
@property (nonatomic,retain) NSString * transitDataVersion;                                            //@synthesize transitDataVersion=_transitDataVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceGaps;                                             //@synthesize serviceGaps=_serviceGaps - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEORouteDisplayHints * displayHints;                                      //@synthesize displayHints=_displayHints - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                                     //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                                    //@synthesize sessionState=_sessionState - In the implementation block
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(void)setHasDebugLatencyMs:(BOOL)arg1 ;
-(unsigned long long)debugLatencyMs;
-(BOOL)hasDebugLatencyMs;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(BOOL)hasDirectionsResponseID;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(BOOL)hasSessionState;
-(void)clearServiceGaps;
-(void)setSuggestedRoutes:(NSMutableArray *)arg1 ;
-(SCD_Struct_GE62*)problemDetails;
-(void)setHasInstructionSignFillColor:(BOOL)arg1 ;
-(BOOL)hasTimepointUsed;
-(BOOL)hasInstructionSignFillColor;
-(int*)supportedTransportTypes;
-(BOOL)routeDeviatesFromOriginal;
-(void)addIncidentsOnRoutes:(id)arg1 ;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(SCD_Struct_GE64)timepointUsed;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(unsigned long long)suggestedRoutesCount;
-(BOOL)hasGraphV3;
-(void)clearIncidentsOnRoutes;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(int)supportedTransportTypeAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)suggestedRoutes;
-(GEOStyleAttributes *)styleAttributes;
-(void)clearPlaceSearchResponses;
-(BOOL)hasDecoderData;
-(void)setRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(void)setProblemDetails:(SCD_Struct_GE62*)arg1 count:(unsigned long long)arg2 ;
-(void)setTimepointUsed:(SCD_Struct_GE64)arg1 ;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(unsigned long long)supportedTransportTypesCount;
-(BOOL)hasIsNavigable;
-(int)instructionSignFillColor;
-(GEORouteDisplayHints *)displayHints;
-(void)setPlaceSearchResponses:(NSMutableArray *)arg1 ;
-(void)setHasLocalDistanceUnits:(BOOL)arg1 ;
-(id)suggestedRouteAtIndex:(unsigned long long)arg1 ;
-(unsigned)selectedRouteIndex;
-(void)addPlaceSearchResponse:(id)arg1 ;
-(void)setDisplayHints:(GEORouteDisplayHints *)arg1 ;
-(void)setGraphV3:(NSData *)arg1 ;
-(id)incidentsOnRoutesAtIndex:(unsigned long long)arg1 ;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(void)clearSuggestedRoutes;
-(void)setHasTimepointUsed:(BOOL)arg1 ;
-(unsigned long long)incidentsOnRoutesCount;
-(NSMutableArray *)incidentsOnRoutes;
-(NSMutableArray *)incidentsOffRoutes;
-(void)setIncidentsOffRoutes:(NSMutableArray *)arg1 ;
-(void)clearSupportedTransportTypes;
-(SCD_Struct_GE62)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedTransportType:(int)arg1 ;
-(void)setInstructionSignFillColor:(int)arg1 ;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(void)addRoute:(id)arg1 ;
-(BOOL)hasLocalDistanceUnits;
-(unsigned long long)routesCount;
-(void)addIncidentsOffRoutes:(id)arg1 ;
-(unsigned long long)problemDetailsCount;
-(NSMutableArray *)serviceGaps;
-(void)setHasSelectedRouteIndex:(BOOL)arg1 ;
-(BOOL)hasDisplayHints;
-(id)placeSearchResponseAtIndex:(unsigned long long)arg1 ;
-(BOOL)isNavigable;
-(void)setIsNavigable:(BOOL)arg1 ;
-(BOOL)hasTransitIncidentMessage;
-(void)clearRoutes;
-(void)clearProblemDetails;
-(void)setServiceGaps:(NSMutableArray *)arg1 ;
-(void)setHasIsNavigable:(BOOL)arg1 ;
-(NSMutableArray *)placeSearchResponses;
-(void)addProblemDetail:(SCD_Struct_GE62)arg1 ;
-(NSString *)transitDataVersion;
-(void)clearIncidentsOffRoutes;
-(BOOL)hasSelectedRouteIndex;
-(id)serviceGapAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)serviceGapsCount;
-(void)addSuggestedRoute:(id)arg1 ;
-(void)setHasRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(void)setLocalDistanceUnits:(int)arg1 ;
-(BOOL)hasTransitDataVersion;
-(BOOL)hasStyleAttributes;
-(NSMutableArray *)routes;
-(NSData *)graphV3;
-(void)setSupportedTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setIncidentsOnRoutes:(NSMutableArray *)arg1 ;
-(BOOL)hasRouteDeviatesFromOriginal;
-(unsigned long long)placeSearchResponsesCount;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(int)localDistanceUnits;
-(id)incidentsOffRoutesAtIndex:(unsigned long long)arg1 ;
-(GEOTransitDecoderData *)decoderData;
-(void)setSelectedRouteIndex:(unsigned)arg1 ;
-(unsigned long long)incidentsOffRoutesCount;
-(void)addServiceGap:(id)arg1 ;
@end

