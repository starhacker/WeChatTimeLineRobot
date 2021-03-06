/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "MMUIViewController.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "IQQMailExt.h"
#import "IMsgExt.h"
#import "UIWebViewDelegate.h"
#import "MailAttachDelegate.h"

@class CMail, CMessageWrap, UIWebView, PushMailWrap, MMLoadingView, UILabel, UIView, NSString, MMTableView, UIButton, NSMutableArray, CAttach;
@protocol MMReadMailViewDelegate;

@interface MMReadMailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIWebViewDelegate, IMsgExt, IQQMailExt, WCActionSheetDelegate, UIAlertViewDelegate, MailAttachDelegate, UIScrollViewDelegate> {
	MMTableView* _tableView;
	UIWebView* _webView;
	UIView* _fromListView;
	UIView* _toListView;
	UIView* _ccListView;
	UIView* _titleView;
	UIView* _tipView;
	UIView* _loadingView;
	UIView* _loadFailView;
	UILabel* _webContentView;
	UIView* _attachView;
	UIView* m_actionBanner;
	UIButton* m_mailAppBtn;
	UIButton* _hideDetailBtn;
	UIButton* _showDetailBtn;
	UIButton* _readOriginalBtn;
	BOOL bShowDetail;
	int eLoadingEnd;
	NSMutableArray* arrCells;
	PushMailWrap* _pushMailWrap;
	CMessageWrap* _messageWrap;
	CMail* _mail;
	id<MMReadMailViewDelegate> _delegate;
	MMLoadingView* m_loadingView;
	CAttach* m_loadingAttach;
	NSString* activePageTag;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CAttach* m_loadingAttach;
@property(assign, nonatomic) __weak id<MMReadMailViewDelegate> m_delegate;
@property(retain, nonatomic) CMail* mail;
@property(retain, nonatomic) CMessageWrap* messageWrap;
@property(retain, nonatomic) PushMailWrap* pushMailWrap;
-(void).cxx_destruct;
-(void)resetTableViewOffset:(id)offset;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)OnPress:(id)press;
-(void)OnMailAttachPreview:(id)preview;
-(void)PreviewAttach:(id)attach Pop:(BOOL)pop;
-(void)OnComposeSend:(int)send;
-(void)OnSetMailUnread:(int)unread;
-(void)OnGetMail:(id)mail ErrNo:(int)no;
-(void)onNewWrite:(id)write;
-(void)onDownloadMailApp:(id)app;
-(void)onOpenMailApp:(id)app;
-(void)onOperate:(id)operate;
-(void)onDeleteMail:(id)mail;
-(void)onRefresh:(id)refresh;
-(void)initBanner;
-(id)tagForActivePage;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(BOOL)showsMailApp;
-(void)SetCookie;
-(void)deleteMail;
-(void)updateCells;
-(void)FormCells;
-(void)FormAttachView:(id)view;
-(void)FormWebView;
-(void)FormLoadFailView;
-(void)FormLoadingView;
-(void)FromTipsView;
-(void)updateMailTitle;
-(void)FormMailTitle;
-(void)updateCCList;
-(void)FormCCList;
-(void)updateToList;
-(void)FormToList;
-(void)FormFromList;
-(void)endLoadMail;
-(void)beginLoadMail;
-(void)updateWebViewMarginTopAnimated:(BOOL)animated;
-(unsigned long)getWebviewMarginTopHeight;
-(void)SetWebviewMargin:(unsigned long)margin;
-(unsigned long)getMarginTop;
-(id)GetContactButton;
-(CGPoint)findPossibleOriginForCGRect:(CGRect)cgrect withLeftWidth:(int)leftWidth;
-(void)onReadOrigin:(id)origin;
-(void)onSetUnread:(id)unread;
-(void)onLoadFailRefresh:(id)refresh;
-(void)onCCListClicked:(id)clicked;
-(void)onToListClicked:(id)listClicked;
-(void)onSenderClicked:(id)clicked;
-(void)onHideDetail:(id)detail;
-(void)onShowDetail:(id)detail;
-(void)webViewDidStartLoad:(id)webView;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)dealloc;
-(id)init;
@end

