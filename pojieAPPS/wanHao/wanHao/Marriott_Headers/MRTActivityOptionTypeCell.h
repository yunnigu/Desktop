//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTCheckBox, UILabel;

@interface MRTActivityOptionTypeCell : UITableViewCell
{
    UILabel *_title;
    MRTCheckBox *_selectionCheckBox;
}

@property(retain, nonatomic) MRTCheckBox *selectionCheckBox; // @synthesize selectionCheckBox=_selectionCheckBox;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

