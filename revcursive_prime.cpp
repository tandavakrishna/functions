#include<bits/stdc++.h>
using namespace std;

int prime(int x,int it)
{
    
    
    if(it<sqrt(x+1))
    {
        if(x%it==0)
        {
            return 0;
        }
        return prime(x,it+1);
    }

    
    else if (it>=sqrt(x+1))
    {
        return 1;
    }
}

int main()
{
    int n;
    cin>>n;
    int it=2;
    if(prime(n,it))
    cout<<"prime \n";
    else
    cout<<"not prime";
}
