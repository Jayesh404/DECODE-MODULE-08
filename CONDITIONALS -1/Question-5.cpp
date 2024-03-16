# include <iostream>
using namespace std;

int main(){

    int x,y,z;
    cout<<"Enter the sides of triangle : "<<endl;
    cin>>x>>y>>z;
    if (x==y && y==z) cout<<"Equlateral triangle";
    else if(x!=y && y!=z) cout<<"Scalene triangle";
    else cout<<"Isoceles triangle";
    
    return 0;
}