#include<iostream>
using namespace std;
int main()
{

int q;
int y=0;
int x=0;
int z=0;
int n;//Numero
int i;

cout<<"¿Numeros a leer? ";
cin>>q;

for(i=1;i<=q;i++){

cout<<"Numero natural: ";
cin>>n;
if(n>15){

y+=+1;
}
if(n>50){

x+=+1;
}
if(n>25){

if(n<45){

z+=+1;
}
}
}

cout<<y<<" numeros son mayores a 15"<<endl;
cout<<x<<" numeros son mayores a 50"<<endl;
cout<<z<<" numeros estans entre 25 y 45"<<endl;
return 0;
}
