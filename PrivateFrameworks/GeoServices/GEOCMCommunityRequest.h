/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, NSMutableArray, GEOCMTicketFollowup, GEOCMTicketStatus, GEOCMTicketSubmission, GEORPUserCredentials;

@interface GEOCMCommunityRequest : PBRequest <NSCopying> {

	GEOPDAnalyticMetadata* _analyticMetadata;
	GEOPDClientMetadata* _clientMetadata;
	NSMutableArray* _displayLocales;
	int _requestType;
	NSMutableArray* _spokenLocales;
	GEOCMTicketFollowup* _ticketFollowup;
	GEOCMTicketStatus* _ticketStatus;
	GEOCMTicketSubmission* _ticketSubmission;
	GEORPUserCredentials* _userCredentials;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                       //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;              //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;                  //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLocales;                       //@synthesize displayLocales=_displayLocales - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenLocales;                        //@synthesize spokenLocales=_spokenLocales - In the implementation block
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;                //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketSubmission; 
@property (nonatomic,retain) GEOCMTicketSubmission * ticketSubmission;              //@synthesize ticketSubmission=_ticketSubmission - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketFollowup; 
@property (nonatomic,retain) GEOCMTicketFollowup * ticketFollowup;                  //@synthesize ticketFollowup=_ticketFollowup - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketStatus; 
@property (nonatomic,retain) GEOCMTicketStatus * ticketStatus;                      //@synthesize ticketStatus=_ticketStatus - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequestType;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasClientMetadata;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(GEOPDClientMetadata *)clientMetadata;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(BOOL)hasUserCredentials;
-(BOOL)hasTicketSubmission;
-(void)setTicketStatus:(GEOCMTicketStatus *)arg1 ;
-(void)setTicketSubmission:(GEOCMTicketSubmission *)arg1 ;
-(unsigned long long)displayLocalesCount;
-(BOOL)hasTicketFollowup;
-(GEOCMTicketStatus *)ticketStatus;
-(void)clearSpokenLocales;
-(void)setDisplayLocales:(NSMutableArray *)arg1 ;
-(NSMutableArray *)displayLocales;
-(GEOCMTicketFollowup *)ticketFollowup;
-(void)addDisplayLocale:(id)arg1 ;
-(void)setTicketFollowup:(GEOCMTicketFollowup *)arg1 ;
-(GEOCMTicketSubmission *)ticketSubmission;
-(void)clearDisplayLocales;
-(unsigned long long)spokenLocalesCount;
-(id)displayLocaleAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)spokenLocales;
-(id)spokenLocaleAtIndex:(unsigned long long)arg1 ;
-(void)addSpokenLocale:(id)arg1 ;
-(void)setSpokenLocales:(NSMutableArray *)arg1 ;
-(BOOL)hasTicketStatus;
-(int)requestType;
@end
