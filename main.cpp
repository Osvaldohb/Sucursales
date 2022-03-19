#include <iostream>
#include <conio.h>

using namespace std;
void entrada(float Monto[' '][' '],int m,int n,int col, int fila);

 main()
{
    float Monto[' '][' '];
    int m,n;
    
    cout<<"Bienvenido al calculo de empresas y sucursales"<<endl;
    cout<<"Ingresa los anios"<<endl;
    cin>>m;
    cout<<"Ingresa las sucursales"<<endl;
    cin>>n;
    cout<<"Holi";
    entrada(Monto,m,n,10,3);
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