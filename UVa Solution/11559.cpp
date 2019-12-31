#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,z=0,i,j,price,beds,mini=10000000,ans;
    set<int> s;
    set<int>::iterator it;
    while(cin>>a>>b>>c>>d){
        for(i=0; i<c; i++)
        {
            cin>>price;
               for(j=0; j<d; j++)
            {
                cin>>beds;
                if(beds>=a)
                {
                    z=1;
                }
            }
            if(z==1)
            {
                s.insert(price);
            }
            z=0;
        }
        if(s.size()>=1)
        {
            for(it=s.begin(); it!=s.end(); ++it)
            {
                if(*it<mini)
                {
                    mini=*it;
                }
            }
            ans=mini*a;
            if(ans<=b)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<"stay home"<<endl;
            }

        }
        else
        {
            cout<<"stay home"<<endl;
        }
    z=0;
    mini=10000000;
    s.clear();
    }
    return 0;
}
