//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BrandProfileArticle, MMUILabel, MMWebImageView, UIImageView, UIView;

@interface BrandProfileArticleCell : UITableViewCell
{
    MMUILabel *_titleLabel;
    MMWebImageView *_imageView;
    UIImageView *_typeView;
    MMUILabel *_originalLabel;
    MMUILabel *_fansLabel;
    UIView *_dividingView;
    BrandProfileArticle *_article;
}

+ (double)cellHeight:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) BrandProfileArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)getImageView;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

