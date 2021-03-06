/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface VOIPReportData : XXUnknownSuperclass {
}
+(void)ReportCalledActionWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithUserActionType:(int)userActionType;
+(void)ReportPushUIReportWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithAckStatus:(int)ackStatus WithNetType:(int)netType WithTimeStamp:(unsigned long long)timeStamp;
+(void)ReportGetRoomInfoWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithRespType:(unsigned)respType WithTimeStamp:(unsigned long long)timeStamp;
+(void)ReportDataNotifyWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithTimeStamp:(unsigned long long)timeStamp;
+(void)ReportVoipTalkingWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithRoomMemberId:(int)roomMemberId WithIsTalkingStatus:(int)isTalkingStatus;
+(void)ReportVoipCancelInviteWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithCancelInvite:(int)cancelInvite WithCancelTime:(int)cancelTime WithTimeStamp:(unsigned long long)timeStamp;
+(void)ReportVoipGotRemoteStatusWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithRemoteStatus:(int)remoteStatus;
+(void)ReportVoipStartCallWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithStartCallStatus:(int)startCallStatus WithNetType:(int)netType;
+(void)ReportAudioEntranceHandsFree:(BOOL)free;
+(void)ReportAudioEntranceMute:(BOOL)mute;
+(void)ReportVideoEntrnaceHandsFree:(BOOL)free;
+(void)ReportVideoEntranceMute:(BOOL)mute;
+(void)ReportVoipActionClickBigPreview;
+(void)ReportVoipActionClickSmallPreview;
+(void)ReportVoipActionDragSmallPreview;
+(void)ReportVoipActionSwitchCamera;
+(void)ReportSwitchToVoiceAfterAcceptWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType;
+(void)ReportSwitchToVoiceBeforeAcceptWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType;
+(void)ReportSwitchToVoiceBeforeRemoteAcceptWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType;
+(void)ReportSelectVoiceVoipFriendFromPlus;
+(void)ReportSelectVoipFriendFromPlus;
+(void)ReportAudioCallFromProfile;
+(void)ReportAudioCallFromPlugin;
+(void)ReportAudioCallFromMessageOver;
+(void)ReportAudioCallFromMessageInterrpt;
+(void)ReportAudioCallFromMessageNotConnect;
+(void)ReportAudioCallFromPlus;
+(void)ReportVideoCallFromProfile;
+(void)ReportVideoCallFromPlugin;
+(void)ReportVideoCallFromMessageOver;
+(void)ReportVideoCallFromMessageInterrpt;
+(void)ReportVideoCallFromMessageNotConnect;
+(void)ReportVideoCallFromPlus;
+(void)ReportVoipSoundActionInitType:(unsigned long)type Mute:(BOOL)mute;
+(void)ReportVoipSoundActionInitType:(unsigned long)type HandsFree:(BOOL)free;
+(void)ReportVoipActionType:(unsigned long)type;
+(void)ReportSwitchToVoiceAcceptWithRoomId:(int)roomId WithRoomKey:(long long)roomKey WithRoomType:(unsigned long)roomType WithScene:(unsigned long)scene WithUserType:(int)userType;
+(void)ReportVoipSelectFriendScene:(unsigned long)scene CallType:(unsigned long)type;
+(void)ReportVoipCallFromScene:(unsigned long)scene CallType:(unsigned long)type WordingType:(unsigned long)type3;
@end

