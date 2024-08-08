#ifndef ILIVE_PEERCONNECTION_H
#define ILIVE_PEERCONNECTION_H


class iLivePeerConnectionObserver{
  public:
    virtual void OnSignalingState();
    virtual void OnPeerConnectionState() override;
    virtual void OnIceGatheringState() override;
    virtual void OnIceConnectionState() override;
    virtual void OnIceCandidate() override;
    virtual void OnAddStream() override;
    virtual void OnRemoveStream() override;

    virtual void OnTrack() override;
    virtual void OnAddTrack() override;
    virtual void OnRemoveTrack() override;
    virtual void OnDataChannel() override;
    virtual void OnRenegotiationNeeded() override;

    //scoped_refptr<RTCMediaStream> MediaStreamForId(const std::string& id);

    //scoped_refptr<RTCMediaTrack> MediaTrackForId(const std::string& id);
    void RemoveStreamForId();

};

class iLivePeerConnection{
  public:
    iLivePeerConnection(){}
    void CreateRTCPeerConnection();
    void RTCPeerConnectionClose();
    void RTCPeerConnectionDispose();
    void CreateOffer();
    void CreateAnswer();
    void SetLocalDescription();
    void SetRemoteDescription();
    void GetLocalDescription();
    void GetRemoteDescription();
    void AddTransceiver();
    void GetTransceivers();
    void GetReceivers();
    void RtpSenderSetTrack();
    void RtpSenderSetStream();
    void RtpSenderReplaceTrack();
    void RtpSenderSetParameters();
    void SetConfiguration();
    void RtpTransceiverSetCodecPreferences();
    void GetSenders();
    void GetStats();
    void RemoveTrack();

};

#endif