#include <iostream>
using namespace std;
#include<iostream>
using namespace std;
int main()
{
int n;
int nm; 
int nn;
int q;
    cout<<"cuantos numeros quieres ingresar";
    cin>>q;
    for(int i=0;i<=q;i++)
    {;
        cout<<"di numero";
        cin>>n;
        if(i==0){
            nm=n;
        }
        else{
        if(n>nm)nm=n;
        if(n<0)nn=n;
        }

    }
    cout<< "El mumero mayor es: "<<nm<<endl;
    cout<<"El numero negativo es: "<<nn<<endl;
}
