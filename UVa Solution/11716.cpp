#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,c,len,i,j;
    string s,temp;
    cin>>c;
    getchar();
    while(c--)
    {
        getline(cin,s);
        len=s.length();
        a=sqrt(len);
        if(a*a==len)
        {
            for(i=0; i<a; i++)
            {
                for(j=i; j<len; j+=a)
                {
                    temp+=s[j];
                }
            }
            cout<<temp<<endl;
        }
        else
        {
            printf("INVALID\n");
        }
        temp.clear();
    }
    return 0;
}
