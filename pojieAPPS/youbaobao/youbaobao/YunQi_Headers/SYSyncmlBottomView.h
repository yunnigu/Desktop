//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SYSyncmlBottomViewItem, UIImageView;

@interface SYSyncmlBottomView : UIView
{
    SYSyncmlBottomViewItem *_phoneView;
    UIImageView *_lineImageView;
    SYSyncmlBottomViewItem *_cloudView;
}

@property(retain, nonatomic) SYSyncmlBottomViewItem *cloudView; // @synthesize cloudView=_cloudView;
@property(retain, nonatomic) UIImageView *lineImageView; // @synthesize lineImageView=_lineImageView;
@property(retain, nonatomic) SYSyncmlBottomViewItem *phoneView; // @synthesize phoneView=_phoneView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

