/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileLookup/MobileLookup-Structs.h>
#import <MobileLookup/MLULookupItemContent.h>

@class DDPreviewAction;

@interface MLULookupItemDDContent : MLULookupItemContent {

	DDPreviewAction* _previewAction;

}
-(unsigned long long)commitType;
-(id)contact;
-(id)commitURL;
-(void)dismissViewController;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 documentProperties:(id)arg3 ;
-(void)setupViewControllerInCommitMode;
@end
