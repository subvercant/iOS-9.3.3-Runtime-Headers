/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSUserDefaults, NSObject, NSMutableSet, NSMutableDictionary;

@interface BSAbstractDefaultDomain : NSObject {

	NSUserDefaults* _userDefaults;
	BOOL _boundDefaults;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableSet* _observerQueue_observers;
	NSMutableDictionary* _defaultKeyToDefaultValue;

}
+(BOOL)__useDynamicMethodResolution;
+(void)__processPropertyMetadata:(id)arg1 ;
+(void)__assignPropertyImplementations:(id)arg1 ;
+(id)__getPropertyMetadataForProperty:(objc_propertyRef)arg1 ;
+(Class)__classFromPropertyType:(id)arg1 ;
+(BOOL)__isPropertyTypeValid:(char)arg1 class:(Class)arg2 ;
+(void)initialize;
-(void)_bindDefaultsIfNecessary;
-(id)_initWithDefaults:(id)arg1 ;
-(id)observeDefaults:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 ;
-(id)observeDefault:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 ;
-(void)_setUserDefaults:(id)arg1 ;
-(void)_resetAllDefaults;
-(id)_defaultKeyFromPropertyName:(id)arg1 ;
-(id)_propertyFromSelector:(SEL)arg1 ;
-(BOOL)_isCollectionEmpty:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 options:(unsigned long long)arg4 ;
-(id)_store;
-(void)synchronizeDefaults;
-(void)_bindAndRegisterDefaults;
-(id)_initWithDomain:(id)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
