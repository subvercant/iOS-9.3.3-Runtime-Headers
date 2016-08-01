/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface CoreUtilsNSSubrangeData : NSData {

	NSData* _data;
	NSRange _range;

}
-(BOOL)_isCompact;
-(id)initWithData:(id)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end
