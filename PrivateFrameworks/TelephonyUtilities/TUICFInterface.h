/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
@interface TUICFInterface : NSObject
+(void)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(CFStringRef)serviceIdentifierForService:(int)arg1 isRelay:(BOOL)arg2 ;
+(int)serviceForServiceIdentifier:(id)arg1 ;
+(BOOL)serviceIdentifierIsRelay:(id)arg1 ;
+(BOOL)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(BOOL)arg3 ;
@end

