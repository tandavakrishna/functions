#include<bits/stdc++.h>

using namespace std;

int dp[10000006];



int fact(int n)
{
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    if(dp[n]!=-1)
    return dp[n];
    else if(n==1)
    return 1;
    else
    return dp[n]=n*fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<" the array is as follows"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }

}
