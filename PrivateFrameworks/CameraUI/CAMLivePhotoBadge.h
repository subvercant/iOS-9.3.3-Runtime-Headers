/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMBadgeTextView.h>

@interface CAMLivePhotoBadge : CAMBadgeTextView {

	long long _irisMode;

}

@property (assign,nonatomic) long long irisMode;              //@synthesize irisMode=_irisMode - In the implementation block
-(double)_cornerRadius;
-(id)_text;
-(id)_textAttributes;
-(void)setIrisMode:(long long)arg1 ;
-(long long)irisMode;
-(UIEdgeInsets)_textInsets;
-(void)_updateFromIrisModeChange;
@end

