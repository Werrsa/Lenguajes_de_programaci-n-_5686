#include<iostream>
using namespace std;
int main(){

int q;
int iva;
int pn;//precio neto
int des;//descuento
int np;//nuevo precio

cout<<"¿Cuál es el precio?";
cin>>q;
iva=q*.15;
pn=q+iva;
if(pn>50000){

des=pn*.05;
cout<<"descuento de"<<des<<"$"<<endl;
np=pn-des;
cout<<"precio con descuento"<<np<<endl;
}

cout<<"precio neto"<<pn<<endl;

return 0;
}
