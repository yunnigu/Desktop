//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MRTDeepLink : NSObject
{
    NSURL *_URL;
}

+ (id)deepLinkToAppNavigationParameterMap;
+ (_Bool)deepLinkParametersAreCaseSensitive;
+ (id)featureToAppNavigationIdMap;
+ (id)URLFeatureIDParameterKey;
+ (id)supportedURLSchemes;
+ (_Bool)supportsURL:(id)arg1;
+ (id)deepLinkWithURL:(id)arg1;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)stringWithQuotes:(id)arg1;
- (id)_appNavigationParameters;
- (id)appNavigationDestinationString;
- (id)destinationIdForAppNavigationParameters:(id)arg1;
- (id)featureIdForURLComponents:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

