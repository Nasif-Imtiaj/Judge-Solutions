#include<bits/stdc++.h>
using namespace std;
int main()
{
  //freopen("output.txt", "w", stdout);
    int a,b,c,d,i,j,m,n,change,carryone=0,carryadd=0;
    int lenone,lentwo,lenextra,lenadd;
    string one,two,ans,extra,add,addzero;
    while(cin>>one>>two){
    lenone=one.length();
    lentwo=two.length();
    for(i=lenone-1; i>=0; i--)
    {
        for(j=lentwo-1; j>=0; j--)
        {
            change=(one[i]-48)*(two[j]-48)+carryone;
            carryone=0;
            if(change>9)
            {
                carryone=change/10;
                change%=10;
            }
            extra+=change+48;
        }
        if(carryone!=0)
        {
            extra+=carryone+48;
        }
        reverse(extra.begin(),extra.end());
        if(i==lenone-1)
        {
            add=extra;
        }
        else
        {
            addzero+=48;
            extra+=addzero;
            lenadd=add.length();
            lenextra=extra.length();
            lenadd--;
            lenextra--;
            while(lenadd>-1 || lenextra>-1)
            {
                if(lenadd>-1)
                {
                    a=add[lenadd]-48;
                }
                if(lenextra>-1)
                {
                    b=extra[lenextra]-48;
                }
                c=a+b+carryadd;
                carryadd=0;
                if(c>9)
                {
                    carryadd=c/10;
                    c=c%10;
                }
                ans+=c+48;
                a=0;
                b=0;
                lenadd--;
                lenextra--;
            }
            if(carryadd!=0)
            {
                ans+=carryadd+48;
            }
            reverse(ans.begin(),ans.end());
        }
        if(i!=lenone-1)
        {
            add=ans;
        }
        while(add[0]=='0' && add.size()>1){
            add.erase(add.begin()+0);
        }
        ans.clear();
        a=0;
        b=0;
        c=0;
        extra.clear();
        carryadd=0;
        carryone=0;
    }
    cout<<add<<endl;
    addzero.clear();
    add.clear();
}
    return 0;
}
