#include <iostream>
#include<math.h>
int main()
{
    int n;
    std::cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0)
    {
        int lastdigit= n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln)
    {
        std::cout<<"Arm strong number";
    }
    else
    {
        std::cout<<"not arm strong number";
    }
}