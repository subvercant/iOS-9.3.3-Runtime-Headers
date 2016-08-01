/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSTimer;

@interface GCControllerMBDelegate : NSObject {

	BTSessionImplRef _session;
	BTPairingAgentImplRef _pairingAgent;
	BTDiscoveryAgentImplRef _discoveryAgent;
	NSTimer* _timer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)scanTimeout:(id)arg1 ;
-(void)startScan;
-(void)fireCompletionHandler;
-(void)stopScan;
@end
