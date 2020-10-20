#include<iostream>
#include<conio.h>
#include"laboratorio.h"
using namespace std;

main(){
    cout<<endl;
    Computadora pc1 = Computadora("Windows","hp",8.0,1000);
    
    Computadora pc2;
    pc2.setSystem("Linux");
    pc2.setName("Asus");
    pc2.setRam(16.180);
    pc2.setHdd(2000);

    Computadora pc3;
    cin>>pc3; //lee los datos del objeto pc3

    Laboratorio lab;
    lab<<pc1; // agrega el objeto a la clase loboratorio vers compactada
    lab<<pc2; // agrega el objeto a la clase loboratorio vers compactada
    lab<<pc3; // agrega el objeto a la clase loboratorio vers compactada
    //lab.agregarFinal(pc1); // agrega el objeto a la clase loboratorio
    //lab.agregarFinal(pc2); // agrega el objeto a la clase loboratorio
    //lab.agregarFinal(pc3); // agrega el objeto a la clase loboratorio

    cout<<endl;

    lab.mostrar();
    //cout<<pc1<<pc2;

    getch();
    return 0;
}