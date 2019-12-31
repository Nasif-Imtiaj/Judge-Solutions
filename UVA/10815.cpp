#include<bits/stdc++.h>
using namespace std;
set<string>words;
set<string>::iterator it;
int main()
{
    //freopen("output.txt", "w", stdout);
    int i,j,len;
    string s,temp;
    while(getline(cin,s))
    {
        if(s=="stop")
            break;
        len=s.length();
        for(i=0; i<=len; i++)
        {
            if(!(s[i]>='A' && s[i]<='Z') && !(s[i]>='a' && s[i]<='z') || i==len)
            {
                if(temp.empty())
                    continue;
                transform(temp.begin(),temp.end(),temp.begin(),::tolower);
                words.insert(temp);
                temp.clear();
            }
            else
                temp+=s[i];
        }
    }
    for(it = words.begin(); it != words.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
