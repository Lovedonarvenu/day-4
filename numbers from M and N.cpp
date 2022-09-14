#include <bits/stdc++.h>
 
using namespace std;
 
void print_sieve(int& x)
{
    int i,temp,digit;
    bool check;
     
    for(i=0;i<=x;i++)
    {
        if(i<10)
        {
            cout<<i<<" ";
            continue;
        }
        check=1;
        temp=i;
        digit=temp%10;
        temp/=10;
        while(temp)
        {
            if(abs(digit-temp%10)!=1)
            {
                check=0;
                break;
            }
            digit=temp%10;
            temp/=10;
        }
        if(check)
        cout<<i<<" ";
    }
}
int main()
{
    int x=105;
    print_sieve(x);
 
    return 0;
}
