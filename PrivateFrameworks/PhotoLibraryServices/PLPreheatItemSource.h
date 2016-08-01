/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPreheatItemSource <NSObject>
@optional
-(void)preheatImageDataAtIndexes:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)imageDataAtIndex:(unsigned long long)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 dataOffset:(int*)arg7;

@required
-(id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 options:(unsigned)arg4;
-(id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(CGSize)arg2 options:(unsigned)arg3;

@end
