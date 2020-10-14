#include<iostream>
#include<conio.h>
#include"laboratorio.h"
using namespace std;

main(){
    Computadora pc1 = Computadora("Windows","hp",8.0,1000);
    
    Computadora pc2;
    pc2.setSystem("Linux");
    pc2.setName("Azus");
    pc2.setRam(16.180);
    pc2.setHdd(2000);

    Laboratorio lab;
    lab.agregarFinal(pc1);
    lab.agregarFinal(pc2);

    lab.mostrar();
    //cout<<pc1<<pc2;

    getch();
    return 0;
}