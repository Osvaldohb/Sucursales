#include <iostream>
#include <conio.h>
 #include <stdlib.h>
 #include <windows.h>

using namespace std;
void entrada(float Monto[' '][' '],int m,int n,int col, int fila);
float sucursalM(float Monto[' '][' '],int m,int n,int col,int fila);
float promedio(float Monto[' '][' '],int m,int n,int col,int fila,int dec);

 main()
{
    int rep=0;
    do
    { 
    float Monto[' '][' '];
    int m,n,sm;
    int dec;
    
    cout<<"Bienvenido al calculo de empresas y sucursales"<<endl;
    cout<<"Ingresa los anios"<<endl;
    cin>>m;
    cout<<"Ingresa las sucursales"<<endl;
    cin>>n;
    entrada(Monto,m,n,10,3);
    sm=sucursalM(Monto,m,n,10,3);
    system("cls");
    cout<<"Porfavor eliga la opcion que corresponda a su busqueda"<<endl;
    cout<<"1.-Sucursal que mas a vendido en "<<m<<" anios"<<endl;
    cout<<"2.-Promedio de ventas por anio"<<endl;
    cout<<"3.-Anio con mayor promedio de ventas."<<endl;
    cin>>dec;
    system("cls");
    if(dec==1)
    { 
        cout<<"La sucursal que mas vendio fue la numero: "<<sm<<endl;
    }if(dec==2)
    {
         promedio(Monto,m,n,10,3,dec);
    }
    if(dec==3)
    {
        promedio(Monto,m,n,10,3,dec);
    }
    cout<<" "<<endl;
    cout<<"Deseas repetir el programa? 1.-Si"<<endl;
    cin>>rep;
    system("cls");
     } while (rep==1);
}

void entrada(float Monto[' '][' '],int m,int n,int col, int fila){
    int x,y;
    for(x=0;x<n;x++){
        for(y=0;y<m;y++){
           cout<<"Ingresa datos "<<x+1<<","<<y+1<<": ";
           cin>>Monto[x][y];
        }
    }
}

float sucursalM(float Monto[' '][' '],int m,int n,int col,int fila)
{
     int x,y;
     float Max,suma=0;
    for(x=0;x<n;x++){
        for(y=0;y<m;y++){
            suma=Monto[x][y];
          if(Max<suma)
          {
              fila=x;
            Max=suma;
          }
        }
    }
    return fila+1;
}

float promedio(float Monto[' '][' '],int m,int n,int col,int fila,int dec)
{
     int x,y;
     float suma,Prom=0,Max=0;
    for(x=0;x<n;x++){
        suma=0;
        for(y=0;y<m;y++)
           {
            suma+=Monto[y][x];  
        }
        Prom=suma/m;
        if(Max<Prom)
                {
                    Max=Prom;
                    col=x;
                     }
        if(dec==2)
        {
        cout<<"El promedio de ventas del anio: "<<x+1<<" Es de: "<<Prom<<endl;
        }
        
    }
    if(dec==3)
    {
    cout<<"El anio con mas promedio de ventas es el anio: "<<col+1<<" Con un promedio de: "<<Max<<endl;
    }
}