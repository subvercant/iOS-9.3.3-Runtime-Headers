/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextReplacementGenerator.h>

@class NSTextAlternatives;

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator {

	NSTextAlternatives* _alternatives;

}

@property (nonatomic,readonly) NSTextAlternatives * alternatives;              //@synthesize alternatives=_alternatives - In the implementation block
-(id)replacements;
-(id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3 ;
-(NSTextAlternatives *)alternatives;
@end

