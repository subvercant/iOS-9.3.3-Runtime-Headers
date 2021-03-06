/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, SKUIMediaSocialProfile;

@interface SKUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	SKUIMediaSocialProfile* _profile;

}

@property (copy) id outputBlock; 
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)outputBlock;
-(id)_silhouette;
-(void)_returnPhoto:(id)arg1 isFinal:(BOOL)arg2 ;
-(void)_fetchProfile;
-(void)_fetchMonogram;
-(void)_fetchPhoto;
@end

