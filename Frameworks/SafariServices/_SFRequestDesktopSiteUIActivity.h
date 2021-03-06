/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivity.h>

@class _SFReloadOptionsController;

@interface _SFRequestDesktopSiteUIActivity : _SFActivity {

	_SFReloadOptionsController* _reloadOptionsController;

}

@property (nonatomic,readonly) _SFReloadOptionsController * reloadOptionsController;              //@synthesize reloadOptionsController=_reloadOptionsController - In the implementation block
-(id)init;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(id)initWithReloadOptionsController:(id)arg1 ;
-(void)performActivityWithCompletion:(/*^block*/id)arg1 ;
-(_SFReloadOptionsController *)reloadOptionsController;
@end

