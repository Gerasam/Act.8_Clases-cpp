#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
using namespace std;

class Computadora
{
public:
    string system;
    string name;
    float ram;
    int hdd;
public:
    Computadora();
    Computadora(const string &system, const string &name, float ram, int hdd);
    void setSystem(const string &v);
    string getSystem();
    void setName(const string &v);
    string getName();
    void setRam(float v);
    float getRam();
    void setHdd(int v);
    int getHdd();
};


#endif