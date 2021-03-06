/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol _NCDataSourceManager <NSObject>
@property (assign,nonatomic) id<_NCParentDataSourceManager> parentDataSourceManager; 
@property (nonatomic,readonly) NSArray * dataSources; 
@required
-(void)_start:(/*^block*/id)arg1;
-(void)_stop:(/*^block*/id)arg1;
-(NSArray *)dataSources;
-(id<_NCParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id)arg1;

@end

