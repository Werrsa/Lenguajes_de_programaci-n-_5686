#include <iostream>
using namespace std;
int ciclo(int n, int p, int i);

int main(){
int n;
int f;
int i=0;
int p=0;
cin>>n;
f=ciclo(n,p,i);
cout<<f<<endl;
return 0;
}

int ciclo(int x, int y, int z){

for(z;z<=x;z++){
y=y+z;

}
return y;
}
