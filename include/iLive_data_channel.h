#ifndef ILIVE_DATA_CHANNEL_H
#define ILIVE_DATA_CHANNEL_H

#include "iLive_webrtc_base.h"
class RTCDataChannel;

class iLiveDataChannelObserver{

};

class iLiveDataChannel{
    public:
        iLiveDataChannel(){}
        void CreateDataChannel();
        void DataChannelSend();
        void DataChannelClose();
        RTCDataChannel* DataChannelForId();
};

#endif