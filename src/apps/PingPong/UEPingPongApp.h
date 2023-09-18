//
//                  Simu5G
//
// Authors: Giovanni Nardini, Giovanni Stea, Antonio Virdis (University of Pisa)
//
// This file is part of a software released under the license included in file
// "license.pdf". Please read LICENSE and README files before using it.
// The above files and the present reference are part of the software itself,
// and cannot be removed from it.
//

#ifndef __UEWARNINGALERTAPP_H_
#define __UEWARNINGALERTAPP_H_

#include "inet/transportlayer/contract/udp/UdpSocket.h"
#include "inet/networklayer/common/L3Address.h"
#include "inet/networklayer/common/L3AddressResolver.h"

#include "common/binder/Binder.h"

//inet mobility
#include "inet/common/geometry/common/Coord.h"
#include "inet/common/geometry/common/EulerAngles.h"
#include "inet/mobility/contract/IMobility.h"

//WarningAlertPacket
#include "nodes/mec/MECPlatform/MEAppPacket_Types.h"
#include "./packets/PingPongPacket_Types.h"
#include "./packets/PingPongPacket_m.h"

#include "spdlog/spdlog.h"  // logging library
#include "spdlog/sinks/basic_file_sink.h"
#include <ctime>
#include <fmt/format.h>

#include "vehicular_mec.h"
#include "veins_inet/VeinsInetMobility.h"
#include "veins/modules/utility/TimerManager.h"
#include "veins_inet/veins_inet.h"

#include "veins/modules/application/ieee80211p/DemoBaseApplLayer.h"
#include "veins/modules/mobility/traci/TraCIMobility.h"
#include "veins/modules/mobility/traci/TraCICommandInterface.h"

#include "utility.h"

using namespace omnetpp;
using namespace veins;


/**
 * This is a UE app that asks to a Device App to instantiate the MECWarningAlertApp.
 * After a successful response, it asks to the MEC app to be notified when the car
 * enters a circle zone described by x,y center position and the radius. When a danger
 * event arrives, the car colors becomes red.
 *
 * The event behavior flow of the app is:
 * 1) send create MEC app to the Device App
 * 2.1) ACK --> send coordinates to MEC app
 * 2.2) NACK --> do nothing
 * 3) wait for danger events
 * 4) send delete MEC app to the Device App
 */




class VEHICULAR_MEC_API UEPingPongApp:  public veins::BaseApplLayer
{

    static omnetpp::simsignal_t failed_to_start_mecApp_Signal;


    //communication to device app and mec app
    inet::UdpSocket socket;
    int nbRcvMsg;
    int size_;
    simtime_t period_;
    int localPort_;
    int deviceAppPort_;
    inet::L3Address deviceAppAddress_;
    std::string App_name_;
    std::string UE_name_;
    unsigned int iDframe_ ;

    double payloadSize_;
    double interReqTime_;
    int test;


    char* sourceSimbolicAddress;            //Ue[x]
    char* deviceSimbolicAppAddress_;              //meHost.virtualisationInfrastructure

    // MEC application endPoint (returned by the device app)
    inet::L3Address mecAppAddress_;
    int mecAppPort_;

    std::string mecAppName;

    // mobility informations
    TraCIMobility* mobility;
    TraCICommandInterface* traci;
    TraCICommandInterface::Vehicle* traciVehicle;
    TraCICommandInterface::LaneAreaDetector* traciLane;


    cModule* ue;
    //inet::IMobility *mobility;
    inet::Coord position;

    //scheduling
    cMessage *selfStart_;
    cMessage *selfStop_;
    cMessage *selfMecAppStart_;
    cMessage *selfSendPing_;

    // uses to write in a log a file
    bool log;
    bool mecApp_on;

    int numCars;

    std::shared_ptr<spdlog::logger> myLogger;
    std::shared_ptr<spdlog::logger> Fails_Logger;



    public:
        ~UEPingPongApp();
        UEPingPongApp();
        void initialize(int stage) override;

    protected:
        std::string csv_filename_fails;
        std::string csv_filename_total;
        std::string csv_filename_rcv_total;
        std::string csv_filename_send_total;

        int nb_fails = 0;
        virtual int numInitStages() const { return inet::NUM_INIT_STAGES; }

        virtual void handleMessage(cMessage *msg);
        virtual void finish();

        void sendStartMEWarningAlertApp();

        void sendStopMEWarningAlertApp();

        void sendPingPacket(simtime_t t);

        void handleAckStartMEWarningAlertApp(cMessage* msg);
        void handleInfoMEWarningAlertApp(cMessage* msg);
        void handleAckStopMEWarningAlertApp(cMessage* msg);
        double uniform(int min,int max);


};

#endif
