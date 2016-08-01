/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSMutableArray, NSValue;

@interface UIKBTouchOrderedTaskList : NSObject {

	NSUUID* _touchUUID;
	NSMutableArray* _touchStateTasks;
	NSValue* _currentTouchPoint;
	BOOL _ignoredOnBegin;
	unsigned long long _pathIndex;
	double _originalStartTime;

}

@property (nonatomic,retain,readonly) NSUUID * touchUUID;                       //@synthesize touchUUID=_touchUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long pathIndex;                    //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) double originalStartTime;                        //@synthesize originalStartTime=_originalStartTime - In the implementation block
@property (nonatomic,retain,readonly) NSValue * currentTouchPoint;              //@synthesize currentTouchPoint=_currentTouchPoint - In the implementation block
@property (assign,nonatomic) BOOL ignoredOnBegin;                               //@synthesize ignoredOnBegin=_ignoredOnBegin - In the implementation block
@property (nonatomic,readonly) BOOL hasTasks; 
+(id)taskListForTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)addTask:(id)arg1 ;
-(NSUUID *)touchUUID;
-(unsigned long long)pathIndex;
-(id)initWithTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2 ;
-(BOOL)hasTasks;
-(BOOL)executeTasksInView:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)firstTouchStateForUITouchPhase:(long long)arg1 ;
-(NSValue *)currentTouchPoint;
-(double)originalStartTime;
-(BOOL)ignoredOnBegin;
-(void)setIgnoredOnBegin:(BOOL)arg1 ;
@end
