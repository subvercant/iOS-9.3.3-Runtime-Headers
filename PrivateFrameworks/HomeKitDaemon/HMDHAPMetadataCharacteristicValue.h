/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPMetadataCharacteristicValue;

@interface HMDHAPMetadataCharacteristicValue : NSObject <NSSecureCoding> {

	HAPMetadataCharacteristicValue* _hapValueMetadata;

}

@property (nonatomic,retain) HAPMetadataCharacteristicValue * hapValueMetadata;              //@synthesize hapValueMetadata=_hapValueMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setHapValueMetadata:(HAPMetadataCharacteristicValue *)arg1 ;
-(id)initWithHAPCharacteristicValue:(id)arg1 ;
-(HAPMetadataCharacteristicValue *)hapValueMetadata;
@end
