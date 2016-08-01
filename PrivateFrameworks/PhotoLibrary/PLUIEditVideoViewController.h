/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIImageViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSDictionary, UIImagePickerController, UINavigationItem, NSString;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSDictionary* _options;
	UIImagePickerController* _imagePicker;
	UINavigationItem* _navItem;
	id _delegate;
	Class _viewClass;
	unsigned _canCreateMetadata;
	BOOL _parentInPopoverException;

}

@property (assign,nonatomic) BOOL parentInPopoverException;              //@synthesize parentInPopoverException=_parentInPopoverException - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)navigationItem;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)_displaysFullScreen;
-(id)initWithProperties:(id)arg1 ;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2 ;
-(void)videoViewPlaybackDidFail:(id)arg1 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg1 ;
-(int)cropOverlayMode;
-(CGRect)previewFrame;
-(Class)_viewClass;
-(id)uiipc_imagePickerOptions;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(id)_trimMessage;
-(BOOL)_editingForThirdParty;
-(void)_cancelTrim:(id)arg1 ;
-(void)_trimVideo:(id)arg1 ;
-(void)_setupNavigationItemAndTrimTitle:(id)arg1 ;
-(BOOL)parentInPopoverException;
-(void)setViewClass:(Class)arg1 ;
-(id)uiipc_imagePickerController;
-(id)initWithPhoto:(id)arg1 trimTitle:(id)arg2 ;
-(id)initWithVideoURL:(id)arg1 trimTitle:(id)arg2 ;
-(void)setParentInPopoverException:(BOOL)arg1 ;
-(void)setImagePickerOptions:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
@end
