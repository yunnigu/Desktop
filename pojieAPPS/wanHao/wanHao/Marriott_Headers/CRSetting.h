//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface CRSetting : NSManagedObject
{
}

+ (id)fetchRequestForSettingName:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 value:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) id value; // @dynamic value;

@end

