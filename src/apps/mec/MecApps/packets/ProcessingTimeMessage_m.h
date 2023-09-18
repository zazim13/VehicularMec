//
// Generated file, do not edit! Created by opp_msgtool 6.0 from apps/mec/MecApps/packets/ProcessingTimeMessage.msg.
//

#ifndef __PROCESSINGTIMEMESSAGE_M_H
#define __PROCESSINGTIMEMESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class ProcessingTimeMessage;
/**
 * Class generated from <tt>apps/mec/MecApps/packets/ProcessingTimeMessage.msg:12</tt> by opp_msgtool.
 * <pre>
 * message ProcessingTimeMessage
 * {
 *     int socketId;
 * }
 * </pre>
 */
class ProcessingTimeMessage : public ::omnetpp::cMessage
{
  protected:
    int socketId = 0;

  private:
    void copy(const ProcessingTimeMessage& other);

  protected:
    bool operator==(const ProcessingTimeMessage&) = delete;

  public:
    ProcessingTimeMessage(const char *name=nullptr, short kind=0);
    ProcessingTimeMessage(const ProcessingTimeMessage& other);
    virtual ~ProcessingTimeMessage();
    ProcessingTimeMessage& operator=(const ProcessingTimeMessage& other);
    virtual ProcessingTimeMessage *dup() const override {return new ProcessingTimeMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getSocketId() const;
    virtual void setSocketId(int socketId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ProcessingTimeMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ProcessingTimeMessage& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline ProcessingTimeMessage *fromAnyPtr(any_ptr ptr) { return check_and_cast<ProcessingTimeMessage*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __PROCESSINGTIMEMESSAGE_M_H

