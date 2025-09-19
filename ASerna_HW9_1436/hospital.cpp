//
//  main.cpp
//  ASerna_HW9_1436
//
//  Created by Andrés Serna on 4/18/24.
//
#include "make_hospital.hpp"
#include <iostream>

int main() {
    Volunteer diana("Diana", "11 South Paris Hill Rd.", "(984) 163-0125"), ryan("Ryan","625 Amerige Dr.","(750) 837-4154");
    
    Doctor gene("Gene", "311 Delaware Ave.", "(275) 249-0721", "047-86-8586", 150, 160, 3, 10000);
    
    Nurses raye("Raye", "933 Honey Creek St", "(722) 521-3317", "417-46-7995", 50.5, 80), kristopher("Kristopher", "99 Harvard St.", "(672) 790-2499", "517-42-5738", 45.9, 100);
    
    Receptionist sam("Sam", "8426 Proctor St.", "(301) 936-4987", "365-07-9906", 30, 160);
    
    Executive sean("Sean", "6200 Seaside Dr.", "(361) 956-4787", "678-16-4701", 130, 160, 12000);
    
    //cout <<"all instances created :>" <<endl;
    
    // calling the display functions for their respective classes
    diana.displayInfo_V(diana);
    ryan.displayInfo_V(ryan);
    
    //figure out why you can't go up in scope to staffmember
    gene.displayInfo_D(gene);
    raye.displayInfo_N(raye);
    kristopher.displayInfo_N(kristopher);
    sam.displayInfo_R(sam);
    sean.displayInfo_E(sean);
    
    cout <<endl;
    
    return 0;
}
