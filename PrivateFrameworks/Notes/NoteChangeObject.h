/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NoteStoreObject, NSNumber, NSMutableSet;

@interface NoteChangeObject : NSManagedObject

@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * changeType; 
@property (nonatomic,retain) NSMutableSet * noteIntegerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIntIds; 
@end
