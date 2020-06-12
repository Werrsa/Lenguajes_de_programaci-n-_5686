#include<iostream>
#include<stdlib.h>
using namespace std;

int a,b,c,d,e;
int f[1000];
int g[1000];
int suma=0;
int main (){
    {
    cout<<"Numero de solicitantes, numero de apartamentos y diferencia maxima permitida: "<<endl;
    cin>>a>>b>>c;
    cout<<"Proporciona el tamaño de apartamento deseado de cada solicitante: "<<endl;
	for( d=0;d<a;d++){
        cin>>f[d];
    }
    cout<<"Tamaño de cada apartamento disponible: "<<endl;
    for( e=0;e<b;e++){
        cin>>g[e];
	}    
}
    {
	for(d=0;d<a;d++){
    	for(e=0;e<b;e++){
    		if(suma<b){
			if((abs(f[d]-g[e]))<=c){
			suma+=1;
  			f[d]=f[d+1];
			g[e]=g[e+1];
		}
			}
		}
}
}
    
    cout<<"Las personas aceptados son: "<<suma;
    return 0;
}


