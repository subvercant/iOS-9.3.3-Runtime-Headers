/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSMapTable, ACAccountStore, ACAccountCredential, OAURLRequestSigner, NSString;

@interface MKMapItemMetadataRequester : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate> {

	NSURLSession* _session;
	NSMapTable* _requestsForURLs;
	NSMapTable* _tasksForURLs;
	NSMapTable* _dataForTasks;
	BOOL _hasCheckedYelpAccountCredentials;
	ACAccountStore* _accountStore;
	ACAccountCredential* _yelpAccountCredentials;
	OAURLRequestSigner* _signer;

}

@property (nonatomic,readonly) OAURLRequestSigner * signer; 
@property (nonatomic,readonly) ACAccountCredential * yelpAccountCredentials; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(id)accountStore;
-(ACAccountCredential *)yelpAccountCredentials;
-(void)cancelRequestsForMapItem:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(OAURLRequestSigner *)signer;
-(void)handleTask:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
@end

