#include<iostream>
using namespace std;
int main()
{
     int sp=0;
     int p=1;
int x;
for(int i=20;i<=4000;i++){ 

if(i%2 ==0){
p=i*i;
x=p*i*-1;
sp=sp+i;
}
}
cout<<"Suma par: "<<sp<<endl;
cout<<"Producto es: "<<x<<endl;
return 0;
}
