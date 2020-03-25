#include <iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    float tencion=0;
    int masa;
    float Newton=0;
    int altura;
    int dis;
    cout<<"insertar masa, altura y distancia AC"<<endl;
    cin>>masa;
    cin>>altura;
    cin>>dis;
    float c=0;
    float f2=0;
    Newton=masa*(9.8);
    for(int i=1;i<=dis;i++)
    {
        c=sqrt((altura*altura)+(i*i));
        f2=Newton/c;
        tencion=f2+1;
        cout<< "la tencion en la distancia AC "<<i<<" con un cable de "<<c <<"m"<<" es de " <<tencion<<"N"<<endl;

    }
return 0;
}
