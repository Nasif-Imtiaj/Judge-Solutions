#include<bits/stdc++.h>
using namespace std;
vector<string>hi;
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,i,len,note=1;
    cin>>a;
    getchar();
    while(a--)
    {
        string s,s1,temp,m1;
        getline(cin,s);
        getline(cin,s1);
        len=s.length();
        for(i=0; i<=len; i++)
        {
            if(s[i]=='<' && note==1)
            {
                note--;
                continue;
            }
            if(s[i]=='<' && note!=1 || s[i]=='>' && note!=1 || i==len)
            {
                hi.push_back(m1);
                m1.clear();
                continue;
            }
            if(note==1)
                temp+=s[i];

            if(note!=1)
            {
                m1+=s[i];
            }
        }
        temp+=hi[0]+hi[1]+hi[2]+hi[3];
        s=temp;
        temp.clear();
        len=s1.length();
        for(i=0; i<len; i++)
        {
            if(s1[i]=='.')
                break;
            temp+=s1[i];
        }
        temp+=hi[2]+hi[1]+hi[0]+hi[3];
        s1=temp;
        temp.clear();
        hi.clear();
        note=1;
        cout<<s<<endl;
        cout<<s1<<endl;
    }
    return 0;
}
