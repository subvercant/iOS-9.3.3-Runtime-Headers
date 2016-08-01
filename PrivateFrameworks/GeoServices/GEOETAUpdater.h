/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOETAUpdaterDelegate;
@class GEOETATrafficUpdateRequest, GEOLocation, GEORouteMatch, GEOComposedRoute, GEOComposedWaypoint, GEORouteAttributes, NSTimer, NSData, GEORouteSummaryAttributes;

@interface GEOETAUpdater : NSObject {

	id<GEOETAUpdaterDelegate> _delegate;
	GEOETATrafficUpdateRequest* _currentETARequest;
	GEOLocation* _userLocation;
	GEORouteMatch* _routeMatch;
	GEOComposedRoute* _route;
	GEOComposedWaypoint* _destination;
	GEORouteAttributes* _routeAttributes;
	long long _etaState;
	BOOL _allowRequests;
	BOOL _shouldUseConditionalRequest;
	BOOL _shouldUpdateTrafficOnRoute;
	double _requestInterval;
	NSTimer* _etaIdleTimer;
	double _lastETARequestTime;
	double _debugTimeWindowDuration;
	NSData* _directionsResponseID;
	GEORouteSummaryAttributes* _routeSummaryAttributes;

}

@property (assign,nonatomic) id<GEOETAUpdaterDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                          //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                        //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEOLocation * userLocation;                        //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destination;                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;              //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,retain) NSData * directionsResponseID;                     //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL allowRequests;                                //@synthesize allowRequests=_allowRequests - In the implementation block
@property (assign,nonatomic) BOOL shouldUseConditionalRequest;                  //@synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateTrafficOnRoute;                   //@synthesize shouldUpdateTrafficOnRoute=_shouldUpdateTrafficOnRoute - In the implementation block
@property (assign,nonatomic) double requestInterval;                            //@synthesize requestInterval=_requestInterval - In the implementation block
@property (assign,nonatomic) double debugTimeWindowDuration;                    //@synthesize debugTimeWindowDuration=_debugTimeWindowDuration - In the implementation block
-(void)setDelegate:(id<GEOETAUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<GEOETAUpdaterDelegate>)delegate;
-(void)reset;
-(GEOComposedWaypoint *)destination;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
-(GEORouteAttributes *)routeAttributes;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)cancelRequest;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(BOOL)_sendETARequest:(id)arg1 isUpdate:(BOOL)arg2 ;
-(BOOL)shouldUseConditionalRequest;
-(void)_clearTimer;
-(BOOL)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3 ;
-(BOOL)shouldUpdateTrafficOnRoute;
-(double)_calculateNextTransitionTime;
-(void)setShouldUseConditionalRequest:(BOOL)arg1 ;
-(BOOL)allowRequests;
-(id)currentStep;
-(void)_startConditionalConnectionETARequest;
-(void)startUpdateRequests;
-(void)_fakeResponseForWalkingWithETAUpdateRequest:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3 ;
-(void)stopUpdateRequests;
-(void)_startStateWaitingForBestTimeStart:(id)arg1 ;
-(void)setAllowRequests:(BOOL)arg1 ;
-(void)_updateCurrentETARequest;
-(double)percentageOfCurrentStepRemaining;
-(void)requestUpdate;
-(void)setDebugTimeWindowDuration:(double)arg1 ;
-(void)_continueUpdateRequests;
-(void)_createETARequest;
-(double)debugTimeWindowDuration;
-(BOOL)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2 ;
-(BOOL)_shouldStartConditionalETARequest;
-(BOOL)_updateRouteWithETATrafficUpdateResponse:(id)arg1 ;
-(void)setShouldUpdateTrafficOnRoute:(BOOL)arg1 ;
-(id)routesForETAUpdateRequest;
-(id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(void)setRequestInterval:(double)arg1 ;
-(void)_clearCurrentETARequest;
-(double)requestInterval;
-(GEOLocation *)userLocation;
@end
