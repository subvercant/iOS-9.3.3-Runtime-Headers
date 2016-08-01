/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMClosedViewfinderControllerDelegate;
@class NSMutableSet;

@interface CAMClosedViewfinderController : NSObject {

	id<CAMClosedViewfinderControllerDelegate> _delegate;
	NSMutableSet* __reasonsForClosingViewfinder;

}

@property (assign,nonatomic,__weak) id<CAMClosedViewfinderControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isViewfinderClosed,nonatomic,readonly) BOOL viewfinderClosed; 
@property (nonatomic,readonly) NSMutableSet * _reasonsForClosingViewfinder;                          //@synthesize _reasonsForClosingViewfinder=__reasonsForClosingViewfinder - In the implementation block
-(void)setDelegate:(id<CAMClosedViewfinderControllerDelegate>)arg1 ;
-(id)init;
-(id<CAMClosedViewfinderControllerDelegate>)delegate;
-(void)removeClosedViewfinderReason:(long long)arg1 ;
-(void)addClosedViewfinderReason:(long long)arg1 ;
-(BOOL)isViewfinderClosed;
-(NSMutableSet *)_reasonsForClosingViewfinder;
@end
