#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
srand(time(NULL));

int lim_inf =-50;
int lim_sup =60;
int z=0;
int x=0;
int c=0;
int i;
int valor;

for(i=0;i<100;i++){
valor=lim_inf + rand()%(lim_sup + 1 - lim_inf);

cout<<valor<<endl;

if(valor<15){

z+=1;
}

if(valor>50){

x+=1;
}

if(valor>25 && valor<45){

c+=1;
}
}

valor=rand()%100;	

cout<<"Menores de 15: "<<z<<endl;
cout<<"Mayores de 50: "<<x<<endl;
cout<<"Comprendidos entre 25 y 45: "<<c<<endl;

return 0;
} 
