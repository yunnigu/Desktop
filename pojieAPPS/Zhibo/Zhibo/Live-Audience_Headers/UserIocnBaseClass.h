//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL, UIImageView;

@interface UserIocnBaseClass : UIView
{
    NSURL *_iocnUrl;
    UIView *_backgroundView;
    UIImageView *_userIocn;
    UIImageView *_userLevel;
}

@property(retain, nonatomic) UIImageView *userLevel; // @synthesize userLevel=_userLevel;
@property(retain, nonatomic) UIImageView *userIocn; // @synthesize userIocn=_userIocn;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSURL *iocnUrl; // @synthesize iocnUrl=_iocnUrl;
- (void).cxx_destruct;
- (void)initialization;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

