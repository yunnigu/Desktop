//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLHucaiContentCell.h"

@class IMYTLHucaiEidtPhotoView, IMYTLHucaiPrintPhotosModel, UIButton;

@interface IMYTLHucaiPrintPhotosCell : IMYTLHucaiContentCell
{
    IMYTLHucaiEidtPhotoView *_photoView;
    IMYTLHucaiPrintPhotosModel *_model;
    UIButton *_deleteBtn;
}

@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) IMYTLHucaiPrintPhotosModel *model; // @synthesize model=_model;
@property(retain, nonatomic) IMYTLHucaiEidtPhotoView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (void)setDataModel:(id)arg1;
- (void)setupSubviews;

@end

