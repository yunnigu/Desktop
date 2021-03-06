//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKProfessionEditView-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCPayGetProfessionViewControllerDelegate-Protocol.h"

@class MMKProfessionEditViewOnSelectProfessionCallback, NSArray, NSMutableArray, NSString, UITextField, WCPayGetProfessionItem, WCPayProfession;

@interface KindaProfessionEditView : KindaView <UITextFieldDelegate, WCPayGetProfessionViewControllerDelegate, MMKProfessionEditView>
{
    NSArray *professions;
    WCPayProfession *_profession;
    WCPayGetProfessionItem *item;
    UITextField *m_view;
    NSMutableArray *m_profession_list;
    MMKProfessionEditViewOnSelectProfessionCallback *m_callback;
}

- (void).cxx_destruct;
- (void)setOnSelectProfessionCallback:(id)arg1;
- (void)setData:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (int)getProfessionType;
- (id)getProfessionName;
- (void)getProfessionViewController:(id)arg1 didSelectedProfession:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

