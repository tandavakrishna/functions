#include<bits/stdc++.h>
 using namespace std;
 string reverse(string str,int l,int r)
{
    if(l>=r)
    {
        return "palindrome";
    }
    if(l<=r)
    {
        if(str[l]==str[r])
        return reverse(str,l+1,r-1);
        else
        return "not palindrom";
    }
    
}

int main()
{
    
    cout<<"enter the total number of elements in array"<<endl;
    string s;
    cin>>s;
    int n=s.length();
    cout<<reverse(s,0,n-1);

}
