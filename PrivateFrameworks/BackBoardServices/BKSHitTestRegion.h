/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BKSHitTestRegion : NSObject <NSSecureCoding> {

	CGRect _rect;
	CGRect _exclusiveTouchNormalizedSubRect;
	CGRect _exclusiveTouchNormalizedSubRectInReferenceSpace;

}

@property (nonatomic,readonly) CGRect rect;                                                                                                                 //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) CGRect exclusiveTouchNormalizedSubRect;                                                                                        //@synthesize exclusiveTouchNormalizedSubRect=_exclusiveTouchNormalizedSubRect - In the implementation block
@property (getter=_exclusiveTouchNormalizedSubRectInReferenceSpace,nonatomic,readonly) CGRect exclusiveTouchNormalizedSubRectInReferenceSpace;              //@synthesize exclusiveTouchNormalizedSubRectInReferenceSpace=_exclusiveTouchNormalizedSubRectInReferenceSpace - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithRect:(CGRect)arg1 exclusiveTouchNormalizedSubRect:(CGRect)arg2 ;
-(void)setExclusiveTouchNormalizedSubRect:(CGRect)arg1 ;
-(CGRect)exclusiveTouchNormalizedSubRect;
-(CGRect)_exclusiveTouchNormalizedSubRectInReferenceSpace;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGRect)rect;
-(id)initWithRect:(CGRect)arg1 ;
@end

