#include<iostream>
using namespace std;

int main()
{
    int w;
    cin>>w;
    int i;


    int flag=0,a,b;
    a=1;
    b=w-a;
    for(i=1;i<w;i++)
    {
        if(a%2==0 && b%2==0){flag=1;}
        a++;
        b=w-a;
    }
    if(flag==1){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}



    return 0;
}
