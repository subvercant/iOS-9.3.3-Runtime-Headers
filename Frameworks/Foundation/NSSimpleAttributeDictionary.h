/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSSimpleAttributeDictionary : NSDictionary {

	unsigned numElements;
	unsigned refCount;
	NSSimpleAttributeDictionaryElement elements[1];

}
+(id)newWithDictionary:(id)arg1 ;
+(id)emptyAttributeDictionary;
-(id)newWithKey:(id)arg1 object:(id)arg2 ;
-(unsigned long long)slotForKey:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end
