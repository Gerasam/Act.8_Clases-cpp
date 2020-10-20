#include"laboratorio.h"
#include<fstream>

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
void Laboratorio::respaldar__tabla()
{
    ofstream archivo("Computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo<<left;
        archivo<<setw(10)<<"System";
        archivo<<setw(10)<<"Nombre";
        archivo<<setw(8)<<"RAM";
        archivo<<setw(8)<<"HDD";
        archivo<<endl;
        for (size_t i = 0; i < cont; i++){
            Computadora &c = arreglo[i];
            archivo<<c;
        }
    }
    archivo.close();
}
void Laboratorio::respaldar()//linea-linea
{
    ofstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < cont; i++){
            Computadora &c = arreglo[i];
            archivo<<c.getSystem()<<endl;
            archivo<<c.getName()<<endl;
            archivo<<c.getRam()<<endl;
            archivo<<c.getHdd()<<endl;
        }
    }
    archivo.close();
}
