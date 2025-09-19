//
//  make_hospital.cpp
//  ASerna_HW9_1436
//
//  Created by Andrés Serna on 4/18/24.
//
#include <iostream>
#include "make_hospital.hpp"
using namespace std;


//***************** StaffMember Implementations ******************//

StaffMember :: StaffMember() {
    //make stuff default
}

string StaffMember :: getName(){
    return name;
}

string StaffMember :: getAddress(){
    return address;
}

string StaffMember :: getPhone(){
    return phone;
}

StaffMember :: ~StaffMember() {}


//***************** Volunteer Implementations ******************//

Volunteer :: Volunteer() {
    //make stuff default
}

Volunteer :: Volunteer(string passed_name, string passed_address, string passed_phone){
    //assign the right things to the right things
    
    //assigns the passed variable "passed_name" to the private inherited variable "name"
    name = passed_name;
    
    //assigns the passed variable "passed_address" to the private inherited variable "address"
    address = passed_address;
    
    //assigns the passed variable "passed_phone" to the private inherited variable "phone"
    phone = passed_phone;
}

void Volunteer :: displayInfo_V(Volunteer baby){
    cout <<endl <<endl;
    
    cout <<"**************** Staff Compensation ****************" <<endl;
    cout <<"Name: " <<baby.getName() <<"\t \t" <<"Phone: " <<baby.getPhone() <<endl;
    cout <<"Address: " <<baby.getAddress() <<endl;
    cout <<"****************************************************" <<endl;
}


Volunteer :: ~Volunteer() {}


//***************** Employee Implementations ******************//

Employee :: Employee() {
    //make stuff default
}

float Employee::pay() {
    // Calculate and return the pay for the employee based on payRate and hoursWorked
    return payRate * hoursWorked;
}

Employee :: ~Employee() {}


//***************** Doctor Implementations ******************//

Doctor :: Doctor(){
    //make the stuff default
}

Doctor :: Doctor(string passed_name, string passed_address, string passed_phone, string passed_ssn, float passed_payRate, float passed_hoursWorked, int passed_numSurgeries, float passed_surgeryCost){
    //set all the things
    
    //assigns the passed variable "passed_name" to the private inherited variable "name"
    name = passed_name;
    
    //assigns the passed variable "passed_address" to the private inherited variable "address"
    address = passed_address;
    
    //assigns the passed variable "passed_phone" to the private inherited variable "phone"
    phone = passed_phone;
    
    ssn = passed_ssn;
    payRate = passed_payRate;
    hoursWorked = passed_hoursWorked;
    numSurgeries = passed_numSurgeries;
    surgeryCost = passed_surgeryCost;
}

float Doctor :: pay() {
        // Calculate the base pay from the Employee class
        float basePay = Employee::pay();

        // Add the surgery costs to the base pay
        float surgeryPay = numSurgeries * surgeryCost;

        // Return the total pay (base pay + surgery pay)
        return basePay + surgeryPay;
}

void Doctor :: displayInfo_D(Doctor doc){
    
    cout <<endl <<endl;
    
    cout <<"**************** Staff Compensation ****************" <<endl;
    cout <<"Name: " <<doc.getName() <<"\t \t" <<"Phone: " <<doc.getPhone() <<endl;
    cout <<"Address: " <<doc.getAddress() <<"\t \t" <<"SSN: " <<doc.ssn <<endl;
    cout <<"Pay Rate: " <<doc.payRate <<"\t \t" <<"Hours Worked: "  <<doc.hoursWorked <<endl;
    cout <<"Surgeries Performed: " <<doc.numSurgeries <<"\t \t" <<"Cost per Surgery: " <<doc.surgeryCost <<endl;
    cout <<"Final Pay: $" <<doc.pay() <<".00"<<endl;
    cout <<"****************************************************" <<endl;
    
}

Doctor :: ~Doctor(){}


//***************** Nurses Implementations ******************//

Nurses :: Nurses(){
    //make anything default
}

Nurses :: Nurses(string passed_name, string passed_address, string passed_phone, string passed_ssn, float passed_payRate, float passed_hoursWorked){
    //set all the shit
    
    name = passed_name;
    address = passed_address;
    phone = passed_phone;
    ssn = passed_ssn;
    payRate = passed_payRate;
    hoursWorked = passed_hoursWorked;
}

void Nurses :: displayInfo_N(Nurses nurse){
    cout <<endl <<endl;
    
    cout <<"**************** Staff Compensation ****************" <<endl;
    cout <<"Name: " <<nurse.getName() <<"\t \t" <<"Phone: " <<nurse.getPhone() <<endl;
    cout <<"Address: " <<nurse.getAddress() <<"\t \t" <<"SSN: " <<nurse.ssn <<endl;
    cout <<"Pay Rate: " <<nurse.payRate <<"\t \t" <<"Hours Worked: "  <<nurse.hoursWorked <<endl;
    cout <<"Final Pay: $" <<nurse.pay() <<".00"<<endl;
    cout <<"****************************************************" <<endl;
}

Nurses :: ~Nurses(){}


//***************** Executive Implementations ******************//

Executive :: Executive(){
    //make anything default
}

Executive :: Executive(string passed_name, string passed_address, string passed_phone, string passed_ssn, float passed_payRate, float passed_hoursWorked, float passed_bonus){
    //set all the shit
    
    name = passed_name;
    address = passed_address;
    phone = passed_phone;
    ssn = passed_ssn;
    payRate = passed_payRate;
    hoursWorked = passed_hoursWorked;
    bonus = passed_bonus;
}

float Executive :: pay() {
        // Calculate the base pay from the Employee class
        float basePay = Employee::pay();

        // Return the total pay (base pay + bonus)
        return basePay + bonus;
}
void Executive :: displayInfo_E(Executive exec){
    cout <<endl <<endl;
    
    cout <<"**************** Staff Compensation ****************" <<endl;
    cout <<"Name: " <<exec.getName() <<"\t \t" <<"Phone: " <<exec.getPhone() <<endl;
    cout <<"Address: " <<exec.getAddress() <<"\t \t" <<"SSN: " <<exec.ssn <<endl;
    cout <<"Pay Rate: " <<exec.payRate <<"\t \t" <<"Hours Worked: "  <<exec.hoursWorked <<endl;
    cout <<"Bonus: " <<exec.bonus <<"\t \t" <<"Final Pay: $" <<exec.pay() <<".00"<<endl;
    cout <<"****************************************************" <<endl;
}

Executive :: ~Executive(){}


//***************** Receptionist Implementations ******************//

Receptionist :: Receptionist(){
    //make anything default
}

Receptionist :: Receptionist(string passed_name, string passed_address, string passed_phone, string passed_ssn, float passed_payRate, float passed_hoursWorked){
    //set all the shit
    
    name = passed_name;
    address = passed_address;
    phone = passed_phone;
    ssn = passed_ssn;
    payRate = passed_payRate;
    hoursWorked = passed_hoursWorked;
}

void Receptionist :: displayInfo_R(Receptionist recep){
    cout <<endl <<endl;
    
    cout <<"**************** Staff Compensation ****************" <<endl;
    cout <<"Name: " <<recep.getName() <<"\t \t" <<"Phone: " <<recep.getPhone() <<endl;
    cout <<"Address: " <<recep.getAddress() <<"\t \t" <<"SSN: " <<recep.ssn <<endl;
    cout <<"Pay Rate: " <<recep.payRate <<"\t \t" <<"Hours Worked: "  <<recep.hoursWorked <<endl;
    cout <<"Final Pay: $" <<recep.pay() <<".00"<<endl;
    cout <<"****************************************************" <<endl;
    
}

Receptionist :: ~Receptionist(){}








