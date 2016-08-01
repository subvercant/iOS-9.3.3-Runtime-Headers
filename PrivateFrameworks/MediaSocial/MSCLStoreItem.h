/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPArtworkCatalog, SKUIArtworkList, SSLookupItemArtwork, NSString;

@interface MSCLStoreItem : NSObject <NSCopying> {

	MPArtworkCatalog* _artworkCatalog;
	SKUIArtworkList* _artworkList;
	SSLookupItemArtwork* _artworkTemplate;
	NSString* _artistName;
	NSString* _collectionName;
	NSString* _displayName;
	NSString* _itemIdentifier;
	NSString* _kind;

}

@property (nonatomic,copy) NSString * itemIdentifier;                            //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * kind;                                      //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * collectionName;                            //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,copy) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) SSLookupItemArtwork * artworkTemplate;              //@synthesize artworkTemplate=_artworkTemplate - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;                  //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (nonatomic,copy) SKUIArtworkList * artworkList;                        //@synthesize artworkList=_artworkList - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)kind;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setCollectionName:(NSString *)arg1 ;
-(id)initWithItemDictionary:(id)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)artistName;
-(NSString *)collectionName;
-(SKUIArtworkList *)artworkList;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setArtworkList:(SKUIArtworkList *)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(void)setArtworkTemplate:(SSLookupItemArtwork *)arg1 ;
-(id)copyMediaSocialPostItem;
-(SSLookupItemArtwork *)artworkTemplate;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
@end
