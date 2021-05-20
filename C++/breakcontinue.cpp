#include<iostream>
using namespace std;
int main()
{
    int PocketMoney=3000;
    for(int i=1;i<=31;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        if(PocketMoney==0)
        {
            break;
        }
        cout<<"Go out today"<<endl;
        PocketMoney=PocketMoney-300;
    }
}