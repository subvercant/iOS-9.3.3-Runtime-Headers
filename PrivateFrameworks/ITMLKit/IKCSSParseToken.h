/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSParseObject.h>

@class IKCSSToken;

@interface IKCSSParseToken : IKCSSParseObject {

	IKCSSToken* _token;

}

@property (nonatomic,retain) IKCSSToken * token;              //@synthesize token=_token - In the implementation block
-(id)init;
-(id)description;
-(IKCSSToken *)token;
-(void)setToken:(IKCSSToken *)arg1 ;
@end
