//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NIMSessionInteractorImpl, NIMSessionTableAdapter;

@interface NIMSessionConfigurator : NSObject
{
    NIMSessionInteractorImpl *_interactor;
    NIMSessionTableAdapter *_tableAdapter;
}

@property(retain, nonatomic) NIMSessionTableAdapter *tableAdapter; // @synthesize tableAdapter=_tableAdapter;
@property(retain, nonatomic) NIMSessionInteractorImpl *interactor; // @synthesize interactor=_interactor;
- (void).cxx_destruct;
- (void)setup:(id)arg1;

@end
