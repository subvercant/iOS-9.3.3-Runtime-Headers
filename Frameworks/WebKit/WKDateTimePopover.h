/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormRotatingAccessoryPopover.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class WKContentView;

@interface WKDateTimePopover : WKFormRotatingAccessoryPopover <WKFormControl> {

	RetainPtr<WKDateTimePopoverViewController>* _viewController;
	WKContentView* _view;

}
-(id)viewController;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)clear:(id)arg1 ;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
@end

