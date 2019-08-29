//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RegisterBean : NSObject
{
    NSString *_username;
    NSString *_userpwd;
    NSString *_regMethod;
    NSString *_serial;
    NSString *_game;
    NSString *_channelNo;
    NSString *_phoneActiveKey;
    NSString *_cookie;
    NSString *_key;
    NSString *_os;
    NSString *_phoneModel;
    NSString *_phoneNum;
    NSString *_realName;
    NSString *_idCard;
}

@property(copy, nonatomic) NSString *idCard; // @synthesize idCard=_idCard;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(copy, nonatomic) NSString *phoneModel; // @synthesize phoneModel=_phoneModel;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) NSString *phoneActiveKey; // @synthesize phoneActiveKey=_phoneActiveKey;
@property(copy, nonatomic) NSString *channelNo; // @synthesize channelNo=_channelNo;
@property(copy, nonatomic) NSString *game; // @synthesize game=_game;
@property(copy, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(copy, nonatomic) NSString *regMethod; // @synthesize regMethod=_regMethod;
@property(copy, nonatomic) NSString *userpwd; // @synthesize userpwd=_userpwd;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)createVisitorRegisterPostParams;
- (id)createFastRegosterPostParams;
- (id)createCookie;
- (id)createPostParams;

@end
