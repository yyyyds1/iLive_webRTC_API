#ifndef ILIVE_PEERCONNECTION_H
#define ILIVE_PEERCONNECTION_H


class iLivePeerConnectionObserver{
  public:
    virtual void OnSignalingState();
    virtual void OnPeerConnectionState();
    virtual void OnIceGatheringState();
    virtual void OnIceConnectionState() ;
    virtual void OnIceCandidate() ;
    virtual void OnAddStream() ;
    virtual void OnRemoveStream() ;

    virtual void OnTrack() ;
    virtual void OnAddTrack() ;
    virtual void OnRemoveTrack() ;
    virtual void OnDataChannel() ;
    virtual void OnRenegotiationNeeded() ;

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