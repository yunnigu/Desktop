//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAFNetworkingRequestGateway.h"

@class MRTLyftAccessToken;

@interface MRTLyftRequestGateway : MRTAFNetworkingRequestGateway
{
    MRTLyftAccessToken *_accessToken;
}

@property(retain, nonatomic) MRTLyftAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)additionalInfoForError:(id)arg1 operation:(id)arg2 request:(id)arg3;
- (void)startLyftAccessTokenWithRequest:(id)arg1;
- (void)requestDidFail:(id)arg1 operation:(id)arg2 error:(id)arg3;
- (void)processAPIRequest:(id)arg1;
- (id)authorizationHeaderValueForRequest:(id)arg1;
- (_Bool)canHandleAPIRequest:(id)arg1;

@end
