#ifndef ILIVE_MEDIA_STREAM_H
#define ILIVE_MEDIA_STREAM_H
class iLiveMediaStream{
  public:
    iLiveMediaStream(){}
    
    void GetUserMedia();

    void GetUserAudio();

    void GetUserVideo();

    void GetSources();

    void SelectAudioOutput();

    void SelectAudioInput();

    void MediaStreamGetTracks();

    void MediaStreamDispose();

    void MediaStreamTrackSetEnable();

    void MediaStreamTrackSwitchCamera();

    void MediaStreamTrackDispose();

    void CreateLocalMediaStream();

    void OnDeviceChange();



};

#endif