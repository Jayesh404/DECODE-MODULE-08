# include <iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;
    int x=(int)ch;
    if ((x>=65 && x<=90)||(x>=97 && x<=122))
    {
        cout<<"Aplhabet";
    }
    else if(x>=45 && x<=57) cout<<"Digits";
    else cout<<"Special characters";
    
    return 0;
}