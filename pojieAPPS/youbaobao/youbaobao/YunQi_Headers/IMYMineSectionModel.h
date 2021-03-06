//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYMineSectionModel : NSObject
{
    _Bool _is_hide;
    _Bool _has_more;
    _Bool _has_line;
    _Bool _has_grid_line;
    long long _sectionID;
    NSString *_title;
    long long _mode;
    NSString *_attr_text;
    long long _attr_id;
    unsigned long long _style;
    long long _uri_type;
    NSString *_uri;
    long long _asso_id;
    long long _trace_type;
    NSString *_icon;
}

+ (void)initialize;
@property(nonatomic) _Bool has_grid_line; // @synthesize has_grid_line=_has_grid_line;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) long long trace_type; // @synthesize trace_type=_trace_type;
@property(nonatomic) long long asso_id; // @synthesize asso_id=_asso_id;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(nonatomic) long long uri_type; // @synthesize uri_type=_uri_type;
@property(nonatomic) _Bool has_line; // @synthesize has_line=_has_line;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) long long attr_id; // @synthesize attr_id=_attr_id;
@property(copy, nonatomic) NSString *attr_text; // @synthesize attr_text=_attr_text;
@property(nonatomic) _Bool has_more; // @synthesize has_more=_has_more;
@property(nonatomic) _Bool is_hide; // @synthesize is_hide=_is_hide;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;

@end

