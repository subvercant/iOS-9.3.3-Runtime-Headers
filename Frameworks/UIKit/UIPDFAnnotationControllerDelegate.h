/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPDFAnnotationControllerDelegate
@optional
-(BOOL)willTrackAnnotationAtPoint:(CGPoint)arg1 controller:(id)arg2;
-(void)annotation:(id)arg1 didEndTrackingAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotationWasRemoved:(id)arg1 controller:(id)arg2;
-(CGImageRef)newHighlightMaskImage:(CGRect)arg1 controller:(id)arg2;
-(CGImageRef)underlineImage:(CGRect)arg1 controller:(id)arg2;
-(CGSize*)marginNoteImageSize:(id)arg1;
-(id)marginNoteImage:(id)arg1 controller:(id)arg2;

@end
