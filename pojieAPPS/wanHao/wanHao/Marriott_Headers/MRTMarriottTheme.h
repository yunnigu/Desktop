//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTOneButtonTheme.h"

@class MRTBonvoyLogoView, UIActivityIndicatorView, UIView, UIViewController;

@interface MRTMarriottTheme : MRTOneButtonTheme
{
    MRTBonvoyLogoView *_logoView;
    UIView *_logoWrapperView;
    UIActivityIndicatorView *_activityView;
    UIViewController *_startupController;
}

@property(retain, nonatomic) UIViewController *startupController; // @synthesize startupController=_startupController;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIView *logoWrapperView; // @synthesize logoWrapperView=_logoWrapperView;
@property(retain, nonatomic) MRTBonvoyLogoView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (id)signInBackgroundImage;
- (id)businessChatIdentifier;
- (_Bool)showBestRateView;
- (_Bool)showMobileKeySurvey;
- (_Bool)showSweepStakes;
- (_Bool)showRewardsMessagingOfferForConsumer:(id)arg1;
- (unsigned long long)defaultStayContainerPage;
- (id)supportedDeepLinkClasses;
- (id)analyticsIDWithComponent:(id)arg1;
- (id)rewardsProgramCode;
- (id)emptyContentPlaceholderImageName;
- (id)appConfigSuffixComponent;
- (id)splashViewController;
- (void)_deleteOldAppSplashImageIfNeeded;
- (id)launchLogoBottomColor;
- (id)launchLogoTopColor;
- (void)clearStartupAnimations:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installStartupAnimations;
- (id)launchScreenMainColor;
- (void)noteFinishLaunching;
- (_Bool)shouldDisplayRewardsCallEliteReservationCell;
- (id)globalReservationPhoneNumberForRewardsAccount:(id)arg1;
- (id)globalRewardsPhoneNumberForRewardsAccount:(id)arg1;
- (id)eliteRewardsPhoneNumberStringForRewardsAccount:(id)arg1;
- (id)oneButtonColorForPushedViews;
- (id)marketingPageLayoutConfiguration;
- (_Bool)supportsRewardsPrograms;
- (id)maintenanceModeController;
- (id)createRootViewController;
- (id)buildThemeDictionaryForSizeClass:(long long)arg1;
- (id)_styleForAlignment:(long long)arg1;
- (id)cursiveFontOfSize:(double)arg1;
- (id)boldLargeNumberFontOfSize:(double)arg1;
- (id)largeNumberFontOfSize:(double)arg1;
- (id)rewardsNameFontOfSize:(double)arg1;
- (id)headerFontOfSize:(double)arg1;
- (id)bookingTileHeaderFontOfSize:(double)arg1;
- (id)progressionArcImageName;
- (id)oneButtonColorForAccountViews;
- (id)formNoticeBackgroundColor;
- (id)formNoticeBorderColor;
- (id)formNoticeTextColor;
- (id)starredItemBackgroundColor;
- (id)starredItemBorderColor;
- (double)rewardsNamePadding;
- (id)rewardsEliteBadgeTextColor;
- (id)rewardsBasicBadgeTextColor;
- (id)rewardsBasicBadgeColor;
- (id)rewardsLifetimeTrackBackgroundColorWithRewardsAccount:(id)arg1;
- (id)rewardsLifetimeTrackForegroundColorWithRewardsAccount:(id)arg1;
- (id)rewardsArcBackgroundColorWithRewardsAccount:(id)arg1;
- (id)rewardsArcForegroundColorWithRewardsAccount:(id)arg1;
- (id)rewardsPanelLifetimeTextColorForConsumer:(id)arg1;
- (id)rewardsPanelTextColorForConsumer:(id)arg1;
- (id)rewardsAmbassadorNameColor;
- (id)rewardsAmbassadorDark;
- (id)rewardsAmbassadorLight;
- (id)rewardsTitaniumNameColor;
- (id)rewardsTitaniumDark;
- (id)rewardsTitaniumLight;
- (id)rewardsPlatinumNameColor;
- (id)rewardsPlatinumDark;
- (id)rewardsPlatinumLight;
- (id)rewardsGoldNameColor;
- (id)rewardsGoldDark;
- (id)rewardsGoldLight;
- (id)rewardsSilverNameColor;
- (id)rewardsSilverDark;
- (id)rewardsSilverLight;
- (id)rewardsBasicNameColor;
- (id)rewardsBasicDark;
- (id)rewardsBasicLight;
- (id)digitalKeyWaitingButtonColor;
- (id)digitalKeyWaitingBackgroundColor;
- (id)priceSavingsTextColor;
- (id)arcBackgroundColor;
- (id)buttonIconSelectedColor;
- (id)buttonIconColor;
- (id)actionReverseColor;
- (id)actionForegroundColor;
- (id)actionBackgroundColor;
- (id)mediumGrayNotInToolkit;
- (id)digitalWhite;
- (id)digitalBlack;
- (id)digitalCoral;
- (id)digitalTerracotta;
- (id)digitalPlum;

@end

