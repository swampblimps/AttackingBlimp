#pragma once

#include <Arduino.h>
#include "SerialHandler.h"
#include <functional>

using namespace std;

class UDPHandler{
    public:
        void Init();
        void Update();
        void SendUDP(String message);

        function<void(String)> callback_UDPRecvMsg;

    private:
        void callback_SerialRecvMsg(String message);
        
        String StringLength(String variable, int numDigits);

        // ========== Connection parameters ==========
        const char* wifi_ssid = "Adams iphone";
        const char* wifi_password = "eeeeeeee";
        const char* bridgeIP = "172.20.10.14";

        //const char* wifi_ssid = "COREBlimp";
        //const char* wifi_password = "jollypiano265";
        //const char* bridgeIP = "192.168.0.200";

        const char* UDP_port = "5005";

        const char flag_UDPConnectionData = 'C';
        const char flag_UDPMessage = 'M';
        const char* UDP_identifier = ":)";

        // ========== Variables ==========
        SerialHandler serialHandler;
};


