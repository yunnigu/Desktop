//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (IMYToast)
+ (void)imy_showTextHUDWithDelay:(double)arg1 view:(id)arg2 offset:(struct CGPoint)arg3 text:(id)arg4;
+ (void)imy_showTextHUDWithDelay:(double)arg1 view:(id)arg2 text:(id)arg3;
+ (void)imy_showTextHUDWithDelay:(double)arg1 image:(id)arg2 text:(id)arg3;
+ (void)imy_showTextHUDWithDelay:(double)arg1 text:(id)arg2;
+ (void)imy_showTextHUD:(id)arg1;
+ (void)imy_hideHUD;
+ (void)imy_showLoadingHUDWithOffset:(struct CGPoint)arg1 text:(id)arg2;
+ (void)imy_showLoadingHUDWithText:(id)arg1;
+ (void)imy_showLoadingHUD;
+ (id)imy_getToastBackgroundColor;
+ (void)imy_setToastBackgroundColor:(id)arg1;
- (void)imy_showTextHUDWithDelay:(double)arg1 view:(id)arg2 offset:(struct CGPoint)arg3 text:(id)arg4;
- (void)imy_showTextHUDWithDelay:(double)arg1 view:(id)arg2 text:(id)arg3;
- (void)imy_showTextHUDWithDelay:(double)arg1 image:(id)arg2 text:(id)arg3;
- (void)imy_showTextHUDWithDelay:(double)arg1 text:(id)arg2;
- (void)imy_showTextHUD:(id)arg1;
- (void)imy_hideHUD;
- (void)imy_showLoadingHUDWithOffset:(struct CGPoint)arg1 text:(id)arg2;
- (void)imy_showLoadingHUDWithText:(id)arg1;
- (void)imy_showLoadingHUD;
- (id)imy_hudInView;
- (id)imy_hudToastKey;
@end

