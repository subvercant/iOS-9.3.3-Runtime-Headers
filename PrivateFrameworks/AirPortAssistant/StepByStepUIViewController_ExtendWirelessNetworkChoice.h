/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <libobjc.A.dylib/StepByStepUIDevicePicker.h>

@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	int _selectorChoice;

}
-(BOOL)canBeExtendedWithDWDS;
-(void)addBrowsedRecords:(id)arg1 toDestList:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateNavigationButtons;
-(void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2 ;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)selectedDeviceUpdated;
@end

