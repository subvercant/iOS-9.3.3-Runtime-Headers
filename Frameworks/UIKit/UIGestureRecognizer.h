/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIGestureRecognizerFailureRequirementDelegate.h>
#import <UIKit/_UIForceLevelClassifierDelegate.h>
#import <UIKit/_UITouchable.h>

@protocol UIGestureRecognizerDelegate;
@class NSMutableArray, UIView, UITouchesEvent, UIPressesEvent, NSMutableSet, _UIForceLevelClassifier, _UIGestureRecognizerFailureRequirement, _UITouchForceObservable, NSObservation, NSObservationSource, NSArray, NSString;

@interface UIGestureRecognizer : NSObject <_UIGestureRecognizerFailureRequirementDelegate, _UIForceLevelClassifierDelegate, _UITouchable> {

	NSMutableArray* _targets;
	NSMutableArray* _delayedTouches;
	NSMutableArray* _delayedPresses;
	UIView* _view;
	UITouchesEvent* _updateEvent;
	UIPressesEvent* _updateButtonEvent;
	double _lastTouchTimestamp;
	id<UIGestureRecognizerDelegate> _delegate;
	NSMutableSet* _friends;
	long long _state;
	long long _allowedTouchTypes;
	long long _initialTouchType;
	NSMutableSet* _internalActiveTouches;
	_UIForceLevelClassifier* _forceClassifier;
	long long _requiredPreviewForceState;
	_UIGestureRecognizerFailureRequirement* _forceFailureRequirement;
	_UITouchForceObservable* _touchForceObservable;
	NSObservation* _touchForceObservableAndClassifierObservation;
	NSMutableArray* _forceTargets;
	unsigned long long _forcePressCount;
	NSObservationSource* _beganObservable;
	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldReceivePress : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateCanPrevent : 1;
		unsigned privateDelegateCanBePrevented : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned privateDelegateShouldReceivePress : 1;
		unsigned privateDelegateShouldRequireFailure : 1;
		unsigned privateDelegateShouldBeRequiredToFail : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned subclassShouldBeRequiredToFail : 1;
		unsigned privateSubclassShouldRequireFailure : 1;
		unsigned privateSubclassShouldBeRequiredToFail : 1;
		unsigned hasSubclassDynamicFailureRequirements : 1;
		unsigned hasDelegateDynamicFailureRequirements : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned delivered : 1;
		unsigned deliveredEndedOrCancelled : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
		unsigned willBeginAfterSatisfyingFailureRequirements : 1;
		unsigned requiresSystemGesturesToFail : 1;
		unsigned acceptsFailureRequirements : 1;
		unsigned requiresExclusiveTouchType : 1;
		unsigned initialTouchTypeIsValid : 1;
	}  _gestureFlags;
	NSMutableSet* _failureRequirements;
	NSMutableSet* _failureDependents;
	NSMutableSet* _dynamicFailureRequirements;
	NSMutableSet* _dynamicFailureDependents;
	_UIGestureRecognizerFailureRequirement* _relationshipFailureRequirement;
	NSArray* _allowedPressTypes;

}

@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic,__weak) id<UIGestureRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) BOOL cancelsTouchesInView; 
@property (assign,nonatomic) BOOL delaysTouchesBegan; 
@property (assign,nonatomic) BOOL delaysTouchesEnded; 
@property (nonatomic,copy) NSArray * allowedTouchTypes; 
@property (nonatomic,copy) NSArray * allowedPressTypes;                                    //@synthesize allowedPressTypes=_allowedPressTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldDefaultToTouches;
+(BOOL)_shouldSupportStylusTouches;
+(BOOL)_shouldUseLinearForceLevelClassifier;
+(BOOL)_touchesBeganWasDelayedForTouch:(id)arg1 ;
+(BOOL)_pressesBeganWasDelayedForPress:(id)arg1 ;
-(void)_detach;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIGestureRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<UIGestureRecognizerDelegate>)delegate;
-(UIView *)view;
-(void)setDelaysTouchesBegan:(BOOL)arg1 ;
-(long long)state;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setRequiresSystemGesturesToFail:(BOOL)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(void)setState:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(BOOL)_isDirty;
-(void)ignoreTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)ignorePress:(id)arg1 forEvent:(id)arg2 ;
-(void)_updateGestureStateWithEvent:(id)arg1 buttonEvent:(id)arg2 afterDelay:(BOOL)arg3 ;
-(void)_queueForResetIfFinished;
-(void)reset;
-(void)setView:(UIView *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setCancelsTouchesInView:(BOOL)arg1 ;
-(void)setAllowedPressTypes:(NSArray *)arg1 ;
-(void)setAllowedTouchTypes:(NSArray *)arg1 ;
-(BOOL)isEnabled;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(void)_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setDirty;
-(BOOL)_requiresSystemGesturesToFail;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDelaysTouchesEnded:(BOOL)arg1 ;
-(unsigned long long)numberOfTouches;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(BOOL)_isRecognized;
-(id)_defaultAllowedTouchTypes;
-(unsigned long long)_forcePressCount;
-(long long)currentPreviewForceState;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3 ;
-(id)_touchForceObservable;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)requireOtherGestureToFail:(id)arg1 ;
-(void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2 ;
-(long long)_currentForceLevel;
-(BOOL)_delegateShouldReceivePress:(id)arg1 ;
-(long long)requiredPreviewForceState;
-(void)_setForceLevelClassifier:(id)arg1 ;
-(void)_addForceTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setRequiredPreviewForceState:(long long)arg1 ;
-(void)_setAcceptsFailureRequiments:(BOOL)arg1 ;
-(void)_resetGestureRecognizer;
-(BOOL)delaysTouchesBegan;
-(id)_briefDescription;
-(BOOL)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)_clearReferencesToRelatedGesture:(id)arg1 ;
-(void)_enqueueDelayedTouchesToSend;
-(void)_enqueueDelayedPressesToSend;
-(void)_invalidateInitialTouchType;
-(void)_clearUpdateTimer;
-(id)_installedFailureRequirements;
-(BOOL)_wantsPartialTouchSequences;
-(BOOL)_shouldBegin;
-(NSArray *)allowedPressTypes;
-(void)_updateForceClassifierWithEvent:(id)arg1 ;
-(BOOL)_isFriendWithGesture:(id)arg1 ;
-(void)_enqueueDelayedTouchToSend:(id)arg1 ;
-(void)_enqueueDelayedPressToSend:(id)arg1 ;
-(void)_delayTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)_delayPress:(id)arg1 forEvent:(id)arg2 ;
-(void)_delayTouchesForEvent:(id)arg1 inPhase:(long long)arg2 ;
-(void)_delayPressesForEvent:(id)arg1 inPhase:(long long)arg2 ;
-(void)_clearDelayedTouches;
-(void)_clearDelayedPresses;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(void)_delayTouchesForEventIfNeeded:(id)arg1 ;
-(void)_delayPressesForEventIfNeeded:(id)arg1 ;
-(void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2 ;
-(BOOL)requiresExclusiveTouchType;
-(BOOL)_touchTypeIsAllowed:(id)arg1 ;
-(BOOL)_delegateShouldReceiveTouch:(id)arg1 ;
-(void)_setInitialTouchType:(long long)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)_forceRequirementSatisfied;
-(BOOL)_delegateCanPreventGestureRecognizer:(id)arg1 ;
-(void)_addFailureDependent:(id)arg1 ;
-(void)_removeFailureDependent:(id)arg1 ;
-(id)_relationshipFailureRequirement;
-(BOOL)_requiredPreviewForceStateSatisfiedByForceLevel:(long long)arg1 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(BOOL)arg3 ;
-(BOOL)cancelsTouchesInView;
-(BOOL)delaysTouchesEnded;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4 ;
-(id)_requiredFailureRequirementsForFailureRequirement:(id)arg1 ;
-(id)_dependentFailureRequirementsForFailureRequirement:(id)arg1 ;
-(BOOL)_isFailureRequirementEnabled:(id)arg1 ;
-(BOOL)_shouldDependentFailureRequirementsOfFailureRequirementFail:(id)arg1 ;
-(void)_failureRequirement:(id)arg1 requiredFailureRequirement:(id)arg2 completedWithEvent:(id)arg3 pressesEvent:(id)arg4 ;
-(void)_allFailureRequirementsCompletedRelatedToFailureRequirement:(id)arg1 ;
-(id)_delegateDescriptionForFailureRequirement:(id)arg1 ;
-(id)_gestureRecognizerForFailureRequirement:(id)arg1 ;
-(void)setRequiresExclusiveTouchType:(BOOL)arg1 ;
-(double)lastTouchTimestamp;
-(id)_delayedTouches;
-(BOOL)_hasTargets;
-(long long)_exclusiveDirectionalPressAxis;
-(BOOL)_shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(CGPoint)_centroidOfTouches:(id)arg1 excludingEnded:(BOOL)arg2 ;
-(double)_distanceBetweenTouches:(id)arg1 ;
-(void)_touchWasCancelled:(id)arg1 ;
-(void)_pressWasCancelled:(id)arg1 ;
-(BOOL)_requiresGestureRecognizerToFail:(id)arg1 ;
-(void)_delayedUpdateGesture;
-(void)_resetIfFinished;
-(long long)_depthFirstViewCompare:(id)arg1 ;
-(id)_beganObservable;
-(void)_addFriendGesture:(id)arg1 ;
-(BOOL)_isExcludedByGesture:(id)arg1 ;
-(void)_cancelRecognition;
-(void)_exclude;
-(void)_addDynamicFailureDependent:(id)arg1 ;
-(void)_addDynamicFailureRequirement:(id)arg1 ;
-(void)removeFailureRequirement:(id)arg1 ;
-(BOOL)_acceptsFailureRequirements;
-(BOOL)_inForceCapableEnvironment;
-(long long)_requiredForceLevel;
-(void)_setRequiredForceLevel:(long long)arg1 ;
-(id)_forceLevelClassifier;
-(void)_removeForceTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_invalidate;
-(NSArray *)allowedTouchTypes;
-(id)_defaultAllowedPressTypes;
@end

