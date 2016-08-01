/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {

	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigTrackReaderRef _trackReader;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(long long)layer;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEnabled;
-(id)asset;
-(CGSize)dimensions;
-(id)languageCode;
-(CGSize)naturalSize;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(long long)totalSampleDataLength;
-(BOOL)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(SCD_Struct_CM5)minSampleDuration;
-(id)segmentForTrackTime:(SCD_Struct_CM5)arg1 ;
-(long long)alternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned)_figMediaType;
-(id)mediaCharacteristics;
-(id)extendedLanguageTag;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(id)segments;
-(id)mediaType;
-(float)nominalFrameRate;
-(SCD_Struct_CM6)timeRange;
-(BOOL)isPlayable;
-(int)trackID;
-(void)finalize;
@end
