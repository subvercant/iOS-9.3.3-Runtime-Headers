/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLocalizedName : PBCodable <NSCopying> {

	NSString* _languageCode;
	NSString* _name;
	unsigned _nameRank;
	NSString* _nameType;
	NSString* _phoneticName;
	BOOL _isDefault;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasIsDefault; 
@property (assign,nonatomic) BOOL isDefault;                       //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasNameType; 
@property (nonatomic,retain) NSString * nameType;                  //@synthesize nameType=_nameType - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasNameRank; 
@property (assign,nonatomic) unsigned nameRank;                    //@synthesize nameRank=_nameRank - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;              //@synthesize phoneticName=_phoneticName - In the implementation block
-(id)initWithPlaceDataLocalizedString:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)hasLanguageCode;
-(void)setPhoneticName:(NSString *)arg1 ;
-(NSString *)phoneticName;
-(BOOL)hasPhoneticName;
-(BOOL)hasName;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(BOOL)hasNameType;
-(NSString *)nameType;
-(BOOL)hasNameRank;
-(void)setHasNameRank:(BOOL)arg1 ;
-(BOOL)hasIsDefault;
-(unsigned)nameRank;
-(void)setNameType:(NSString *)arg1 ;
-(void)setHasIsDefault:(BOOL)arg1 ;
-(void)setNameRank:(unsigned)arg1 ;
@end

