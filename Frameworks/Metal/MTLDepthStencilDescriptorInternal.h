/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLDepthStencilDescriptor.h>

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {

	MTLDepthStencilDescriptorPrivate _private;

}

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
-(const MTLDepthStencilDescriptorPrivate*)depthStencilPrivate;
-(unsigned long long)depthCompareFunction;
-(BOOL)isDepthWriteEnabled;
-(void)setFrontFaceStencil:(id)arg1 ;
-(void)setBackFaceStencil:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)setDepthCompareFunction:(unsigned long long)arg1 ;
-(void)setDepthWriteEnabled:(BOOL)arg1 ;
-(id)frontFaceStencil;
-(id)backFaceStencil;
@end

