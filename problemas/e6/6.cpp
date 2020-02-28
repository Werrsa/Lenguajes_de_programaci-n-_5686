//Calcular la suma de los cuadrados de los 100 primeros números naturales.
#include <iostream>
using namespace std;

int main(){

int x;
int c=0;
for(int q=0;q<=100;q++){

x=q*q+x;
}

cout<<"Los cuadrados: "<<x<<endl;

return 0; 
}
