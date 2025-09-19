//
//  make_hospital.hpp
//  ASerna_HW9_1436
//
//  Created by Andrés Serna on 4/18/24.
//

#ifndef make_hospital_hpp
#define make_hospital_hpp

#include <stdio.h>
#include <string>
using namespace std;


class StaffMember{
private:
    //
    
public:
    string name, address, phone;
    
//***************** function prototypes ******************//
    
    // default constructor
    StaffMember();
    
    // other constructors
    
    // functions
    string getName();
    string getAddress();
    string getPhone();
    
    // destructor
    ~StaffMember();


};

class Volunteer : protected StaffMember{
    
    //inherits the name, address, and phone variables into the private access specifier
    
public:
    //

//***************** function prototypes ******************//
    
    // default constructor
    Volunteer();
    
    // other constructors
    Volunteer(string, string, string);
    
    // functions
    void displayInfo_V(Volunteer);
    
    // destructor
    ~Volunteer();

};


class Employee : protected StaffMember{
    
private:
    //
    
public:
    //inherits the following variables into the private access specifier
    //     string name, address, phone;
    string ssn;
    float payRate, hoursWorked;
    
//***************** function prototypes ******************//
    
    // default constructor
    Employee();
    
    // other constructors
    
    // functions
    float virtual pay();
    
    // destructor
    ~Employee();


};

class Doctor : public Employee{
    
private:
    //inherits the following variables into the private access specifier
    //      string name, address, phone, ssn;
    //      float payRate, hoursWorked;

public:
    int numSurgeries;
    float surgeryCost;

//***************** function prototypes ******************//
    
    // default constructor
    Doctor();
    
    // other constructors
    Doctor(string, string, string, string, float, float, int, float);
    //Doctor(name, address, phone, ssn, payRate, hoursWorked, numSurgeries, surgeryCost);

    // functions
    float pay() override;
    void displayInfo_D(Doctor);

    // destructor
    ~Doctor();

};


class Nurses : public Employee{
    
private:
    //inherits the following variables into the private access specifier
    //      string name, address, phone, ssn;
    //      float payRate, hoursWorked;
    
public:
    //
    
//***************** function prototypes ******************//
    
    // default constructor
    Nurses();
    
    // other constructors
    Nurses(string, string, string, string, float, float);

    // functions
    void displayInfo_N(Nurses);
    
    // destructor
    ~Nurses();

    
};

class Executive : public Employee{
    
private:
    //inherits the following variables into the private access specifier
    //      string name, address, phone, ssn;
    //      float payRate, hoursWorked;
    
public:
    float bonus;
    
//***************** function prototypes ******************//
    
    // default constructor
    Executive();
    
    // other constructors
    Executive(string, string, string, string, float, float, float);

    // functions
    float pay() override;
    void displayInfo_E(Executive);
    
    // destructor
    ~Executive();

    
};


class Receptionist : public Employee{
    
private:
    //inherits the following variables into the private access specifier
    //      string name, address, phone, ssn;
    //      float payRate, hoursWorked;
    
public:
    //
    
//***************** function prototypes ******************//
    
    // default constructor
    Receptionist();
    
    // other constructors
    Receptionist(string, string, string, string, float, float);

    // functions
    void displayInfo_R(Receptionist);
    
    // destructor
    ~Receptionist();

    
};

#endif /* make_hospital_hpp */
