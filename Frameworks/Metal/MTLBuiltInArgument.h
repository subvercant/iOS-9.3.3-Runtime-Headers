/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLBuiltInArgument : MTLArgumentInternal {

	unsigned short _builtInType;
	unsigned short _builtInDataType;

}
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(BOOL)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7 ;
-(unsigned long long)builtInDataType;
-(unsigned long long)builtInType;
@end

