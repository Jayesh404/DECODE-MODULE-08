# include <iostream>
using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter 1st point : "<<endl;
    cin>>x1>>y1;
    cout<<"Enter 2nd point : "<<endl;
    cin>>x2>>y2;
    cout<<"Enter 3rd point : "<<endl;
    cin>>x3>>y3;
    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);
    if(m1==m2) cout<<"Collinear Points";
    else cout<<"Non colliner";

    return 0;
}