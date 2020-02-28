#include <iostream>
using namespace std;
int main(){
int q;
int w=0;
int p=0;
for(q=2;q<=100;q++){
p=q;
if(q%2==0){
w=p+w;
}
}
cout<<"Suma.pares: "<<w<<endl;

return 0;

}
