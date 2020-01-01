#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,z=0,l=0,d;
    string s,s1,s2,s3;
    cin>>s>>s1;
    a=s.length();
    b=s1.length();
    if(a<b)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        d=b;
        s2=s1;
        for(i=0; i<a; i++)
        {
            for(j=0;j<b; j++)
            {
                if(s[i]==s1[j])
                {
                    s3+=s[i];
                    s1.erase(s1.begin()+j);
                    b--;
                    break;

                }
            }
            if(b==0){
                break;
            }
        }
        c=s3.length();
        if(c<d)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0; i<c; i++)
            {
                if(s2[i]!=s3[i])
                {
                    z++;
                }
                if(z>2){
                    break;
                }
            }
            if(z==2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
