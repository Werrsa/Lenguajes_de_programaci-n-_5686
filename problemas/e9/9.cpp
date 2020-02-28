#include<iostream>
using namespace std;


int main(){

int q;//entrada de dato
float n;//numero
int s=0;//suma
float m;//media 

cout<<"Cuantos datos ingresar: ";
cin>>q;

for(int i=1;i<=q;i++){

cout<<"Numero: ";
cin>>n;
s=s+n;
}
m=s/q;

cout<<"La media es: "<<m<<endl;

return 0;
}
