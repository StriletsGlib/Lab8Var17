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
    outp.close();
};


void createList(dlist *beg1, dlist *beg2, dlist *res){
    dlist *cur1, *cur2, *curres;
    cur1 =beg1;
    cur2 =beg2;
    curres = res;
    while ((cur1!=NULL)||(cur2!=NULL)){
        int a, b;
        if((cur1!=NULL)&&(cur2!=NULL)){
            dlist *newnex = new dlist;
            a = cur1->d;
            b = cur2->d;
            if (a<b) {
                curres->d=a;
                cur1=cur1->next;
                curres->next = newnex;
                curres =newnex;
            }
            if (a>b) {
                curres->d=b;
                cur2=cur2->next;
                curres->next = newnex;
                curres =newnex;
            }
        }
        else{
            if(cur1!=NULL){
                dlist *newnex = new dlist;
                curres->d=beg1->d;
                cur1=cur1->next;
                curres->next = newnex;
                curres =newnex;
            }
            if(cur2!=NULL){
                dlist *newnex = new dlist;
                curres->d=beg2->d;
                cur2=cur2->next;
                curres->next = newnex;
                curres =newnex;
                
            }
        }
    }
};

void mChange(dlist *a, dlist *b, dlist *res){
    
    
    
    
    
    
};



void readFile(dlist *beg, string str){
    dlist *cur;
    cur = beg;
    string s ="";
    ifstream inp(str);
    while (inp.eof()){
        double get;
        try{
            inp>>get;
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
            cur->next = newnex;
            cur = newnex;
    }
    cout<<"End of reading"<<endl;
}
