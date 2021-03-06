/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray, QLPackageChecker;

@interface QLPathTree : NSObject {

	NSString* _path;
	NSMutableDictionary* _directoryChildren;
	NSMutableArray* _packageChildren;
	QLPackageChecker* _packageChecker;

}

@property (copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(BOOL)isPackage;
-(id)description;
-(NSString *)path;
-(id)initWithPath:(id)arg1 isPackage:(BOOL)arg2 packageChecker:(id)arg3 ;
-(void)addPathInsidePackage:(id)arg1 ;
-(void)addPathComponents:(id)arg1 ;
-(void)insertInItemsSource:(id)arg1 archiveController:(id)arg2 atIndex:(unsigned long long*)arg3 uiIndex:(unsigned long long*)arg4 level:(long long)arg5 ;
-(id)initWithPackageChecker:(id)arg1 ;
-(void)insertInItemsSource:(id)arg1 archiveController:(id)arg2 ;
-(BOOL)isFolder;
-(void)addPath:(id)arg1 ;
@end

