/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScreen;

@interface UIKBScreenTraits : NSObject {

	BOOL _knobInput;
	BOOL _touchInput;
	BOOL _touchpadInput;
	BOOL _isKeyboardMinorEdgeWidth;
	UIScreen* _screen;
	long long _orientation;
	double _keyboardWidth;

}

@property (nonatomic,readonly) UIScreen * screen;                          //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) BOOL knobInput;                             //@synthesize knobInput=_knobInput - In the implementation block
@property (nonatomic,readonly) BOOL touchInput;                            //@synthesize touchInput=_touchInput - In the implementation block
@property (nonatomic,readonly) BOOL touchpadInput;                         //@synthesize touchpadInput=_touchpadInput - In the implementation block
@property (assign,nonatomic) long long orientation;                        //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double keyboardWidth;                         //@synthesize keyboardWidth=_keyboardWidth - In the implementation block
@property (nonatomic,readonly) BOOL isKeyboardMinorEdgeWidth;              //@synthesize isKeyboardMinorEdgeWidth=_isKeyboardMinorEdgeWidth - In the implementation block
+(id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ;
-(id)description;
-(void)setOrientation:(long long)arg1 ;
-(UIScreen *)screen;
-(long long)orientation;
-(long long)idiom;
-(void)updateForTextInputTraits:(id)arg1 supportsTouchInput:(id)arg2 ;
-(BOOL)isKeyboardMinorEdgeWidth;
-(double)keyboardWidth;
-(id)initWithScreen:(id)arg1 orientation:(long long)arg2 ;
-(BOOL)touchInput;
-(BOOL)knobInput;
-(BOOL)touchpadInput;
-(void)setKeyboardWidth:(double)arg1 ;
@end

