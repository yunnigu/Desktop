//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSArray, NSString, TTQAvatarModel;
@protocol TTQMedalModel;

@interface TTQPublisherModel : NSObject <YYJSONHelperProtocol>
{
    _Bool _is_ask_follow;
    _Bool _is_owner;
    _Bool _is_daren;
    unsigned long long _userID;
    NSString *_admin_icon;
    NSString *_screen_name;
    NSString *_baby_info;
    NSString *_expert_icon;
    NSString *_icon;
    NSString *_expert_name;
    NSString *_master_icon;
    NSString *_learn_master_icon;
    long long _score_level;
    NSString *_avatar;
    long long _isvip;
    TTQAvatarModel *_user_avatar;
    NSArray<TTQMedalModel> *_medal_list;
    long long _error;
    long long _is_followed;
    NSString *_redirect_url;
    NSString *_daren_icon;
    long long _expertIconWidth;
    long long _expertIconHeight;
    NSString *_expertIconNew;
    NSArray *_retrivedTagIconModels;
}

+ (id)getPrimaryKey;
+ (void)initialize;
@property(retain, nonatomic) NSArray *retrivedTagIconModels; // @synthesize retrivedTagIconModels=_retrivedTagIconModels;
@property(retain, nonatomic) NSString *expertIconNew; // @synthesize expertIconNew=_expertIconNew;
@property(nonatomic) long long expertIconHeight; // @synthesize expertIconHeight=_expertIconHeight;
@property(nonatomic) long long expertIconWidth; // @synthesize expertIconWidth=_expertIconWidth;
@property(copy, nonatomic) NSString *daren_icon; // @synthesize daren_icon=_daren_icon;
@property(nonatomic) _Bool is_daren; // @synthesize is_daren=_is_daren;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(nonatomic) long long is_followed; // @synthesize is_followed=_is_followed;
@property(nonatomic) long long error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray<TTQMedalModel> *medal_list; // @synthesize medal_list=_medal_list;
@property(nonatomic) _Bool is_owner; // @synthesize is_owner=_is_owner;
@property(retain, nonatomic) TTQAvatarModel *user_avatar; // @synthesize user_avatar=_user_avatar;
@property(nonatomic) long long isvip; // @synthesize isvip=_isvip;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) _Bool is_ask_follow; // @synthesize is_ask_follow=_is_ask_follow;
@property(nonatomic) long long score_level; // @synthesize score_level=_score_level;
@property(copy, nonatomic) NSString *learn_master_icon; // @synthesize learn_master_icon=_learn_master_icon;
@property(copy, nonatomic) NSString *master_icon; // @synthesize master_icon=_master_icon;
@property(copy, nonatomic) NSString *expert_name; // @synthesize expert_name=_expert_name;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *expert_icon; // @synthesize expert_icon=_expert_icon;
@property(copy, nonatomic) NSString *baby_info; // @synthesize baby_info=_baby_info;
@property(copy, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(copy, nonatomic) NSString *admin_icon; // @synthesize admin_icon=_admin_icon;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)tagIconModels;
- (id)tagsForPublisherNoraml:(long long)arg1;
- (id)tagsForPublisherOwned:(long long)arg1;

@end
