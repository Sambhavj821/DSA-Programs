#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"Enter a number n1 = ";
    cin>>n1;
    cout<<"Enter a number n2 = ";
    cin>>n2;

    char op;
    cout<<"Enter a operator = ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<"Final Output = ";
        cout<<n1+n2<<endl;
        break;

        case '-':
        cout<<"Final Output = ";
        cout<<n1-n2<<endl;
        break;

        case '*':
        cout<<"Final Output = ";
        cout<<n1*n2<<endl;
        break;

        case '/':
        cout<<"Final Output = ";
        cout<<n1/n2<<endl;
        break;

        default:
        cout<<"Enter another operator";
        break;
    }
}