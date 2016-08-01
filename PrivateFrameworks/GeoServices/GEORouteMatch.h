/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, NSArray, NSDate, GEOComposedRouteStep, GEOComposedTransitTripRouteStep, GEOComposedTransitStationRouteStep;

@interface GEORouteMatch : NSObject {

	GEOComposedRoute* _route;
	PolylineCoordinate _routeCoordinate;
	SCD_Struct_GE16 _locationCoordinate;
	unsigned long long _stepIndex;
	NSArray* _candidateSteps;
	double _matchedCourse;
	double _distanceFromRoute;
	double _modifiedHorizontalAccuracy;
	double _modifiedCourseAccuracy;
	unsigned long long _consecutiveProgressionsOffRoute;
	double _distanceTraveledOffRoute;
	BOOL _isGoodMatch;
	SCD_Struct_GE113* _road;
	double _roadWidth;
	GEORouteMatch* _projectedFrom;
	NSDate* _timestamp;
	unsigned long long _transitID;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                                             //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE16 locationCoordinate;                                     //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate routeCoordinate;                                   //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) unsigned long long stepIndex;                                           //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * step; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * transitTripStep; 
@property (nonatomic,readonly) GEOComposedTransitStationRouteStep * transitStationStep; 
@property (nonatomic,retain) NSArray * candidateSteps;                                               //@synthesize candidateSteps=_candidateSteps - In the implementation block
@property (nonatomic,readonly) double matchedCourse;                                                 //@synthesize matchedCourse=_matchedCourse - In the implementation block
@property (assign,nonatomic) double distanceFromRoute;                                               //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE113* road;                                                 //@synthesize road=_road - In the implementation block
@property (nonatomic,readonly) double roadWidth;                                                     //@synthesize roadWidth=_roadWidth - In the implementation block
@property (nonatomic,readonly) BOOL routeMatchedToEnd; 
@property (nonatomic,readonly) BOOL projectedPastEndOfLeg; 
@property (nonatomic,retain) GEORouteMatch * projectedFrom;                                          //@synthesize projectedFrom=_projectedFrom - In the implementation block
@property (assign,nonatomic) BOOL isGoodMatch;                                                       //@synthesize isGoodMatch=_isGoodMatch - In the implementation block
@property (assign,nonatomic) unsigned long long consecutiveProgressionsOffRoute;                     //@synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute - In the implementation block
@property (assign,nonatomic) double distanceTraveledOffRoute;                                        //@synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute - In the implementation block
@property (assign,nonatomic) double modifiedHorizontalAccuracy;                                      //@synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy - In the implementation block
@property (assign,nonatomic) double modifiedCourseAccuracy;                                          //@synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long transitID;                                           //@synthesize transitID=_transitID - In the implementation block
-(id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(GEOComposedRoute *)route;
-(void)setTransitID:(unsigned long long)arg1 ;
-(unsigned long long)transitID;
-(unsigned long long)stepIndex;
-(PolylineCoordinate)routeCoordinate;
-(void)setLocationCoordinate:(SCD_Struct_GE16)arg1 ;
-(double)distanceFromRoute;
-(void)setDistanceFromRoute:(double)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(SCD_Struct_GE16)locationCoordinate;
-(double)roadWidth;
-(void)setModifiedCourseAccuracy:(double)arg1 ;
-(double)distanceTraveledOffRoute;
-(void)setIsGoodMatch:(BOOL)arg1 ;
-(BOOL)routeMatchBehind:(id)arg1 ;
-(GEOComposedTransitTripRouteStep *)transitTripStep;
-(void)setConsecutiveProgressionsOffRoute:(unsigned long long)arg1 ;
-(void)setDistanceTraveledOffRoute:(double)arg1 ;
-(double)matchedCourse;
-(void)setProjectedFrom:(GEORouteMatch *)arg1 ;
-(GEOComposedTransitStationRouteStep *)transitStationStep;
-(GEORouteMatch *)projectedFrom;
-(GEOComposedRouteStep *)step;
-(NSArray *)candidateSteps;
-(void)setCandidateSteps:(NSArray *)arg1 ;
-(unsigned long long)consecutiveProgressionsOffRoute;
-(void)setRoad:(SCD_Struct_GE113*)arg1 ;
-(void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2 ;
-(SCD_Struct_GE113*)road;
-(double)modifiedCourseAccuracy;
-(BOOL)projectedPastEndOfLeg;
-(void)updateWithMinRouteCoordinate:(PolylineCoordinate)arg1 ;
-(BOOL)isEqualIgnoringScore:(id)arg1 ;
-(void)setModifiedHorizontalAccuracy:(double)arg1 ;
-(double)modifiedHorizontalAccuracy;
-(BOOL)routeMatchedToEnd;
-(id)initWithRoute:(id)arg1 routeCoordinate:(PolylineCoordinate)arg2 locationCoordinate:(SCD_Struct_GE16)arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6 ;
-(double)fractionOfCurrentStepTraveled;
-(BOOL)isGoodMatch;
@end
