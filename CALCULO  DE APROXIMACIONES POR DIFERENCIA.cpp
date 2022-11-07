#include<iostream>
#include<math.h>

using namespace std;

double senoFuncion(double x){
    double result;
   // double pi= 3.1415;
    result = sin(x);//(x*pi/180);
    return result;
};
int  main(){
    int n=0;
    int  cantidad=11;
    double h=0.1;

    //!guardar  tabla
    double y[cantidad];
    //! Aqui se guarda la derivada
    double derivada[cantidad];
    //!que tanto  avanzamos en cada paso al crear la tabla
    double paso =0.1;
    double  x=0;

    cout<<"--------------------"<<endl;
    cout<<" X  \tF(x)"<<endl;
    cout<<"--------------------"<<endl;

    //!Creamos la  tabla
    for(n=0;n<cantidad;n++){
        y[n] = senoFuncion(x);
        cout<<x<<"\t "<<y[n]<<endl;
        x+=paso;
    }

    //!Calculamos la derivada
    for(n=1;n<cantidad-1;n++){
        derivada[n] = (y[n+1]-y[n-1])/(2*h);
    }
    //!FUNCIONA bien pero  no podemos calcular  la derivada  de  0 o 1
    cout<<"========================="<<endl;
    //!Imprimir  tabla resultante
    cout<<"     Tabla  Resultante  "<<endl;
    cout<<" X \tDerivada "<<endl;
    for(int n=1;n<cantidad -1;n++){
        cout<<n*h <<"\t"<<derivada[n]<<endl;
    }


    //!Calcular la derivada de  1
    cout<<"========================="<<endl;
    cout<<"Segunda tabla resultante \n "<<endl;
    cout<<" X \tDerivada "<<endl;
    derivada[10]=((3*y[10])-(4*y[9])+y[8])/(2*h);
    for(int n=1;n<cantidad;n++){
        cout<<n*h <<"\t"<<derivada[n]<<endl;
    }

    return 0;

}
