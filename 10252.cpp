#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
   // freopen("output.txt", "w", stdout);
    int one[50],two[50],i,len1,len2,low;
    string s1,s2,ans;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        fill(one,one+40,0);
        fill(two,two+40,0);
        ans.clear();
        len1=s1.length();
        len2=s2.length();
        for(i=0; i<len1; i++)
        {
            one[s1[i]-97]++;
        }
        for(i=0; i<len2; i++)
        {
            two[s2[i]-97]++;
        }
        for(i=0; i<30; i++)
        {
            if(one[i]>0 && two[i]>0)
            {
                low=min(one[i],two[i]);
                while(low--){
                    ans+=97+i;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
