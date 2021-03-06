/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIViewControllerTransitioningDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;
@protocol CrossfadeAnimationDelegate;

@interface CrossfadeAnimationController : XXUnknownSuperclass <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
	id<CrossfadeAnimationDelegate> m_delegate;
	BOOL _reverse;
	double _duration;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) double duration;
@property(assign, nonatomic) BOOL reverse;
@property(assign, nonatomic) __weak id<CrossfadeAnimationDelegate> delegate;
-(void).cxx_destruct;
-(id)animationControllerForDismissedController:(id)dismissedController;
-(id)animationControllerForPresentedController:(id)presentedController presentingController:(id)controller sourceController:(id)controller3;
-(void)animationEnded:(BOOL)ended;
-(void)animateTransition:(id)transition fromVC:(id)vc toVC:(id)vc3 fromView:(id)view toView:(id)view5;
-(void)animateTransition:(id)transition;
-(double)transitionDuration:(id)duration;
-(id)init;
@end

