//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDelegate-Protocol.h"

@class IMYNewsCommentViewModel, IMYSimpleTableView, NSMutableSet, NSString, RACSignal, RACSubject, UIViewController;
@protocol IMYNewsCommentContainerDelegate;

@interface IMYNewsCommentContainer : NSObject <UITableViewDelegate>
{
    _Bool _commentEmpty;
    _Bool _hasShowHotReview;
    long long _newsId;
    UIViewController *_viewController;
    IMYSimpleTableView *_tableView;
    id <IMYNewsCommentContainerDelegate> _delegate;
    unsigned long long _entrance;
    IMYNewsCommentViewModel *_viewModel;
    NSMutableSet *_displayIndexPaths;
    RACSignal *_newsDetailDidLoadSignal;
    RACSubject *_newsDetailDidLoadSubject;
}

@property(retain, nonatomic) RACSubject *newsDetailDidLoadSubject; // @synthesize newsDetailDidLoadSubject=_newsDetailDidLoadSubject;
@property(retain, nonatomic) RACSignal *newsDetailDidLoadSignal; // @synthesize newsDetailDidLoadSignal=_newsDetailDidLoadSignal;
@property(retain, nonatomic) NSMutableSet *displayIndexPaths; // @synthesize displayIndexPaths=_displayIndexPaths;
@property(nonatomic) _Bool hasShowHotReview; // @synthesize hasShowHotReview=_hasShowHotReview;
@property(retain, nonatomic) IMYNewsCommentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long entrance; // @synthesize entrance=_entrance;
@property(nonatomic) _Bool commentEmpty; // @synthesize commentEmpty=_commentEmpty;
@property(nonatomic) __weak id <IMYNewsCommentContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IMYSimpleTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
- (void).cxx_destruct;
- (void)showComment:(_Bool)arg1;
- (void)dealloc;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)doHighlightCommentSectionAtIndexPath:(id)arg1 highlight:(_Bool)arg2;
- (id)firstCommentIndexPathAfterDataLoaded;
- (id)firstCommentIndexPath;
- (double)firstCommentOffset;
- (void)endFooterRefreshWithMore:(_Bool)arg1;
- (void)setupViewModel;
- (void)setupSubviews;
- (void)reloadNewsComment:(id)arg1;
- (void)commentDidSendCallBack:(id)arg1;
- (void)reloadData;
- (void)loadData;
- (void)refresh;
@property(readonly, nonatomic) unsigned long long recommendSection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

