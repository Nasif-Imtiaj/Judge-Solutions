#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
    freopen("output.txt", "w", stdout);
    int x[200],i,high=0;
    string s;
    while(cin>>s)
    {
        fill(x,x+150,0);
        high=0;
        for(i=0; i<s.length(); i++)
        {
            x[s[i]]++;
        }
        cout<<x[98]<<endl;
    }
    return 0;
}
