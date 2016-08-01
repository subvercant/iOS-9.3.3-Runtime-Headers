/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSArray;

@interface ISDialogOperation : ISOperation {

	ISDialog* _dialog;
	BOOL _performDefaultActions;
	ISDialogButton* _selectedButton;
	NSArray* _textFieldValues;
	id _userNotification;

}

@property (assign) id<ISDialogOperationDelegate> delegate; 
@property (retain) ISDialog * dialog;                                   //@synthesize dialog=_dialog - In the implementation block
@property (assign) BOOL performDefaultActions;                          //@synthesize performDefaultActions=_performDefaultActions - In the implementation block
@property (retain) ISDialogButton * selectedButton;                     //@synthesize selectedButton=_selectedButton - In the implementation block
@property (readonly) NSArray * textFieldValues; 
@property (retain) id userNotification;                                 //@synthesize userNotification=_userNotification - In the implementation block
+(id)operationWithDialog:(id)arg1 ;
+(id)operationWithError:(id)arg1 ;
-(NSArray *)textFieldValues;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)_run;
-(void)run;
-(void)setSelectedButton:(ISDialogButton *)arg1 ;
-(void)setUserNotification:(id)arg1 ;
-(BOOL)performDefaultActions;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(void)_showUserNotification:(id)arg1 ;
-(void)_waitForUserNotificationResponse:(CFUserNotificationRef)arg1 ;
-(void)_handleResponseForNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
-(void)setPerformDefaultActions:(BOOL)arg1 ;
-(ISDialogButton *)selectedButton;
-(ISDialog *)dialog;
-(id)userNotification;
-(void)setDialog:(ISDialog *)arg1 ;
@end
