#include<iostream>
using namespace std;
int main(){

int q;//ingreso
int s=0;//Suma
int c;//calificación
int me;//media
int i;

cout<<"¿Cuantos alumnos hay? ";
cin>>q;

for(i=1;i<=q;i++){

cout<<"¿Calificacion del alumno "<<i<<"?"<<endl;
cin>>c;
s=s+c;
}

me=s/q;

cout<<"Promedio del salón con "<<q<<" alumnos es de "<<me<<endl;

return 0;
}
