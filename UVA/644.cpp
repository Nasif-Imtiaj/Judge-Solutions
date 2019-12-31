#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
vector<string>store;
int main()
{
   // freopen("output.txt", "w", stdout);
    int i,j,k,a,len,len2,flg=0,check=0,m=1,small;
    string s;
    while(cin>>s)
    {
        if(s=="9")
        {
            for(i=0; i<store.size(); i++)
            {
                len=store[i].length();
                for(j=i+1; j<store.size(); j++)
                {
                    check=0;
                    len2=store[j].length();

                        small=min(len2,len);
                        for(k=0; k<small; k++)
                        {
                            if(store[i][k]==store[j][k])
                                check++;
                        }

                    if(check==small)
                    {
                        flg=1;
                        break;
                    }
                }
                if(flg==1)
                    break;
            }
            if(flg==1)
                printf("Set %d is not immediately decodable\n",m);
            else
            {
                printf("Set %d is immediately decodable\n",m);
            }
            m++;
            flg=0;
            store.clear();
            check=0;        }
        else
        {
            store.push_back(s);
        }
    }
    return 0;
}
