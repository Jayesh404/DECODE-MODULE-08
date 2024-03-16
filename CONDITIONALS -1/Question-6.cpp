# include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter marks of A B C respectively : "<<endl;
    cin>>a>>b>>c;
    cout<<"Least marks scored by student : "<<endl;
    if (a<b && a<c) cout<<"A";
    else if(b<c && b<a) cout<<"B";
    else cout<<"C"; 
    
    return 0;
}