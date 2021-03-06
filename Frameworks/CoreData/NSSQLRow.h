/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSExternalRefCountedData.h>

@class _CDSnapshot;

@interface NSSQLRow : NSExternalRefCountedData {

	_CDSnapshot* _snapshot;

}
+(id)allocForSQLEntity:(id)arg1 ;
+(unsigned)newBatchRowAllocation:(id*)arg1 count:(unsigned)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(NSScalarObjectID*)arg4 andTimestamp:(double)arg5 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)sqlEntity;
-(long long)pk64;
-(unsigned)sqlEntityID;
-(long long)optLock;
-(long long)foreignKeyForSlot:(unsigned)arg1 ;
-(unsigned)foreignEntityKeyForSlot:(unsigned)arg1 ;
-(unsigned)foreignOrderKeyForSlot:(unsigned)arg1 ;
-(id)attributeValueForSlot:(unsigned)arg1 ;
-(CFBitVectorRef)newUpdateMaskForConstrainedValues;
-(CFBitVectorRef)newUpdateMaskFrom:(id)arg1 ;
-(void)setOptLock:(long long)arg1 ;
-(unsigned)_versionNumber;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(id)initWithSQLEntity:(id)arg1 objectID:(NSScalarObjectID*)arg2 ;
-(void)setForeignEntityKeySlot:(unsigned)arg1 entityKey:(unsigned)arg2 ;
-(void)setForeignKeySlot:(unsigned)arg1 int64:(long long)arg2 ;
-(void)setForeignOrderKeySlot:(unsigned)arg1 orderKey:(unsigned)arg2 ;
-(id)initWithSQLEntity:(id)arg1 ownedObjectID:(NSScalarObjectID*)arg2 andTimestamp:(double)arg3 ;
-(void)_validateToOnes;
-(NSScalarObjectID*)newObjectIDForToOne:(id)arg1 ;
-(CFBitVectorRef)newColumnMaskFrom:(id)arg1 columnInclusionOptions:(unsigned long long)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copy;
-(long long)version;
-(void)setObjectID:(NSScalarObjectID*)arg1 ;
-(NSScalarObjectID*)objectID;
@end

