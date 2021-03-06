/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableArray, NSArray;

@interface MKOrientationContext : NSObject {

	NSMutableArray* orientViews;
	NSArray* relativeViews;
	UIView* projectionView;
	CGRect* relativeViewFrames;

}
-(void)dealloc;
-(void)_computeRelativeViewFrame:(id)arg1 ;
-(void)_computeRelativeViewFrames;
-(id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(UIView*)arg3 ;
-(void)invalidateView:(id)arg1 ;
@end

