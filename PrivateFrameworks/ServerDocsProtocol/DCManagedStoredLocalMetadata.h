/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface DCManagedStoredLocalMetadata : NSManagedObject
+(id)entityName;
+(id)storedLocalMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)dictionaryRepresentation;
-(void)updateWithStoredLocalMetadataDictionary:(id)arg1 ;
@end

