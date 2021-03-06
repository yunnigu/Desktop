//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "CYLTabBarControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class NSArray, NSString;

@interface CYLTabBarController : UITabBarController <UITabBarControllerDelegate, CYLTabBarControllerDelegate>
{
    _Bool _observingTabImageViewDefaultOffset;
    NSArray *_viewControllers;
    CDUnknownBlockType _viewDidLayoutSubviewsBlock;
    NSArray *_tabBarItemsAttributes;
    double _tabBarHeight;
    NSString *_context;
    struct UIOffset _titlePositionAdjustment;
    struct UIEdgeInsets _imageInsets;
}

+ (unsigned long long)allItemsInTabBarCount;
+ (_Bool)havePlusButton;
+ (id)tabBarControllerWithViewControllers:(id)arg1 tabBarItemsAttributes:(id)arg2;
+ (id)tabBarControllerWithViewControllers:(id)arg1 tabBarItemsAttributes:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 titlePositionAdjustment:(struct UIOffset)arg4;
+ (id)tabBarControllerWithViewControllers:(id)arg1 tabBarItemsAttributes:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 titlePositionAdjustment:(struct UIOffset)arg4 context:(id)arg5;
@property(nonatomic, getter=isObservingTabImageViewDefaultOffset) _Bool observingTabImageViewDefaultOffset; // @synthesize observingTabImageViewDefaultOffset=_observingTabImageViewDefaultOffset;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) struct UIOffset titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property(readonly, nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(nonatomic) double tabBarHeight; // @synthesize tabBarHeight=_tabBarHeight;
@property(copy, nonatomic) NSArray *tabBarItemsAttributes; // @synthesize tabBarItemsAttributes=_tabBarItemsAttributes;
@property(copy, nonatomic) CDUnknownBlockType viewDidLayoutSubviewsBlock; // @synthesize viewDidLayoutSubviewsBlock=_viewDidLayoutSubviewsBlock;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (id)rootViewController;
- (void)didSelectControl:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectControl:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (_Bool)isEqualViewController:(id)arg1 compairedViewController:(id)arg2;
- (void)updateSelectionStatusIfNeededForTabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)offsetTabBarTabImageViewToFit:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)shouldCustomizeTitlePositionAdjustment;
- (_Bool)shouldCustomizeImageInsets;
- (id)getImageFromImageInfo:(id)arg1;
- (void)addOneChildViewController:(id)arg1 WithTitle:(id)arg2 normalImageInfo:(id)arg3 selectedImageInfo:(id)arg4;
- (_Bool)isPlusViewControllerAdded:(id)arg1;
- (_Bool)hasPlusChildViewController;
- (void)setUpTabBar;
- (id)rootWindow;
- (id)appDelegate;
- (void)hideTabBadgeBackgroundSeparator;
- (void)setContext:(id)arg1;
- (id)initWithViewControllers:(id)arg1 tabBarItemsAttributes:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 titlePositionAdjustment:(struct UIOffset)arg4 context:(id)arg5;
- (id)initWithViewControllers:(id)arg1 tabBarItemsAttributes:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 titlePositionAdjustment:(struct UIOffset)arg4;
- (id)initWithViewControllers:(id)arg1 tabBarItemsAttributes:(id)arg2;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)setViewDidLayoutSubViewsBlock:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

