#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter a Character"<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Namaste"<<endl;
        break;

    case 'b':
        cout<<"hello"<<endl;
        break;

    case 'c':
        cout<<"Jai jinendra"<<endl;    
        break;

    default:
        cout<<"I am still learning more!"<<endl;
        break;
    }
}