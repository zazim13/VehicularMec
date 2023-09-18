#include "utility.h"
namespace utility
{


    inet::Coord getCoordinates(const MacNodeId id)
    {
        Binder* binder = getBinder();
        OmnetId omnetId = binder->getOmnetId(id);
        if(omnetId == 0)
            return inet::Coord::NIL; // or throw exception?
        cModule* module = getSimulation()->getModule(omnetId);
        inet::IMobility *mobility_ = check_and_cast<inet::IMobility *>(module->getSubmodule("mobility"));
        return mobility_->getCurrentPosition();
    }
    inet::Coord getCoordinates(cModule* mod)
    {
        inet::IMobility *mobility_ = check_and_cast<inet::IMobility *>(mod->getSubmodule("mobility"));
        return mobility_->getCurrentPosition();
    }

    cModule* getModule(const MacNodeId id)
    {
        Binder* binder = getBinder();
        OmnetId omnetId = binder->getOmnetId(id);
        cModule* module = getSimulation()->getModule(omnetId);

        return module;
    }

    std::list<MacNodeId>  getAllCars(){
        std::list<MacNodeId> out;
        std::list<cModule*> modules;
        Binder* binder = getBinder();
        std::vector<UeInfo*>* UE_list = binder->getUeList();
        std::vector<UeInfo*>::iterator it = UE_list->begin();
        for (; it != UE_list->end(); ++it)
        {
            MacNodeId mnId = (*it)->id;
            cModule* cur_module = (*it)->ue;
            if (std::find(modules.begin(), modules.end(), cur_module) == modules.end())
                {out.push_back(mnId);}
            modules.push_back(cur_module);
        }
        return out;
    }

    inet::Coord getMyCurrentPosition(cModule* module){
        inet::IMobility *mobility_ = check_and_cast<inet::IMobility *>(module->getSubmodule("mobility"));
        return mobility_->getCurrentPosition();
    }


    void showCircle(double radius, inet::Coord centerPosition,cModule* senderCarModule, cOvalFigure * circle ){

        //senderCarModule->getDisplayString().setTagArg("i",1, "white");


        circle->setBounds(cFigure::Rectangle(centerPosition.x - radius, centerPosition.y - radius,radius*2,radius*2));
        circle->setLineWidth(2);
        circle->setLineColor(cFigure::RED);
        getSimulation()->getSystemModule()->getCanvas()->addFigure(circle);
        //senderCarModule->getDisplayString().setTagArg("i",1, "red");
    }
    std::list<MacNodeId>  getNeighbors(std::list<MacNodeId> all_cars,double Radius_,cModule*  mymodule){
        std::list<MacNodeId> out;
        for (auto it=all_cars.begin(); it!=all_cars.end();it++){
            if ( getCoordinates(*it).distance(getMyCurrentPosition(mymodule))< Radius_&& mymodule != getModule(*it) ){
                out.push_back(*it);
        }

    }
        return out; }
}
