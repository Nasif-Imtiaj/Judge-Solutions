#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
vector<string>ans;
void permute(string a, int l, int r)
{
    int i;
    if (l == r)
    {
        ans.push_back(a);
    }
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a[l]), (a[i]));
            permute(a, l+1, r);
            swap((a[l]), (a[i])); //backtrack
        }
    }
}
int main()
{
  //  freopen("output.txt", "w", stdout);
    int a,b,c,i,j,freq[200],dif=0;
    string s;
    cin>>b;
    getchar();
    while(b--)
    {
        cin>>s;
        ans.clear();
        fill(freq,freq+199,0);
        dif=0;
        a=s.length();
        for(i=0; i<a; i++)
            freq[s[i]]++;
        for(i=1; i<=150; i++)
            if(freq[i]>0)
                dif++;
        if(dif==1)
            cout<<s<<endl;
        else
        {
            permute(s,0,a-1);
            sort(ans.begin(),ans.end());
            i=0;
            while(i<ans.size()-1)
            {
                if(ans[i]==ans[i+1])
                    ans.erase(ans.begin()+(i+1));
                else
                    i++;
            }
            for(j=0; j<=i; j++)
                cout<<ans[j]<<endl;
        }
        cout<<endl;
        ans.clear();
    }

    return 0;
}
