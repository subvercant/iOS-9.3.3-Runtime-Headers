/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CKDPProtectionInfo, NSMutableArray, CKDPShareIdentifier;

@interface CKDPShare : PBCodable <NSCopying> {

	NSString* _etag;
	NSData* _internalAppSpecificMetadata;
	CKDPProtectionInfo* _invitedPcs;
	NSMutableArray* _participants;
	int _publicAccess;
	CKDPProtectionInfo* _selfAddedPcs;
	CKDPShareIdentifier* _shareId;
	NSData* _shortTokenHash;
	NSString* _shortTokenRoutingKey;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                      //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                    //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) BOOL hasPublicAccess; 
@property (assign,nonatomic) int publicAccess;                                   //@synthesize publicAccess=_publicAccess - In the implementation block
@property (nonatomic,readonly) BOOL hasInvitedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * invitedPcs;                    //@synthesize invitedPcs=_invitedPcs - In the implementation block
@property (nonatomic,readonly) BOOL hasSelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * selfAddedPcs;                  //@synthesize selfAddedPcs=_selfAddedPcs - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;                      //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenRoutingKey; 
@property (nonatomic,retain) NSString * shortTokenRoutingKey;                    //@synthesize shortTokenRoutingKey=_shortTokenRoutingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasInternalAppSpecificMetadata; 
@property (nonatomic,retain) NSData * internalAppSpecificMetadata;               //@synthesize internalAppSpecificMetadata=_internalAppSpecificMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                            //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(NSMutableArray *)participants;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(BOOL)hasShareId;
-(BOOL)hasShortTokenHash;
-(CKDPShareIdentifier *)shareId;
-(NSData *)shortTokenHash;
-(void)setSelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasSelfAddedPcs;
-(CKDPProtectionInfo *)selfAddedPcs;
-(void)addParticipant:(id)arg1 ;
-(void)setInvitedPcs:(CKDPProtectionInfo *)arg1 ;
-(unsigned long long)participantsCount;
-(void)clearParticipants;
-(id)participantAtIndex:(unsigned long long)arg1 ;
-(void)setShortTokenRoutingKey:(NSString *)arg1 ;
-(void)setInternalAppSpecificMetadata:(NSData *)arg1 ;
-(int)publicAccess;
-(void)setPublicAccess:(int)arg1 ;
-(void)setHasPublicAccess:(BOOL)arg1 ;
-(BOOL)hasPublicAccess;
-(BOOL)hasInvitedPcs;
-(BOOL)hasShortTokenRoutingKey;
-(BOOL)hasInternalAppSpecificMetadata;
-(CKDPProtectionInfo *)invitedPcs;
-(NSString *)shortTokenRoutingKey;
-(NSData *)internalAppSpecificMetadata;
@end
