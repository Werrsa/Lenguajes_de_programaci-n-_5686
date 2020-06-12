#include<iostream>
using namespace std;
int main(){

int q=0;
int w=0;

for(int i=1;i<=200;i++)
{ 
    if(i%2 !=0){
        w=w+i;
}
    else{

        q=q+i;
}   

}
cout<<"suma par: "<<q<<endl;
cout<<"suma impar es: "<<w<<endl;
    return 0;
}
