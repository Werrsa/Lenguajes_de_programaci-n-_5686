#include <iostream>
using namespace std;
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);
int mod(int a, int b);

int main(){
int a,b,sp,t,sp2,q,sp3,p,sp4,w,sp5,e;
cin>>a>>b;
sp=suma(a,b);
cout<<sp<<endl;
sp2=resta(a,b);
cout<<sp2<<endl;
sp3=multiplicacion(a,b);
cout<<sp3<<endl;
sp4=division(a,b);
cout<<sp4<<endl;
sp5=mod(a,b);
cout<<sp5<<endl;
return 0;
}

int suma(int x, int y){
int t;
t=x+y;
return t;}
int resta(int x1, int y1){
int q;
q=x1-y1;
return q;}
int multiplicacion(int x2, int y2){
int p;
p=x2*y2;
return p;}
int division(int x3, int y3){
int w;
w=x3/y3;
return w;}
int mod(int x4, int y4){
int e;
e=x4%y4;
return e;
}
