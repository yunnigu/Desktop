//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTStyledLabel, NSDate, NSString, UIImageView;

@interface MRTStayServicesRequestStatusCell : UITableViewCell
{
    NSDate *_cellDate;
    NSString *_cellTitle;
    NSString *_imageName;
    MRTStyledLabel *_itemNameLabel;
    MRTStyledLabel *_issueDateLabel;
    UIImageView *_requestItemImageView;
}

@property(retain, nonatomic) UIImageView *requestItemImageView; // @synthesize requestItemImageView=_requestItemImageView;
@property(retain, nonatomic) MRTStyledLabel *issueDateLabel; // @synthesize issueDateLabel=_issueDateLabel;
@property(retain, nonatomic) MRTStyledLabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *cellTitle; // @synthesize cellTitle=_cellTitle;
@property(retain, nonatomic) NSDate *cellDate; // @synthesize cellDate=_cellDate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end
