/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WCImageFullScreenViewContainerDelegate <NSObject>
-(void)onShareToOpenSDKWithDataItem:(id)dataItem mediaItem:(id)item;
-(void)onAnimateFadeOut;
-(void)onPushViewController:(id)controller animated:(BOOL)animated;
-(id)onGetViewController;
-(void)onExposeWithDataItem:(id)dataItem;
-(void)onLongPressedWithMediaItem:(id)mediaItem;
-(void)onContainerAnimationHideStop;
-(void)onContainerAnimationHideStart;
-(void)onContainerAnimationShowStop;
-(void)onContainerAnimationShowStart;
-(void)animationHideWithRotate;
@end

