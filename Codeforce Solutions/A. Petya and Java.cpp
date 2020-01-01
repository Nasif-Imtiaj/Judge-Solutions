#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i=0;
    long long int checking=0,save=0,note=0;
    int mark=0;
    string s,int_s="2147483648",int_e="2147483647",long_s="9223372036854775808",long_e="9223372036854775807";
    cin>>s;
    if(s[0]=='-')
    {
        note=1;
        s.erase(s.begin()+0);
    }
    a=s.length();
    if(a<=3)
    {
        while(a--)
        {
            save=checking*10;
            checking=(s[i]-48)+save;
            i++;
        }
        if(note==1)
        {
            checking=-checking;
        }
        if(checking>=-128 && checking<=127)
        {
            cout<<"byte"<<endl;
        }
        else
        {
            cout<<"short"<<endl;
        }
    }
    else if(a<=5)
    {
        while(a--)
        {
            save=checking*10;
            checking=(s[i]-48)+save;
            i++;
        }
        if(note==1)
        {
            checking=-checking;
        }
        if(checking>=-32768  && checking<=32767)
        {
            cout<<"short"<<endl;
        }
        else
        {
            cout<<"int"<<endl;
        }
    }
    else if(a<=10)
    {
        if(a<10)
        {
            cout<<"int"<<endl;
        }
        else
        {
            if(note==1)
            {
                for(i=0; i<a; i++)
                {
                    if(s[i]==int_s[i])
                    {
                        continue;
                    }
                    else if(s[i]>int_s[i])
                    {
                        mark=1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                for(i=0; i<a; i++)
                {
                    if(s[i]==int_e[i])
                    {
                        continue;
                    }
                    else if(s[i]>int_e[i])
                    {
                        mark=1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(mark==0)
            {
                cout<<"int"<<endl;
            }
            else
            {
                cout<<"long"<<endl;
            }
        }
    }
    else if(a<=19)
    {
        if(a<19)
        {
            cout<<"long"<<endl;
        }
        else
        {
            if(note==1)
            {
                for(i=0; i<a; i++)
                {
                    if(s[i]==long_s[i])
                    {
                        continue;
                    }
                    else if(s[i]>long_s[i])
                    {
                        mark=1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                for(i=0; i<a; i++)
                {
                    if(s[i]==long_e[i])
                    {
                        continue;
                    }
                    else if(s[i]>long_e[i])
                    {
                        mark=1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(mark==0)
            {
                cout<<"long"<<endl;
            }
            else
            {
                cout<<"BigInteger"<<endl;
            }
        }
    }
    else
    {
        cout<<"BigInteger"<<endl;
    }
    return 0;
}
