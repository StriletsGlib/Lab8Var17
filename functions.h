//functions.h
#include <iostream>
struct dlist {
    double d;
    dlist *next = NULL;
    //None(): next = NULL;
};
using namespace std;

void menu(dlist &first, dlist &second, dlist &result);

void listOfCommands();


//void readCin(dlist *beg);

void listOfCommands();

dlist* generate(int maxn, double max, int point);
void writeToFile(string);
void write(dlist *beg);
dlist* readFile(string);
void readCin(dlist *beg);
void writeToFile(dlist *beg, string place ="outp.txt");
void createList(dlist *a, dlist *b, dlist *res);
void mChange(dlist *a, dlist *b, dlist *res);
void readFile(dlist *beg, string str);
