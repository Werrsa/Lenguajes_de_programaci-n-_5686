#include<iostream>
using namespace std;
int main (){

int q;//insertar
int sum =0;
int b; 
int i;

for(i=1;i<=10;i){

cout<<"Insertar numero";
cin>>q;

if(q%2 ==0){

sum=sum+q;
i+=+1;
}
}

cout<<"suma de los primeros 10 pares"<<sum<<endl;

return 0;
}
