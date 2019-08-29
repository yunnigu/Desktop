//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MMWebImageView, NSString, UIView;

@interface WSVideoTagButton : UIButton
{
    UIView *_accessoryView;
    MMWebImageView *_prefixImageView;
    NSString *_prefixIconUrl;
    struct CGSize _prefixIconSize;
}

+ (id)genVideoTagButton;
@property(nonatomic) struct CGSize prefixIconSize; // @synthesize prefixIconSize=_prefixIconSize;
@property(retain, nonatomic) NSString *prefixIconUrl; // @synthesize prefixIconUrl=_prefixIconUrl;
@property(retain, nonatomic) MMWebImageView *prefixImageView; // @synthesize prefixImageView=_prefixImageView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
