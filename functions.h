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

void generate(int maxn, double max, int point);
void writeToFile(string);
void write(dlist *beg);
void readFile(string);
void readCin(dlist *beg);
void writeToFile(dlist *beg, string place ="outp.txt");
void createList(dlist *a, dlist *b, dlist *res);
void readFile(dlist *beg, string str);
void mChange(dlist *beg1, dlist *beg2);
