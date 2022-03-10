#include <iostream>
using namespace std;
main(){
 int opcion,repetir=1;
 float matriz2x3[2][3],matriz3x4[3][4],x,y,z;
 do
 {
 cout<<"Este programa resuleve sistemas ecuaciones de 2 "<<endl;
 
 {
   cout<<"Primera Ecuaci\xA2n"<<endl<<endl;
   cout<<"Ingrese el coeficiente de x: ";
   cin>>matriz2x3[0][0];
   cout<<endl;
   cout<<"Ingrese el coeficiente de y: ";
   cin>>matriz2x3[0][1];
   cout<<endl;
   cout<<"Ingrese el valor del termino independiente: ";
   cin>>matriz2x3[0][2];
   cout<<endl;
   cout<<"Segunda Ecuaci\xA2n"<<endl<<endl;
   cout<<"Ingrese el coeficiente de x: ";
   cin>>matriz2x3[1][0];
   cout<<endl;
   cout<<"Ingrese el coeficiente de y: ";
   cin>>matriz2x3[1][1];
   cout<<endl;
   cout<<"Ingrese el valor del termino independiente: ";
   cin>>matriz2x3[1][2];
   cout<<endl;
   //Resolviendo sistema con base en metodo de Gauss-Jordan
   matriz2x3[0][1]=matriz2x3[0][1]/matriz2x3[0][0];
   matriz2x3[0][2]=matriz2x3[0][2]/matriz2x3[0][0];
   matriz2x3[0][0]=matriz2x3[0][0]/matriz2x3[0][0];// Se hace 1
   //----------------------------------------------
   matriz2x3[1][1]=((-matriz2x3[1][0])*matriz2x3[0][1])+matriz2x3[1][1];
   matriz2x3[1][2]=((-matriz2x3[1][0])*matriz2x3[0][2])+matriz2x3[1][2];
   matriz2x3[1][0]=((-matriz2x3[1][0])*matriz2x3[0][0])+matriz2x3[1][0];// Se hace 0
   //-------------------------------------------------------------------
   matriz2x3[1][2]=matriz2x3[1][2]/matriz2x3[1][1];//Solucion variable y
   matriz2x3[1][1]=matriz2x3[1][1]/matriz2x3[1][1];
   //----------------------------------------------
   matriz2x3[0][2]=((-matriz2x3[0][1])*matriz2x3[1][2])+matriz2x3[0][2];//Solucion variable x
   matriz2x3[0][1]=((-matriz2x3[0][1])*matriz2x3[1][1])+matriz2x3[0][1];
   //-------------------------------------------------------------------
   x=matriz2x3[0][2];
   y=matriz2x3[1][2];
   cout<<"Soluci\xA2n: "<<endl;
   cout<<"\tx="<<x<<endl;
   cout<<"\ty="<<y<<endl;
   break;
 }
 system("cls");
 }while(repetir==1);
}