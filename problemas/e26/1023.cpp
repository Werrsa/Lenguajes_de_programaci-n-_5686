#include <iostream>
using namespace std;

float promedio(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l);

int main(){
float a, b, c, d, e, f, g, h, i, j, k, l;
float sp;
cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
sp=promedio(a,b,c,d,e,f,g,h,i,j,k,l);
cout<<sp<<endl;
return 0;
}

float promedio(float q, float w, float r, float t, float y, float u, float o, float m, float s, float z, float x, float v){
float p;
p=(q+w+r+t+y+u+o+m+s+z+x+v/2);
return p;
}
