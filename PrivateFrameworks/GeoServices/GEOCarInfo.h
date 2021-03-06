/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOCarInfo : PBCodable <NSCopying> {

	SCD_Struct_GE173 _screenResolution;
	int _deviceConnection;
	int _interactionModel;
	NSString* _manufacturer;
	NSString* _model;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasInteractionModel; 
@property (assign,nonatomic) int interactionModel;                           //@synthesize interactionModel=_interactionModel - In the implementation block
@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                        //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasScreenResolution; 
@property (assign,nonatomic) SCD_Struct_GE174 screenResolution;              //@synthesize screenResolution=_screenResolution - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceConnection; 
@property (assign,nonatomic) int deviceConnection;                           //@synthesize deviceConnection=_deviceConnection - In the implementation block
+(id)carInfoWithTraits:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)interactionModel;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setDeviceConnection:(int)arg1 ;
-(BOOL)hasModel;
-(void)setInteractionModel:(int)arg1 ;
-(BOOL)hasManufacturer;
-(int)deviceConnection;
-(BOOL)hasScreenResolution;
-(NSString *)manufacturer;
-(BOOL)hasInteractionModel;
-(void)setHasScreenResolution:(BOOL)arg1 ;
-(BOOL)hasDeviceConnection;
-(SCD_Struct_GE174)screenResolution;
-(void)setHasInteractionModel:(BOOL)arg1 ;
-(void)setScreenResolution:(SCD_Struct_GE174)arg1 ;
-(void)setHasDeviceConnection:(BOOL)arg1 ;
@end

