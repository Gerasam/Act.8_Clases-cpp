#include"laboratorio.h"

Laboratorio::Laboratorio(){
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if(cont < 5){
        arreglo[cont] = c;
        cont++;
    }
    else
    {
        cout<<"Arreglo lleno"<<endl;
    }
    
}

void Laboratorio::mostrar()
{
    cout<<left;
    cout<<setw(10)<<"System";
    cout<<setw(10)<<"Nombre";
    cout<<setw(8)<<"RAM";
    cout<<setw(8)<<"HDD";
    cout<<endl;
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &c = arreglo[i];
        cout<<c;
        
        //cout<<"Sistema_operativo: "<< c.getSystem()<<endl;
        //cout<<"Nombre: "<< c.getName()<<endl;
        //cout<<"Ram: "<< c.getRam()<<endl;
        //cout<<"HDD: "<< c.getHdd()<<endl;
        //cout<<endl;
    }
    
}
