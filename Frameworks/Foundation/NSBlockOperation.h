/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray;

@interface NSBlockOperation : NSOperation {

	id _private2;
	void* _reserved2;

}

@property (copy,readonly) NSArray * executionBlocks; 
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)executionBlocks;
-(void)dealloc;
-(id)init;
-(void)main;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)finalize;
@end
