#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long int a,b,c,d,e,floor,floor2,ans,tower,result,i;
   long long int ta,fa,tb,fb;

    cin>>a>>b>>c>>d>>e;

    for(i=0; i<e; i++)
    {
        cin>>ta>>fa>>tb>>fb;

        if(ta==tb)
        {
            ans=abs(fa-fb);
            cout<<ans<<endl;
        }
        else
        {
            tower=abs(ta-tb);

            if(abs(fa-c) < abs(fa-d) )
            {
                floor=abs(fa-c);
                floor2=abs(fb-c);
            }
            else if(abs(fa-c)==abs(fa-d)){
          //  cout<<"HI"<<endl;
                if(abs(fb-c)<abs(fb-d)){
                    floor=abs(fb-c);
                    floor2=abs(fa-c);
                }
                else{
                    floor=abs(fb-d);
                    floor2=abs(fa-d);
                }
            }
            else
            {
                floor=abs(fa-d);
                floor2=abs(fb-d);
            }
            result=floor+floor2+tower;
            cout<<result<<endl;
        }
    }
    return 0;
}
