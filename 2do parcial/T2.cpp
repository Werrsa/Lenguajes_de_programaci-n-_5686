#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int co=0;
int a,b,c,d,e,f;
int g[10000];/

void dda();
void sum();

int main()
{
	dda();
	while(a>=1 && a<=1000 && b,g[10000]>=1 && b,g[10000]<=10000000 && co ==0 ){
	
	int a=sizeof(g) / sizeof(g[0]);
	sum();
	if(co==0)
	{
		cout<<"imposible"<<endl;
	}
}
	if(a<1 && a>1000){
		cout<<"el numero de elmentos del arreglos tiene que estar entre 1 y 10000 "<<endl;
	}
	if(b,g[10000]<1 && b,g[10000]>10000000){
		cout<<"la suma tiene que y los elementos del arrelgo van desde 1 hasta 1000000000"<<endl;
	}
	return 0;
}

void dda(){
	cout<<"Ingresa cuantos elementos hay en el arreglo y la suma requerida: "<<endl;
	cin>>a>>b;
	cout<<"Elementos del arreglo: "<<endl;
	for( c=1;c<=a;c++)
	{
		cin>>g[c];

}


}


void sum(){ 
for (int c = 0; c <a - 3; c++) 
{ 
    for (int e = c + 1; e <=a - 2; e++) 
    {           
        for (int d = e + 1; d <=a - 1; d++) 
        {
            for (int f = d + 1; f < a; f++) 
        
            if (g[c] + g[e] + g[d] + g[f] == b)
            if(co ==0 ){
                cout << c+1<<", " << e+1  
                     << ", " << d+1 << ", " << f+1<<endl;
                     co+=+1;
					 }
		}
	}  
} 

}


