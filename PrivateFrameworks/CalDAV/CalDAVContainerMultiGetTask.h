/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:38 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerMultiGetTask.h>

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {

	BOOL _getScheduleTags;
	BOOL _getScheduleChanges;

}

@property (assign,nonatomic) BOOL getScheduleTags;                 //@synthesize getScheduleTags=_getScheduleTags - In the implementation block
@property (assign,nonatomic) BOOL getScheduleChanges;              //@synthesize getScheduleChanges=_getScheduleChanges - In the implementation block
-(void)setGetScheduleTags:(BOOL)arg1 ;
-(void)setGetScheduleChanges:(BOOL)arg1 ;
-(BOOL)getScheduleTags;
-(BOOL)getScheduleChanges;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 appSpecificCalendarItemClass:(Class)arg5 ;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 ;
-(id)copyAdditionalPropElements;
-(void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2 ;
@end
