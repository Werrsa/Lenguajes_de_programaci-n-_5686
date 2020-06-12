#include <iostream>
using namespace std;
int operacion(int a, int b);

int main(){
int a;
int b, sp;
cin>>a>>b;
sp=operacion(a,b);
cout<<sp<<endl;
return 0;
}
int operacion(int aa, int bb){
int r=(aa+bb)+(aa-bb)+(bb+aa)+(bb-aa);
return r;
}
