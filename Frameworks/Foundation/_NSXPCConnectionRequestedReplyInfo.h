/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress;

@interface _NSXPCConnectionRequestedReplyInfo : NSObject {

	/*^block*/id _cleanupBlock;
	NSProgress* _progress;

}

@property (copy) id cleanupBlock;                      //@synthesize cleanupBlock=_cleanupBlock - In the implementation block
@property (retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
-(id)cleanupBlock;
-(void)setCleanupBlock:(id)arg1 ;
-(void)dealloc;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
@end
