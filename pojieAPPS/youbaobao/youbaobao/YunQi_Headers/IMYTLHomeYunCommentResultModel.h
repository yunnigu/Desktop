//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYTLHomeYunCommentResultModel : NSObject
{
    _Bool _is_delete;
    long long _sync_error;
    NSString *_sync_msg;
    long long _commentId;
    long long _event_id;
    long long _type;
    NSString *_content;
    long long _baby_id;
    long long _user_id;
    long long _identity_id;
    NSString *_identity_name;
    long long _reply_to_comment_id;
    double _created_at;
    double _date;
    long long _timestamp;
    double _updated_at;
}

+ (void)initialize;
@property(nonatomic) double updated_at; // @synthesize updated_at=_updated_at;
@property(nonatomic) _Bool is_delete; // @synthesize is_delete=_is_delete;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) double created_at; // @synthesize created_at=_created_at;
@property(nonatomic) long long reply_to_comment_id; // @synthesize reply_to_comment_id=_reply_to_comment_id;
@property(retain, nonatomic) NSString *identity_name; // @synthesize identity_name=_identity_name;
@property(nonatomic) long long identity_id; // @synthesize identity_id=_identity_id;
@property(nonatomic) long long user_id; // @synthesize user_id=_user_id;
@property(nonatomic) long long baby_id; // @synthesize baby_id=_baby_id;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long event_id; // @synthesize event_id=_event_id;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *sync_msg; // @synthesize sync_msg=_sync_msg;
@property(nonatomic) long long sync_error; // @synthesize sync_error=_sync_error;
- (void).cxx_destruct;

@end
