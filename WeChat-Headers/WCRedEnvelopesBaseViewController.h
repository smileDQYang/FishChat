//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "MMTableViewInfoDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCBaseInfoItemDelegate.h"

@class NSString, WCRedEnvelopesControlData;

@interface WCRedEnvelopesBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate, UIAlertViewDelegate>
{
    WCRedEnvelopesControlData *m_data;
}

- (void).cxx_destruct;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

