# include <iostream>
using namespace std;

int main(){

    int length,breadth;
    cin>>length>>breadth;
    if((length*breadth)>(2*(length+breadth))) cout<<"Yes";
    else cout<<"No";
    return 0;
}