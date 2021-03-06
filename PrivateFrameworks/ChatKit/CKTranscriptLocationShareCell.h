/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface CKTranscriptLocationShareCell : UITableViewCell {

	BOOL _showOfferTimeRemaining;
	double _offerTimeRemaining;
	UILabel* _timeRemainingLabel;

}

@property (assign,nonatomic) BOOL showOfferTimeRemaining;               //@synthesize showOfferTimeRemaining=_showOfferTimeRemaining - In the implementation block
@property (assign,nonatomic) double offerTimeRemaining;                 //@synthesize offerTimeRemaining=_offerTimeRemaining - In the implementation block
@property (nonatomic,retain) UILabel * timeRemainingLabel;              //@synthesize timeRemainingLabel=_timeRemainingLabel - In the implementation block
+(id)identifier;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTimeRemainingLabel:(UILabel *)arg1 ;
-(UILabel *)timeRemainingLabel;
-(BOOL)showOfferTimeRemaining;
-(id)timeStringForTimeInterval:(double)arg1 ;
-(void)setShowOfferTimeRemaining:(BOOL)arg1 ;
-(void)setOfferTimeRemaining:(double)arg1 ;
-(double)offerTimeRemaining;
@end

