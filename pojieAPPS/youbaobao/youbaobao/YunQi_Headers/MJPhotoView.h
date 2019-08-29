//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class MJPhoto, MJPhotoImageView, MJPhotoLoadingView, NSString;
@protocol MJPhotoViewDelegate;

@interface MJPhotoView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _doubleTap;
    MJPhotoImageView *_imageView;
    MJPhotoLoadingView *_photoLoadingView;
    _Bool disableLayoutSubvies;
    _Bool _zoom;
    _Bool _isMyPhoto;
    MJPhoto *_photo;
    id <MJPhotoViewDelegate> _photoViewDelegate;
}

@property(nonatomic) __weak id <MJPhotoViewDelegate> photoViewDelegate; // @synthesize photoViewDelegate=_photoViewDelegate;
@property(nonatomic) _Bool isMyPhoto; // @synthesize isMyPhoto=_isMyPhoto;
@property(retain, nonatomic) MJPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)resetImageNilForAlbum;
- (void)dealloc;
- (void)longPress:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)reset;
- (void)hide;
- (void)handleSingleTap:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)fixFrame;
- (void)adjustFrame;
- (void)photoDidFinishLoadWithImage:(id)arg1 error:(id)arg2;
- (void)photoStartLoad;
- (void)showImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
