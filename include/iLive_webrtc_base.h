#ifndef ILIVE_WEBRTC_BASE_H
#define ILIVE_WEBRTC_BASE_H

#include "iLive_video_renderer.h"
#include "iLive_peerconnection.h"
#include "iLive_media_stream.h"
#include "iLive_data_channel.h"

class iLiveWebRTCBase{
    public:
        friend class iLiveMediaStream;
};

#endif