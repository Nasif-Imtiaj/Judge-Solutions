#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt", "w", stdout);
    long long int a,b,c,d,e,i;
    string s;
    cin>>b;
    while(b--)
    {
        cin>>a;
        if(a<=1)
        {
            cout<<a<<endl;
        }
        else
        {
            for(i=9; i>=2; i--)
            {
                while(a%i==0)
                {
                    a/=i;
                    s+=i+48;
                }
            }
            reverse(s.begin(),s.end());
            if(a==1)
                cout<<s<<endl;
            else
                cout<<"-1"<<endl;
        }
        s.clear();
    }
    return 0;
}
