/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIAccessibilityAutomationAction : NSObject {

	NSString* _identifier;
	SEL _selector;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SEL selector;                       //@synthesize selector=_selector - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(SEL)selector;
-(id)initWithIdentifier:(id)arg1 selector:(SEL)arg2 ;
@end
