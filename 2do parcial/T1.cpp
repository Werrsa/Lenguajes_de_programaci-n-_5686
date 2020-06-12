#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int dato=0;
	cout<<"Digite un numero: ";
	cin>>dato;
	cout<<dato;
	salto:
	if(dato==1){
	
	} 
	else{
	if(dato%2==0){
		dato=dato/2;
		cout<<"->"<<dato;
		goto salto;
	}
	else{
		dato=dato*3+1;
		cout<<"->"<<dato;
		goto salto;
	}
	}
	
	return 0;
}
