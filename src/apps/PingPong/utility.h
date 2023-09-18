#include "common/binder/Binder.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/mobility/base/MovingMobilityBase.h"
#include "inet/mobility/contract/IMobility.h"


using namespace std;
namespace utility{


    inet::Coord getCoordinates(const MacNodeId id);
    //inet::Coord getSpeed(const MacNodeId id);
    std::list<MacNodeId>  getAllCars();

    inet::Coord getMyCurrentPosition(cModule* module);
    cModule* getModule(const MacNodeId id);
    void showCircle(double radius, inet::Coord centerPosition,cModule* senderCarModule , cOvalFigure * circle );
    std::list<MacNodeId>  getNeighbors(std::list<MacNodeId> all_cars,double Radius_,cModule*  mymodule);
    inet::Coord getCoordinates(cModule* mod);
    //std::string add =  jsonBody["address"];
                //MacNodeId id = binder->getMacNodeId(inet::Ipv4Address(add.c_str()));
}
