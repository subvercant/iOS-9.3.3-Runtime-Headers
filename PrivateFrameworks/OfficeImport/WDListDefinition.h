/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, NSString, NSMutableArray;

@interface WDListDefinition : NSObject <NSCopying> {

	WDDocument* mDocument;
	int mListDefinitionId;
	NSString* mStyleId;
	NSString* mStyleRefId;
	int mType;
	NSMutableArray* mLevels;

}

@property (nonatomic,readonly) int listDefinitionId; 
@property (nonatomic,readonly) NSString * styleId; 
@property (nonatomic,copy) NSString * styleRefId; 
-(void)dealloc;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)listDefinitionId;
-(id)levelAt:(int)arg1 ;
-(int)levelCount;
-(NSString *)styleId;
-(id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3 ;
-(id)addLevel;
-(NSString *)styleRefId;
-(void)setStyleRefId:(NSString *)arg1 ;
@end

