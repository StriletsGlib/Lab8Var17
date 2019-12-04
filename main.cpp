//
//  main.cpp
//  Lab8 variant3
//
//  Created by Gleb Strelets on 12/4/19.
//  Copyright © 2019 Glib Strilets. All rights reserved.
//

#include "functions.h"
int main(){
    dlist first, second, result;
    cout<<"Start of program"<<endl;
    cout<<"List of commands:"<<endl;
    listOfCommands();
    string command;
    while(command !="end"){
        if (command=="read1c") readCin(&first);
        if (command=="read2c") readCin(&second);
        if (command=="write1s") write(&first);
        if (command=="write2s") write(&second);
        if (command=="write1f") {
            cout<<"Write name of the file to where should list be written"<<endl;
            string z;
            cin>>z;
            writeToFile(&first, z);
        }
        if (command=="write2f") {
            cout<<"Write name of the file to where should list be written"<<endl;
            string z;
            cin>>z;
            writeToFile(&second, z);
        };
        if (command=="mCreating"){
            createList(&first, &second, &result);
            writeToFile(&result, "output1.txt");
        }
        if (command=="help") listOfCommands();
        cin>>command;
    }
    
    
    //readCin(firts);
    cout<<"Exit"<<endl;
    return 0;
}
