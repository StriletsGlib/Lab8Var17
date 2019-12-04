//
//  main.cpp
//  Lab8 variant3
//
//  Created by Gleb Strelets on 12/4/19.
//  Copyright © 2019 Glib Strilets. All rights reserved.
//

#include "functions.h"
int main(){
    dlist firts, second, result;
    cout<<"Start of program"<<endl;
    cout<<"List of commands:"<<endl;
    listOfCommands();
    string command;
    while(command !="end"){
        if (command=="read1c") readCin(&firts);
        if (command=="read2c") readCin(&second);
        if (command=="write1s") write(&firts);
        if (command=="write2s") write(&second);
        if (command=="write1f") {
            cout<<"Write name of the file to where shoul list be written"<<endl;
            string z;
            cin>>z;
            writeToFile(&firts, z);
        }
        if (command=="write2f") write(&second);
        cin>>command;
    }
    
    
    //readCin(firts);
    cout<<"Exit"<<endl;
    return 0;
}
