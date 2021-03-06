/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UIView, UITextInputTraits;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,__weak,readonly) UITextInputTraits * textInputTraits; 
-(void)layoutSubviews;
-(UITextInputTraits *)textInputTraits;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(void)notePasscodeFieldTextDidChange;
-(void)setCustomBackgroundColor:(id)arg1 ;
@end

