//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface YBBToolsDiscoverContainerModel : NSObject
{
    _Bool _is_new;
    _Bool _local_new;
    _Bool _widget_share;
    int _web_id;
    int _sourceType;
    int _sort;
    int _user_count;
    NSString *_title;
    NSString *_icon;
    NSString *_icon2;
    NSString *_url;
    NSString *_ori_url;
    NSString *_web_description;
    NSString *_alias;
    NSString *_source;
    NSString *_subtitle;
    unsigned long long _edittime;
    NSString *_share_wx_title;
    NSString *_share_wx_desc;
    NSString *_share_wx_img;
    NSString *_share_wx_url;
    NSString *_share_sina_desc;
    NSArray *_share_sina_img;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *share_sina_img; // @synthesize share_sina_img=_share_sina_img;
@property(copy, nonatomic) NSString *share_sina_desc; // @synthesize share_sina_desc=_share_sina_desc;
@property(copy, nonatomic) NSString *share_wx_url; // @synthesize share_wx_url=_share_wx_url;
@property(copy, nonatomic) NSString *share_wx_img; // @synthesize share_wx_img=_share_wx_img;
@property(copy, nonatomic) NSString *share_wx_desc; // @synthesize share_wx_desc=_share_wx_desc;
@property(copy, nonatomic) NSString *share_wx_title; // @synthesize share_wx_title=_share_wx_title;
@property(nonatomic) _Bool widget_share; // @synthesize widget_share=_widget_share;
@property(nonatomic) _Bool local_new; // @synthesize local_new=_local_new;
@property _Bool is_new; // @synthesize is_new=_is_new;
@property unsigned long long edittime; // @synthesize edittime=_edittime;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property int user_count; // @synthesize user_count=_user_count;
@property int sort; // @synthesize sort=_sort;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *web_description; // @synthesize web_description=_web_description;
@property(copy, nonatomic) NSString *ori_url; // @synthesize ori_url=_ori_url;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *icon2; // @synthesize icon2=_icon2;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property int web_id; // @synthesize web_id=_web_id;
- (void).cxx_destruct;

@end
