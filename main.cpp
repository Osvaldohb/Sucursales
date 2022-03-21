#include <iostream>
#include <conio.h>

using namespace std;
void entrada(float Monto[' '][' '],int m,int n,int col, int fila);
float sucursalM(float Monto[' '][' '],int m,int n,int col,int fila);
float promedio(float Monto[' '][' '],int m,int n,int col,int fila);

 main()
{
    float Monto[' '][' '];
    int m,n;
    
    cout<<"Bienvenido al calculo de empresas y sucursales"<<endl;
    cout<<"Ingresa los anios"<<endl;
    cin>>m;
    cout<<"Ingresa las sucursales"<<endl;
    cin>>n;
    
    entrada(Monto,m,n,10,3);
    cout<<"La sucursal que mas vendio fue la numero: "<<sucursalM(Monto,m,n,10,3)<<endl;
    promedio(Monto,m,n,10,3);
    
    getch();
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

float promedio(float Monto[' '][' '],int m,int n,int col,int fila)
{
     int x,y;
     float suma,Prom=0;
    for(x=0;x<n;x++){
        suma=0;
        for(y=0;y<m;y++)
           {
            suma+=Monto[x][y];    
        }
        Prom=suma/m;
        
        cout<<"El promedio de ventas del anio: "<<x+1<<" Es de: "<<Prom<<endl;
        
    }
   
}