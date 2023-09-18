//
// Generated file, do not edit! Created by opp_msgtool 6.0 from stack/rlc/../../apps/PingPong/packets/PingPongPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wshadow"
#  pragma clang diagnostic ignored "-Wconversion"
#  pragma clang diagnostic ignored "-Wunused-parameter"
#  pragma clang diagnostic ignored "-Wc++98-compat"
#  pragma clang diagnostic ignored "-Wunreachable-code-break"
#  pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined(__GNUC__)
#  pragma GCC diagnostic ignored "-Wshadow"
#  pragma GCC diagnostic ignored "-Wconversion"
#  pragma GCC diagnostic ignored "-Wunused-parameter"
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#  pragma GCC diagnostic ignored "-Wsuggest-attribute=noreturn"
#  pragma GCC diagnostic ignored "-Wfloat-conversion"
#endif

#include <iostream>
#include <sstream>
#include <memory>
#include <type_traits>
#include "PingPongPacket_m.h"

namespace omnetpp {

// Template pack/unpack rules. They are declared *after* a1l type-specific pack functions for multiple reasons.
// They are in the omnetpp namespace, to allow them to be found by argument-dependent lookup via the cCommBuffer argument

// Packing/unpacking an std::vector
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::vector<T,A>& v)
{
    int n = v.size();
    doParsimPacking(buffer, n);
    for (int i = 0; i < n; i++)
        doParsimPacking(buffer, v[i]);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::vector<T,A>& v)
{
    int n;
    doParsimUnpacking(buffer, n);
    v.resize(n);
    for (int i = 0; i < n; i++)
        doParsimUnpacking(buffer, v[i]);
}

// Packing/unpacking an std::list
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::list<T,A>& l)
{
    doParsimPacking(buffer, (int)l.size());
    for (typename std::list<T,A>::const_iterator it = l.begin(); it != l.end(); ++it)
        doParsimPacking(buffer, (T&)*it);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::list<T,A>& l)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        l.push_back(T());
        doParsimUnpacking(buffer, l.back());
    }
}

// Packing/unpacking an std::set
template<typename T, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::set<T,Tr,A>& s)
{
    doParsimPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr,A>::const_iterator it = s.begin(); it != s.end(); ++it)
        doParsimPacking(buffer, *it);
}

template<typename T, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::set<T,Tr,A>& s)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        T x;
        doParsimUnpacking(buffer, x);
        s.insert(x);
    }
}

// Packing/unpacking an std::map
template<typename K, typename V, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::map<K,V,Tr,A>& m)
{
    doParsimPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr,A>::const_iterator it = m.begin(); it != m.end(); ++it) {
        doParsimPacking(buffer, it->first);
        doParsimPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::map<K,V,Tr,A>& m)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        K k; V v;
        doParsimUnpacking(buffer, k);
        doParsimUnpacking(buffer, v);
        m[k] = v;
    }
}

// Default pack/unpack function for arrays
template<typename T>
void doParsimArrayPacking(omnetpp::cCommBuffer *b, const T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimPacking(b, t[i]);
}

template<typename T>
void doParsimArrayUnpacking(omnetpp::cCommBuffer *b, T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimUnpacking(b, t[i]);
}

// Default rule to prevent compiler from choosing base class' doParsimPacking() function
template<typename T>
void doParsimPacking(omnetpp::cCommBuffer *, const T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimPacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

template<typename T>
void doParsimUnpacking(omnetpp::cCommBuffer *, T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimUnpacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

}  // namespace omnetpp

Register_Class(PingPongAppPacket)

PingPongAppPacket::PingPongAppPacket() : ::MECPacket()
{
}

PingPongAppPacket::PingPongAppPacket(const PingPongAppPacket& other) : ::MECPacket(other)
{
    copy(other);
}

PingPongAppPacket::~PingPongAppPacket()
{
}

PingPongAppPacket& PingPongAppPacket::operator=(const PingPongAppPacket& other)
{
    if (this == &other) return *this;
    ::MECPacket::operator=(other);
    copy(other);
    return *this;
}

void PingPongAppPacket::copy(const PingPongAppPacket& other)
{
}

void PingPongAppPacket::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::MECPacket::parsimPack(b);
}

void PingPongAppPacket::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::MECPacket::parsimUnpack(b);
}

class PingPongAppPacketDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
    };
  public:
    PingPongAppPacketDescriptor();
    virtual ~PingPongAppPacketDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(PingPongAppPacketDescriptor)

PingPongAppPacketDescriptor::PingPongAppPacketDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(PingPongAppPacket)), "MECPacket")
{
    propertyNames = nullptr;
}

PingPongAppPacketDescriptor::~PingPongAppPacketDescriptor()
{
    delete[] propertyNames;
}

bool PingPongAppPacketDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<PingPongAppPacket *>(obj)!=nullptr;
}

const char **PingPongAppPacketDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *PingPongAppPacketDescriptor::getProperty(const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int PingPongAppPacketDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 0+base->getFieldCount() : 0;
}

unsigned int PingPongAppPacketDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    return 0;
}

const char *PingPongAppPacketDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

int PingPongAppPacketDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->findField(fieldName) : -1;
}

const char *PingPongAppPacketDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

const char **PingPongAppPacketDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *PingPongAppPacketDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int PingPongAppPacketDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void PingPongAppPacketDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'PingPongAppPacket'", field);
    }
}

const char *PingPongAppPacketDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string PingPongAppPacketDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: return "";
    }
}

void PingPongAppPacketDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongAppPacket'", field);
    }
}

omnetpp::cValue PingPongAppPacketDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'PingPongAppPacket' as cValue -- field index out of range?", field);
    }
}

void PingPongAppPacketDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongAppPacket'", field);
    }
}

const char *PingPongAppPacketDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

omnetpp::any_ptr PingPongAppPacketDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: return omnetpp::any_ptr(nullptr);
    }
}

void PingPongAppPacketDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongAppPacket *pp = omnetpp::fromAnyPtr<PingPongAppPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongAppPacket'", field);
    }
}

Register_Class(PingPongWarningPacket)

PingPongWarningPacket::PingPongWarningPacket() : ::PingPongAppPacket()
{
}

PingPongWarningPacket::PingPongWarningPacket(const PingPongWarningPacket& other) : ::PingPongAppPacket(other)
{
    copy(other);
}

PingPongWarningPacket::~PingPongWarningPacket()
{
}

PingPongWarningPacket& PingPongWarningPacket::operator=(const PingPongWarningPacket& other)
{
    if (this == &other) return *this;
    ::PingPongAppPacket::operator=(other);
    copy(other);
    return *this;
}

void PingPongWarningPacket::copy(const PingPongWarningPacket& other)
{
    this->ueOmnetID = other.ueOmnetID;
    this->positionX = other.positionX;
    this->positionY = other.positionY;
    this->positionZ = other.positionZ;
    this->danger = other.danger;
}

void PingPongWarningPacket::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::PingPongAppPacket::parsimPack(b);
    doParsimPacking(b,this->ueOmnetID);
    doParsimPacking(b,this->positionX);
    doParsimPacking(b,this->positionY);
    doParsimPacking(b,this->positionZ);
    doParsimPacking(b,this->danger);
}

void PingPongWarningPacket::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::PingPongAppPacket::parsimUnpack(b);
    doParsimUnpacking(b,this->ueOmnetID);
    doParsimUnpacking(b,this->positionX);
    doParsimUnpacking(b,this->positionY);
    doParsimUnpacking(b,this->positionZ);
    doParsimUnpacking(b,this->danger);
}

int PingPongWarningPacket::getUeOmnetID() const
{
    return this->ueOmnetID;
}

void PingPongWarningPacket::setUeOmnetID(int ueOmnetID)
{
    handleChange();
    this->ueOmnetID = ueOmnetID;
}

double PingPongWarningPacket::getPositionX() const
{
    return this->positionX;
}

void PingPongWarningPacket::setPositionX(double positionX)
{
    handleChange();
    this->positionX = positionX;
}

double PingPongWarningPacket::getPositionY() const
{
    return this->positionY;
}

void PingPongWarningPacket::setPositionY(double positionY)
{
    handleChange();
    this->positionY = positionY;
}

double PingPongWarningPacket::getPositionZ() const
{
    return this->positionZ;
}

void PingPongWarningPacket::setPositionZ(double positionZ)
{
    handleChange();
    this->positionZ = positionZ;
}

bool PingPongWarningPacket::getDanger() const
{
    return this->danger;
}

void PingPongWarningPacket::setDanger(bool danger)
{
    handleChange();
    this->danger = danger;
}

class PingPongWarningPacketDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_ueOmnetID,
        FIELD_positionX,
        FIELD_positionY,
        FIELD_positionZ,
        FIELD_danger,
    };
  public:
    PingPongWarningPacketDescriptor();
    virtual ~PingPongWarningPacketDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(PingPongWarningPacketDescriptor)

PingPongWarningPacketDescriptor::PingPongWarningPacketDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(PingPongWarningPacket)), "PingPongAppPacket")
{
    propertyNames = nullptr;
}

PingPongWarningPacketDescriptor::~PingPongWarningPacketDescriptor()
{
    delete[] propertyNames;
}

bool PingPongWarningPacketDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<PingPongWarningPacket *>(obj)!=nullptr;
}

const char **PingPongWarningPacketDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *PingPongWarningPacketDescriptor::getProperty(const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int PingPongWarningPacketDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 5+base->getFieldCount() : 5;
}

unsigned int PingPongWarningPacketDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,    // FIELD_ueOmnetID
        FD_ISEDITABLE,    // FIELD_positionX
        FD_ISEDITABLE,    // FIELD_positionY
        FD_ISEDITABLE,    // FIELD_positionZ
        FD_ISEDITABLE,    // FIELD_danger
    };
    return (field >= 0 && field < 5) ? fieldTypeFlags[field] : 0;
}

const char *PingPongWarningPacketDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "ueOmnetID",
        "positionX",
        "positionY",
        "positionZ",
        "danger",
    };
    return (field >= 0 && field < 5) ? fieldNames[field] : nullptr;
}

int PingPongWarningPacketDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "ueOmnetID") == 0) return baseIndex + 0;
    if (strcmp(fieldName, "positionX") == 0) return baseIndex + 1;
    if (strcmp(fieldName, "positionY") == 0) return baseIndex + 2;
    if (strcmp(fieldName, "positionZ") == 0) return baseIndex + 3;
    if (strcmp(fieldName, "danger") == 0) return baseIndex + 4;
    return base ? base->findField(fieldName) : -1;
}

const char *PingPongWarningPacketDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "int",    // FIELD_ueOmnetID
        "double",    // FIELD_positionX
        "double",    // FIELD_positionY
        "double",    // FIELD_positionZ
        "bool",    // FIELD_danger
    };
    return (field >= 0 && field < 5) ? fieldTypeStrings[field] : nullptr;
}

const char **PingPongWarningPacketDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *PingPongWarningPacketDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int PingPongWarningPacketDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void PingPongWarningPacketDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'PingPongWarningPacket'", field);
    }
}

const char *PingPongWarningPacketDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string PingPongWarningPacketDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        case FIELD_ueOmnetID: return long2string(pp->getUeOmnetID());
        case FIELD_positionX: return double2string(pp->getPositionX());
        case FIELD_positionY: return double2string(pp->getPositionY());
        case FIELD_positionZ: return double2string(pp->getPositionZ());
        case FIELD_danger: return bool2string(pp->getDanger());
        default: return "";
    }
}

void PingPongWarningPacketDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        case FIELD_ueOmnetID: pp->setUeOmnetID(string2long(value)); break;
        case FIELD_positionX: pp->setPositionX(string2double(value)); break;
        case FIELD_positionY: pp->setPositionY(string2double(value)); break;
        case FIELD_positionZ: pp->setPositionZ(string2double(value)); break;
        case FIELD_danger: pp->setDanger(string2bool(value)); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongWarningPacket'", field);
    }
}

omnetpp::cValue PingPongWarningPacketDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        case FIELD_ueOmnetID: return pp->getUeOmnetID();
        case FIELD_positionX: return pp->getPositionX();
        case FIELD_positionY: return pp->getPositionY();
        case FIELD_positionZ: return pp->getPositionZ();
        case FIELD_danger: return pp->getDanger();
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'PingPongWarningPacket' as cValue -- field index out of range?", field);
    }
}

void PingPongWarningPacketDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        case FIELD_ueOmnetID: pp->setUeOmnetID(omnetpp::checked_int_cast<int>(value.intValue())); break;
        case FIELD_positionX: pp->setPositionX(value.doubleValue()); break;
        case FIELD_positionY: pp->setPositionY(value.doubleValue()); break;
        case FIELD_positionZ: pp->setPositionZ(value.doubleValue()); break;
        case FIELD_danger: pp->setDanger(value.boolValue()); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongWarningPacket'", field);
    }
}

const char *PingPongWarningPacketDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

omnetpp::any_ptr PingPongWarningPacketDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        default: return omnetpp::any_ptr(nullptr);
    }
}

void PingPongWarningPacketDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongWarningPacket *pp = omnetpp::fromAnyPtr<PingPongWarningPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongWarningPacket'", field);
    }
}

Register_Class(PingPongStartPacket)

PingPongStartPacket::PingPongStartPacket() : ::PingPongAppPacket()
{
}

PingPongStartPacket::PingPongStartPacket(const PingPongStartPacket& other) : ::PingPongAppPacket(other)
{
    copy(other);
}

PingPongStartPacket::~PingPongStartPacket()
{
}

PingPongStartPacket& PingPongStartPacket::operator=(const PingPongStartPacket& other)
{
    if (this == &other) return *this;
    ::PingPongAppPacket::operator=(other);
    copy(other);
    return *this;
}

void PingPongStartPacket::copy(const PingPongStartPacket& other)
{
    this->centerPositionX = other.centerPositionX;
    this->centerPositionY = other.centerPositionY;
    this->centerPositionZ = other.centerPositionZ;
    this->radius = other.radius;
}

void PingPongStartPacket::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::PingPongAppPacket::parsimPack(b);
    doParsimPacking(b,this->centerPositionX);
    doParsimPacking(b,this->centerPositionY);
    doParsimPacking(b,this->centerPositionZ);
    doParsimPacking(b,this->radius);
}

void PingPongStartPacket::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::PingPongAppPacket::parsimUnpack(b);
    doParsimUnpacking(b,this->centerPositionX);
    doParsimUnpacking(b,this->centerPositionY);
    doParsimUnpacking(b,this->centerPositionZ);
    doParsimUnpacking(b,this->radius);
}

double PingPongStartPacket::getCenterPositionX() const
{
    return this->centerPositionX;
}

void PingPongStartPacket::setCenterPositionX(double centerPositionX)
{
    handleChange();
    this->centerPositionX = centerPositionX;
}

double PingPongStartPacket::getCenterPositionY() const
{
    return this->centerPositionY;
}

void PingPongStartPacket::setCenterPositionY(double centerPositionY)
{
    handleChange();
    this->centerPositionY = centerPositionY;
}

double PingPongStartPacket::getCenterPositionZ() const
{
    return this->centerPositionZ;
}

void PingPongStartPacket::setCenterPositionZ(double centerPositionZ)
{
    handleChange();
    this->centerPositionZ = centerPositionZ;
}

double PingPongStartPacket::getRadius() const
{
    return this->radius;
}

void PingPongStartPacket::setRadius(double radius)
{
    handleChange();
    this->radius = radius;
}

class PingPongStartPacketDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_centerPositionX,
        FIELD_centerPositionY,
        FIELD_centerPositionZ,
        FIELD_radius,
    };
  public:
    PingPongStartPacketDescriptor();
    virtual ~PingPongStartPacketDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(PingPongStartPacketDescriptor)

PingPongStartPacketDescriptor::PingPongStartPacketDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(PingPongStartPacket)), "PingPongAppPacket")
{
    propertyNames = nullptr;
}

PingPongStartPacketDescriptor::~PingPongStartPacketDescriptor()
{
    delete[] propertyNames;
}

bool PingPongStartPacketDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<PingPongStartPacket *>(obj)!=nullptr;
}

const char **PingPongStartPacketDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *PingPongStartPacketDescriptor::getProperty(const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int PingPongStartPacketDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 4+base->getFieldCount() : 4;
}

unsigned int PingPongStartPacketDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,    // FIELD_centerPositionX
        FD_ISEDITABLE,    // FIELD_centerPositionY
        FD_ISEDITABLE,    // FIELD_centerPositionZ
        FD_ISEDITABLE,    // FIELD_radius
    };
    return (field >= 0 && field < 4) ? fieldTypeFlags[field] : 0;
}

const char *PingPongStartPacketDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "centerPositionX",
        "centerPositionY",
        "centerPositionZ",
        "radius",
    };
    return (field >= 0 && field < 4) ? fieldNames[field] : nullptr;
}

int PingPongStartPacketDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "centerPositionX") == 0) return baseIndex + 0;
    if (strcmp(fieldName, "centerPositionY") == 0) return baseIndex + 1;
    if (strcmp(fieldName, "centerPositionZ") == 0) return baseIndex + 2;
    if (strcmp(fieldName, "radius") == 0) return baseIndex + 3;
    return base ? base->findField(fieldName) : -1;
}

const char *PingPongStartPacketDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "double",    // FIELD_centerPositionX
        "double",    // FIELD_centerPositionY
        "double",    // FIELD_centerPositionZ
        "double",    // FIELD_radius
    };
    return (field >= 0 && field < 4) ? fieldTypeStrings[field] : nullptr;
}

const char **PingPongStartPacketDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *PingPongStartPacketDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int PingPongStartPacketDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void PingPongStartPacketDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'PingPongStartPacket'", field);
    }
}

const char *PingPongStartPacketDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string PingPongStartPacketDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        case FIELD_centerPositionX: return double2string(pp->getCenterPositionX());
        case FIELD_centerPositionY: return double2string(pp->getCenterPositionY());
        case FIELD_centerPositionZ: return double2string(pp->getCenterPositionZ());
        case FIELD_radius: return double2string(pp->getRadius());
        default: return "";
    }
}

void PingPongStartPacketDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        case FIELD_centerPositionX: pp->setCenterPositionX(string2double(value)); break;
        case FIELD_centerPositionY: pp->setCenterPositionY(string2double(value)); break;
        case FIELD_centerPositionZ: pp->setCenterPositionZ(string2double(value)); break;
        case FIELD_radius: pp->setRadius(string2double(value)); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongStartPacket'", field);
    }
}

omnetpp::cValue PingPongStartPacketDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        case FIELD_centerPositionX: return pp->getCenterPositionX();
        case FIELD_centerPositionY: return pp->getCenterPositionY();
        case FIELD_centerPositionZ: return pp->getCenterPositionZ();
        case FIELD_radius: return pp->getRadius();
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'PingPongStartPacket' as cValue -- field index out of range?", field);
    }
}

void PingPongStartPacketDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        case FIELD_centerPositionX: pp->setCenterPositionX(value.doubleValue()); break;
        case FIELD_centerPositionY: pp->setCenterPositionY(value.doubleValue()); break;
        case FIELD_centerPositionZ: pp->setCenterPositionZ(value.doubleValue()); break;
        case FIELD_radius: pp->setRadius(value.doubleValue()); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongStartPacket'", field);
    }
}

const char *PingPongStartPacketDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

omnetpp::any_ptr PingPongStartPacketDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        default: return omnetpp::any_ptr(nullptr);
    }
}

void PingPongStartPacketDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongStartPacket *pp = omnetpp::fromAnyPtr<PingPongStartPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongStartPacket'", field);
    }
}

Register_Class(PingPongStopPacket)

PingPongStopPacket::PingPongStopPacket() : ::PingPongAppPacket()
{
}

PingPongStopPacket::PingPongStopPacket(const PingPongStopPacket& other) : ::PingPongAppPacket(other)
{
    copy(other);
}

PingPongStopPacket::~PingPongStopPacket()
{
}

PingPongStopPacket& PingPongStopPacket::operator=(const PingPongStopPacket& other)
{
    if (this == &other) return *this;
    ::PingPongAppPacket::operator=(other);
    copy(other);
    return *this;
}

void PingPongStopPacket::copy(const PingPongStopPacket& other)
{
}

void PingPongStopPacket::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::PingPongAppPacket::parsimPack(b);
}

void PingPongStopPacket::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::PingPongAppPacket::parsimUnpack(b);
}

class PingPongStopPacketDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
    };
  public:
    PingPongStopPacketDescriptor();
    virtual ~PingPongStopPacketDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(PingPongStopPacketDescriptor)

PingPongStopPacketDescriptor::PingPongStopPacketDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(PingPongStopPacket)), "PingPongAppPacket")
{
    propertyNames = nullptr;
}

PingPongStopPacketDescriptor::~PingPongStopPacketDescriptor()
{
    delete[] propertyNames;
}

bool PingPongStopPacketDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<PingPongStopPacket *>(obj)!=nullptr;
}

const char **PingPongStopPacketDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *PingPongStopPacketDescriptor::getProperty(const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int PingPongStopPacketDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 0+base->getFieldCount() : 0;
}

unsigned int PingPongStopPacketDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    return 0;
}

const char *PingPongStopPacketDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

int PingPongStopPacketDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->findField(fieldName) : -1;
}

const char *PingPongStopPacketDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

const char **PingPongStopPacketDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *PingPongStopPacketDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int PingPongStopPacketDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void PingPongStopPacketDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'PingPongStopPacket'", field);
    }
}

const char *PingPongStopPacketDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string PingPongStopPacketDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: return "";
    }
}

void PingPongStopPacketDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongStopPacket'", field);
    }
}

omnetpp::cValue PingPongStopPacketDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'PingPongStopPacket' as cValue -- field index out of range?", field);
    }
}

void PingPongStopPacketDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongStopPacket'", field);
    }
}

const char *PingPongStopPacketDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

omnetpp::any_ptr PingPongStopPacketDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: return omnetpp::any_ptr(nullptr);
    }
}

void PingPongStopPacketDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongStopPacket *pp = omnetpp::fromAnyPtr<PingPongStopPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongStopPacket'", field);
    }
}

Register_Class(PingPongPacket)

PingPongPacket::PingPongPacket() : ::MECPacket()
{
}

PingPongPacket::PingPongPacket(const PingPongPacket& other) : ::MECPacket(other)
{
    copy(other);
}

PingPongPacket::~PingPongPacket()
{
}

PingPongPacket& PingPongPacket::operator=(const PingPongPacket& other)
{
    if (this == &other) return *this;
    ::MECPacket::operator=(other);
    copy(other);
    return *this;
}

void PingPongPacket::copy(const PingPongPacket& other)
{
    this->IDframe = other.IDframe;
    this->ueOmnetID = other.ueOmnetID;
    this->data = other.data;
}

void PingPongPacket::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::MECPacket::parsimPack(b);
    doParsimPacking(b,this->IDframe);
    doParsimPacking(b,this->ueOmnetID);
    doParsimPacking(b,this->data);
}

void PingPongPacket::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::MECPacket::parsimUnpack(b);
    doParsimUnpacking(b,this->IDframe);
    doParsimUnpacking(b,this->ueOmnetID);
    doParsimUnpacking(b,this->data);
}

unsigned int PingPongPacket::getIDframe() const
{
    return this->IDframe;
}

void PingPongPacket::setIDframe(unsigned int IDframe)
{
    handleChange();
    this->IDframe = IDframe;
}

int PingPongPacket::getUeOmnetID() const
{
    return this->ueOmnetID;
}

void PingPongPacket::setUeOmnetID(int ueOmnetID)
{
    handleChange();
    this->ueOmnetID = ueOmnetID;
}

const char * PingPongPacket::getData() const
{
    return this->data.c_str();
}

void PingPongPacket::setData(const char * data)
{
    handleChange();
    this->data = data;
}

class PingPongPacketDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_IDframe,
        FIELD_ueOmnetID,
        FIELD_data,
    };
  public:
    PingPongPacketDescriptor();
    virtual ~PingPongPacketDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(PingPongPacketDescriptor)

PingPongPacketDescriptor::PingPongPacketDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(PingPongPacket)), "MECPacket")
{
    propertyNames = nullptr;
}

PingPongPacketDescriptor::~PingPongPacketDescriptor()
{
    delete[] propertyNames;
}

bool PingPongPacketDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<PingPongPacket *>(obj)!=nullptr;
}

const char **PingPongPacketDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *PingPongPacketDescriptor::getProperty(const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int PingPongPacketDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 3+base->getFieldCount() : 3;
}

unsigned int PingPongPacketDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,    // FIELD_IDframe
        FD_ISEDITABLE,    // FIELD_ueOmnetID
        FD_ISEDITABLE,    // FIELD_data
    };
    return (field >= 0 && field < 3) ? fieldTypeFlags[field] : 0;
}

const char *PingPongPacketDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "IDframe",
        "ueOmnetID",
        "data",
    };
    return (field >= 0 && field < 3) ? fieldNames[field] : nullptr;
}

int PingPongPacketDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "IDframe") == 0) return baseIndex + 0;
    if (strcmp(fieldName, "ueOmnetID") == 0) return baseIndex + 1;
    if (strcmp(fieldName, "data") == 0) return baseIndex + 2;
    return base ? base->findField(fieldName) : -1;
}

const char *PingPongPacketDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",    // FIELD_IDframe
        "int",    // FIELD_ueOmnetID
        "string",    // FIELD_data
    };
    return (field >= 0 && field < 3) ? fieldTypeStrings[field] : nullptr;
}

const char **PingPongPacketDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *PingPongPacketDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int PingPongPacketDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void PingPongPacketDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'PingPongPacket'", field);
    }
}

const char *PingPongPacketDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string PingPongPacketDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        case FIELD_IDframe: return ulong2string(pp->getIDframe());
        case FIELD_ueOmnetID: return long2string(pp->getUeOmnetID());
        case FIELD_data: return oppstring2string(pp->getData());
        default: return "";
    }
}

void PingPongPacketDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        case FIELD_IDframe: pp->setIDframe(string2ulong(value)); break;
        case FIELD_ueOmnetID: pp->setUeOmnetID(string2long(value)); break;
        case FIELD_data: pp->setData((value)); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongPacket'", field);
    }
}

omnetpp::cValue PingPongPacketDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        case FIELD_IDframe: return (omnetpp::intval_t)(pp->getIDframe());
        case FIELD_ueOmnetID: return pp->getUeOmnetID();
        case FIELD_data: return pp->getData();
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'PingPongPacket' as cValue -- field index out of range?", field);
    }
}

void PingPongPacketDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        case FIELD_IDframe: pp->setIDframe(omnetpp::checked_int_cast<unsigned int>(value.intValue())); break;
        case FIELD_ueOmnetID: pp->setUeOmnetID(omnetpp::checked_int_cast<int>(value.intValue())); break;
        case FIELD_data: pp->setData(value.stringValue()); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongPacket'", field);
    }
}

const char *PingPongPacketDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

omnetpp::any_ptr PingPongPacketDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        default: return omnetpp::any_ptr(nullptr);
    }
}

void PingPongPacketDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    PingPongPacket *pp = omnetpp::fromAnyPtr<PingPongPacket>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'PingPongPacket'", field);
    }
}

namespace omnetpp {

}  // namespace omnetpp

