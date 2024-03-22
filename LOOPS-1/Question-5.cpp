# include <iostream>
# include <cmath>
using namespace std;

int main(){

    // Display this GP - 3,12,48,.. upto ‘n’ terms
    int n;
    cin>>n;

    for(int i=3;i<=3*pow(4,n-1);i*=4) cout<<i<<endl;

    return 0;
}