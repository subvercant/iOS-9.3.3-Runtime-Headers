/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFocusUpdateContext.h>

@class NSIndexPath, UITableView;

@interface UITableViewFocusUpdateContext : UIFocusUpdateContext {

	BOOL _didSetPreviouslyFocusedIndexPath;
	BOOL _didSetNextFocusedIndexPath;
	NSIndexPath* _previouslyFocusedIndexPath;
	NSIndexPath* _nextFocusedIndexPath;
	UITableView* _tableView;

}

@property (nonatomic,readonly) NSIndexPath * previouslyFocusedIndexPath;              //@synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * nextFocusedIndexPath;                    //@synthesize nextFocusedIndexPath=_nextFocusedIndexPath - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * tableView;                        //@synthesize tableView=_tableView - In the implementation block
+(id)_contextWithContext:(id)arg1 tableView:(id)arg2 ;
-(void)_setSourceView:(id)arg1 ;
-(id)_initWithContext:(id)arg1 tableView:(id)arg2 ;
-(UITableView *)tableView;
-(void)_setInitialDestinationEnvironment:(id)arg1 ;
-(NSIndexPath *)previouslyFocusedIndexPath;
-(NSIndexPath *)nextFocusedIndexPath;
@end
