//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYTouchEXButton, NSString;

@interface TTQPopWithAnimationButtonItem : NSObject
{
    long long _itemID;
    IMYTouchEXButton *_button;
    NSString *_image;
    NSString *_hightImage;
    CDUnknownBlockType _touchUpInside;
}

@property(copy, nonatomic) CDUnknownBlockType touchUpInside; // @synthesize touchUpInside=_touchUpInside;
@property(copy, nonatomic) NSString *hightImage; // @synthesize hightImage=_hightImage;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) IMYTouchEXButton *button; // @synthesize button=_button;
@property(nonatomic) long long itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (void)clearButton;
- (id)initWith:(long long)arg1 touchUpInside:(CDUnknownBlockType)arg2 image:(id)arg3 hightImage:(id)arg4;

@end
