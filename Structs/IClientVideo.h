class IClientVideo
{
public:
    virtual unknown_ret BGetUserVideoFolder(char*, int) = 0;
    virtual unknown_ret UnlockH264() = 0;
    virtual unknown_ret EGetBroadcastReady() = 0;
    virtual unknown_ret BeginBroadcastSession() = 0;
    virtual unknown_ret EndBroadcastSession() = 0;
    virtual unknown_ret IsBroadcasting(int*) = 0;
    virtual unknown_ret BIsUploadingThumbnails() = 0;
    virtual unknown_ret GetBroadcastSessionID() = 0;
    virtual unknown_ret ReceiveBroadcastChat(CSteamID, unsigned long long, bool) = 0;
    virtual unknown_ret PostBroadcastChat(unsigned long long, char const*) = 0;
    virtual unknown_ret MuteBroadcastChatUser(unsigned long long, CSteamID) = 0;
    virtual unknown_ret InitBroadcastVideo(int, int, int, int, unsigned char const*, int, unsigned char const*, int) = 0;
    virtual unknown_ret InitBroadcastAudio(int, int, int, int, int, unsigned char const*, int) = 0;
    virtual unknown_ret UploadBroadcastFrame(bool, bool, unsigned int, long long, long long, unsigned char const*, int) = 0;
    virtual unknown_ret UploadBroadcastThumbnail(int, int, unsigned char const*, int) = 0;
    virtual unknown_ret DroppedVideoFrames(int) = 0;
    virtual unknown_ret SetCurrentVideoEncodingRate(int) = 0;
    virtual unknown_ret SetMicrophoneState(bool, bool) = 0;
    virtual unknown_ret SetVideoSource(bool) = 0;
    virtual unknown_ret BroadcastRecorderError(EBroadcastRecorderResult) = 0;
    virtual unknown_ret LoadBroadcastSettings() = 0;
    virtual unknown_ret SetBroadcastPermissions(EBroadcastPermission) = 0;
    virtual unknown_ret GetBroadcastPermissions() = 0;
    virtual unknown_ret GetBroadcastMaxKbps() = 0;
    virtual unknown_ret GetBroadcastDelaySeconds() = 0;
    virtual unknown_ret BGetBroadcastDimensions(int*, int*) = 0;
    virtual unknown_ret GetBroadcastIncludeDesktop() = 0;
    virtual unknown_ret GetBroadcastRecordSystemAudio() = 0;
    virtual unknown_ret GetBroadcastRecordMic() = 0;
    virtual unknown_ret GetBroadcastShowChatCorner() = 0;
    virtual unknown_ret GetBroadcastShowDebugInfo() = 0;
    virtual unknown_ret GetBroadcastShowReminderBanner() = 0;
    virtual unknown_ret GetBroadcastEncoderSetting() = 0;
    virtual unknown_ret InviteToBroadcast(CSteamID, bool, unsigned int) = 0;
    virtual unknown_ret IgnoreApprovalRequest(CSteamID, unsigned int) = 0;
    virtual unknown_ret BroadcastFirstTimeComplete() = 0;
    virtual unknown_ret SetInHomeStreamState(bool) = 0;
    virtual unknown_ret WatchBroadcast(CSteamID) = 0;
    virtual unknown_ret GetWatchBroadcastMPD(CSteamID) = 0;
    virtual unknown_ret GetApprovalRequestCount() = 0;
    virtual unknown_ret GetApprovalRequests(CSteamID*, unsigned int) = 0;
    virtual unknown_ret GetVideoURL(unsigned int) = 0;
    virtual unknown_ret GetOPFSettings(unsigned int) = 0;
    virtual unknown_ret GetOPFStringForApp(unsigned int, char*, int, int*) = 0;
};
