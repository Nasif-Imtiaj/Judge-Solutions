#include<bits/stdc++.h>
using namespace std;
struct box{
string s;
}box[1220];
int main()
{
    int a,b,c,d,e,k,i,j,lenmulti,lenup,lens,lenadd,carrymutli=0,carryadd=0;
     int ans=0;
    string multi="1",s,update,store,add,addzero;

    stringstream change;
    for(k=1;k<=1000;k++)
    {
        change.clear();
        s.clear();
        change<<k;
        change>>s;
        lenmulti=multi.length();
        lens=s.length();

        for(i=lens-1;i>=0;i--)
        {
            for(j=lenmulti-1;j>=0;j--)
            {
                c=s[i]-48;
                d=multi[j]-48;
                e=c*d+carrymutli;
                carrymutli=0;
                if(e>9)
                {
                    carrymutli=e/10;
                    e=e%10;
                }
                update+=e+48;
            }
            if(carrymutli!=0){
                update+=carrymutli+48;
            }
            carrymutli=0;
            reverse(update.begin(),update.end());
            if(i==lens-1)
            {
                add=update;
                update.clear();
            }
            else{
                addzero+=48;
             update+=addzero;
             lenup=update.length();
             lenadd=add.length();
             lenup--;
             lenadd--;
             b=0;
             c=0;
             while(lenadd>-1 || lenup>-1)
             {
                 if(lenadd>-1)
                 b=add[lenadd]-48;
                 if(lenup>-1)
                 c=update[lenup]-48;
                 d=b+c+carryadd;
                 carryadd=0;
                 if(d>9)
                 {
                     carryadd=d/10;
                     d%=10;
                 }
                 b=0;
                 c=0;
                 store+=d+48;
                 lenadd--;
                 lenup--;
             }
             if(carryadd!=0){
                store+=carryadd+48;
             }
             reverse(store.begin(),store.end());
             add=store;
             store.clear();
             update.clear();
             carryadd=0;
            }
        }
        multi=add;
        box[k].s=multi;
        carryadd=0;
        carrymutli=0;
        store.clear();
        add.clear();
        update.clear();
        addzero.clear();
    }
    while(cin>>a){
         if(a==0){
            cout<<"0!"<<endl;
            cout<<"1"<<endl;
         }
        else{
        cout<<a<<"!"<<endl;
        cout<<box[a].s<<endl;
        }
    }
    return 0;
}
