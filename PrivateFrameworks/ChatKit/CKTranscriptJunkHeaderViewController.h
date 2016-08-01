/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptHeaderViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol CKTranscriptJunkHeaderDelegate;
@class NSString;

@interface CKTranscriptJunkHeaderViewController : CKTranscriptHeaderViewController <UIPopoverPresentationControllerDelegate> {

	id<CKTranscriptJunkHeaderDelegate> _delegate;

}

@property (assign,nonatomic) id<CKTranscriptJunkHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKTranscriptJunkHeaderDelegate>)arg1 ;
-(void)dealloc;
-(id<CKTranscriptJunkHeaderDelegate>)delegate;
-(void)loadView;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(BOOL)shouldInvalidateOnAddressBookChange;
-(void)_reportJunkButtonPressed:(id)arg1 ;
-(void)_ignoreButtonPressed:(id)arg1 ;
@end
