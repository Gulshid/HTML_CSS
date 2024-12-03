#include<iostream>
using namespace std;

int fun(int a,int b)
{
    cout<<"Enter the value for a and b:";
   

    return a+b;
}

main()
{
    int a,b;
    cin>>a>>b;
    cout<<"The add of two value a and b is :"<<fun(a,b);
}