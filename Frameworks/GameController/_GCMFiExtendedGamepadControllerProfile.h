/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCExtendedGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>

@class _GCACHomeButton, GCMotion, NSString;

@interface _GCMFiExtendedGamepadControllerProfile : _GCExtendedGamepad <_GCACHomeButtonDelegate> {

	_GCACHomeButton* _acHome;
	GCMotion* _motion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)name;
-(id)motion;
-(void)setPlayerIndex:(long long)arg1 ;
-(id)inputForElement:(IOHIDElementRef)arg1 ;
-(void)handleReport:(unsigned)arg1 data:(id)arg2 ;
-(void)set_motion:(id)arg1 ;
-(void)toggleSuspendResume;
-(id)initWithController:(id)arg1 ;
@end

