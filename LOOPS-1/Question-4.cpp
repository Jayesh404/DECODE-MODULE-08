# include <iostream>
using namespace std;

int main(){

    // Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
    int n;
    cin>>n;

    for(int i=4;i<=3*n+1;i+=3) cout<<i<<endl;

    return 0;
}