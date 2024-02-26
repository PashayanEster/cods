#include "patient.h"
Patient::Patient() 
    : m_name("")
    ,m_datebirth("")
    ,m_gender("")
    ,m_contact("")
    ,m_medicalcondition("")
    {}

    Patient::~Patient(){};
    Patient::Patient (const std::string& name, const std::string& dbirth, const std::string& gen, const std::string& cont, const std::string& med) :
    m_name(name), m_datebirth(dbirth), m_gender(gen), m_contact(cont), m_medicalcondition(med)
{}

    Patient::Patient(const Patient& other):
        m_name(other.m_name),
        m_datebirth(other.m_datebirth),
        m_gender(other.m_gender),
        m_contact(other.m_contact),
        m_medicalcondition(other.m_medicalcondition)
{
    m_name = ("");
m_datebirth = ("");
m_gender= ("");
m_contact = ("");
m_medicalcondition = ("");
}


    Patient &Patient::operator = (const Patient& other)
{
    if (this == &other)
        return *this;
m_name = other.m_name;
m_datebirth= other.m_datebirth;
m_gender= other.m_gender;
m_contact = other.m_contact;
m_medicalcondition= other.m_medicalcondition;

return *this;
}

Patient::Patient(Patient&& other) :
    m_name(std::move(other.m_name)),
    m_datebirth(std::move(other.m_datebirth)),
    m_gender(std::move(other.m_gender)),
    m_contact(std::move(other.m_contact)),
    m_medicalcondition(std::move(other.m_medicalcondition))
    {
        other.m_name = ("");
        other.m_datebirth = ("");
        other.m_gender = ("");
        other.m_contact = ("");
        other.m_medicalcondition =("");
    }


Patient& Patient::operator=(Patient&& other) {
    if (this == &other) 
        return *this;
m_name = std::move(other.m_name);
    m_datebirth = std::move(other.m_datebirth);
    m_gender = other.m_gender;
    m_contact= other.m_contact;
    m_medicalcondition = other.m_medicalcondition;
    
    return *this;
}


 std::string Patient::getName(){
        return m_name;
    }

    std::string Patient::getDatebirth(){
        return m_datebirth;
    }
    std::string Patient::getGender(){
        return m_gender;
    }
    std::string Patient::getContac(){
        return m_contact;
    }
    std::string Patient ::getMedicalcondition(){
        return m_medicalcondition;
    }


void Patient::setName(const std::string& newName)
{
    m_name = newName;
}
void Patient:: setDatebirth(const std::string& newdatebirth)
{
    m_datebirth = newdatebirth;
}
void Patient::setGender(const std::string& newgender)
{
    m_gender = newgender;
}
void Patient::setContact(const std::string& newcontac)
{
    m_contact = newcontac;
}
void Patient::setMedicalcondition(const std::string& newmedicalcondition)
{
    m_medicalcondition = newmedicalcondition;
}
