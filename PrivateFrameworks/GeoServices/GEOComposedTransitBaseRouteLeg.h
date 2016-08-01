/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteLeg.h>

@interface GEOComposedTransitBaseRouteLeg : GEOComposedRouteLeg {

	NSRange _transitStepRange;

}
-(id)exitTransitAccessPoints;
-(id)_accessPointsForTransitStep:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(id)endingTransitStop;
-(id)enterTransitAccessPoints;
-(id)startingTransitStop;
-(NSRange)transitStepRange;
@end
