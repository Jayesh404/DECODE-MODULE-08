# include <iostream>
using namespace std;

int main(){

    
    // Write a program to print all the ASCII values and their equivalent 
    // characters of 26 alphabets using a while loop

    int i=1;
    while (i<=26)
    {
        int x=i+64;
        char ch= (char)x;
        cout<<ch<<endl;
        i++;
    }
    

    return 0;
}