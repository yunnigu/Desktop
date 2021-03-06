//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ReactiveTableViewCell-Protocol.h"

@class IMYLineView, NSString, UITableView;

@interface TTQTableViewCell : UITableViewCell <ReactiveTableViewCell>
{
    id _bindingModel;
    IMYLineView *_lineView;
    IMYLineView *_bottomLineView;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IMYLineView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) IMYLineView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak id bindingModel; // @synthesize bindingModel=_bindingModel;
- (void).cxx_destruct;
- (void)setupUserTrackWithPagePrefix:(id)arg1;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

