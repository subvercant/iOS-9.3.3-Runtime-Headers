/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol _MFSearchResultsConsumer;
@class NSArray;

@interface _MFSearchAddResultsOperation : NSOperation {

	id<_MFSearchResultsConsumer> _consumer;
	unsigned long long _type;
	NSArray* _results;

}
+(id)operationWithResults:(id)arg1 ofType:(unsigned long long)arg2 consumer:(id)arg3 ;
-(void)dealloc;
-(void)main;
@end
