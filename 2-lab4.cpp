#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int tong=0;
    int a;
    while(n>0)
    {
    a=n%10;
    tong=tong*10+a;
    n=n/10;
    }
    cout<<tong;
 return 0;
}
