/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, _DKEventMO, _DKSourceMO, NSSet;

@interface _DKObjectMO : NSManagedObject

@property (assign,nonatomic) double creationDate; 
@property (nonatomic,retain) NSData * metadata; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) long long uuidHash; 
@property (nonatomic,retain) _DKEventMO * event; 
@property (nonatomic,retain) _DKSourceMO * source; 
@property (nonatomic,retain) NSSet * relationSubject; 
@property (nonatomic,retain) NSSet * relationObject; 
@end
