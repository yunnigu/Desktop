//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface CommonVFullScreenVC : UIViewController
{
    long long _presentedOrientation;
}

@property(nonatomic) long long presentedOrientation; // @synthesize presentedOrientation=_presentedOrientation;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
