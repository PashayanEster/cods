#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
class Patient{
public:
Patient();
Patient(const Patient&);
Patient(Patient&&);
Patient(const std::string&, const std::string&, const std::string&, const std::string&,const std::string&);

Patient& operator=(const Patient&); // copy assignment
Patient& operator=(Patient&&); // move assignment
~Patient();
    
    void setName(const std::string&);
    void setDatebirth(const std::string&);
    void setGender(const std::string&);
    void setContact(const std::string&);
    void setMedicalcondition(const std::string&);
    std::string getName();
    std::string getDatebirth();
    std::string getGender();
    std::string getContac();
    std::string getMedicalcondition();


private:
std::string m_name;
std::string m_datebirth;
std::string m_gender;
std::string m_contact;
std::string m_medicalcondition;

};
#endif 