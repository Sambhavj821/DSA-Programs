#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int i,j;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1 || i==row)
            {
                cout<<"*";
            }
            else if(j==1 || j==col)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}