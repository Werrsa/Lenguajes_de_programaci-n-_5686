#include<iostream>
using namespace std;
int main(){

int q;
int n;
int p=0;
int i;

cout<<"cuantos numeros quiere leer";
cin>>q;

for(i=1;i<=q;i++){

cout<<"di numero";
cin>>n;
if(n>0){

n=1;
p+=+1;
}
}

cout<<"son numeros postivos"<<p<<endl;

return 0;
}
