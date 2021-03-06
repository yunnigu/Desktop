//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BVConversationsInclude : NSObject
{
    NSDictionary *_products;
    NSDictionary *_reviews;
    NSDictionary *_questions;
    NSDictionary *_answers;
}

@property(retain) NSDictionary *answers; // @synthesize answers=_answers;
@property(retain) NSDictionary *questions; // @synthesize questions=_questions;
@property(retain) NSDictionary *reviews; // @synthesize reviews=_reviews;
@property(retain) NSDictionary *products; // @synthesize products=_products;
- (void).cxx_destruct;
- (id)initWithApiResponse:(id)arg1;
- (id)getQuestionById:(id)arg1;
- (id)getReviewById:(id)arg1;
- (id)getProductById:(id)arg1;
- (id)getAnswerById:(id)arg1;

@end

