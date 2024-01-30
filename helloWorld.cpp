#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"cuantos años tienes?"<<endl;
    cin>>x;
    cout<<"la edad es "<<x<<endl;
    if(x>18){
        cout<<"Eres mayor de edad"<<endl;
    }else{
        cout<<"eres menor de edad"<<endl;
    }
    return 0;
}
