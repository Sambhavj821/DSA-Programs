#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    int lastdigit;
    while(n>0)
    {
        lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
    cout<<rev;
}