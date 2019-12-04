#include <iostream>
#include "functions.h"
#include <fstream>
using namespace std;
void readCin(dlist *beg){
    dlist *cur;
    cur = beg;
    string s ="";
    string errorMessage ="Write down DOUBLE";
    while (s!="n"){
        double get;
        try{
            cin>>get;
            if(cin.fail()) throw 1;
            //cin>>get;
            //if (!(cin>>get)) {
            //cout<<errorMessage<<endl;
            //    goto fix;
        }
        catch(...){
            cur = NULL;
            break;
        }
        cur->d = get;
        dlist *newnex = new dlist;
        //cout<<cur<<endl<<newnex;
        cout<<"If you want to end this list write down n"<<endl;
        cin>>s;
        if (s!="n") {
            cur->next = newnex;
            cur = newnex;
        }
    }
    cout<<"End of reading"<<endl;
}

void write(dlist *beg){
    dlist *cur;
    cur = beg;
    while (cur!=NULL){
        cout<<cur->d<<endl;
        if (cur!=NULL) cur= cur->next;
        if (cur==NULL) break;
        
    }
    cout<<"End of writing"<<endl;
}



void writeToFile(dlist *beg, string place){
    ofstream outp(place);
    dlist *cur;
    cur = beg;
    while (cur!=NULL){
        outp<<cur->d<<endl;
        if (cur!=NULL) cur= cur->next;
        if (cur==NULL) break;
    }
};


