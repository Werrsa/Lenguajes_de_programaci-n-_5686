#include<iostream>
using namespace std;

int main(){

int nu;//numero
int s =0;//suma
int im =0;//impar
int a=0;
int m;//media
int n=0;
int i;
for(i=1;i<=10;i++){

cout<<"Ingresa numero: ";
cin>>nu;

if(nu%2 ==0){
s=s+nu;
n=n+1;
}

else{
            
im=im+nu;
a=a+1;
m=im/a;
}
     
}
cout<<"La suma par es: "<<s<<endl;
cout<<"Existen "<<n<<" numeros pares"<<endl;
cout<<"La media de los impares es "<<m<<endl;

return 0;
}
