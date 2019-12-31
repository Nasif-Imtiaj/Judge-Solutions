#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
vector<string>result;
int main()
{
//freopen("output.txt", "w", stdout);
    int i,CP=0,VP=0,track,v=0,c=0,a,b,len,j,OL=0,EL=0;
    string con,voe,ans,odd,even;
    con="JSBKTCLDMVNWFXGPYHQZR";
    voe="AUEOI";
    for(i=0; i<211; i++)
    {
        if(i%2==0)
        {
            ans+=voe[VP];
            v++;
            EL=0;
            OL=0;
            even.clear();
            odd.clear();
            len=ans.length();
            for(j=0;j<len;j++){
                if(j%2==0){
                    even+=ans[j];
                }
                else
                    odd+=ans[j];
            }
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            for(j=0;j<len;j++){
                if(j%2==0){
                    ans[j]=even[EL];
                    EL++;
                }
                else{
                    ans[j]=odd[OL];
                    OL++;
                }
            }

            result.push_back(ans);
        }
        else
        {
            ans+=con[CP];
            EL=0;
            OL=0;
            even.clear();
            odd.clear();
            len=ans.length();
            for(j=0;j<len;j++){
                if(j%2==0){
                    even+=ans[j];
                }
                else
                    odd+=ans[j];
            }
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            for(j=0;j<len;j++){
                if(j%2==0){
                    ans[j]=even[EL];
                    EL++;
                }
                else{
                    ans[j]=odd[OL];
                    OL++;
                }
            }
            result.push_back(ans);
            c++;
        }
        if(c==5)
        {
            c=0;
            CP++;
        }
        if(v==21)
        {
            v=0;
            VP++;
        }
    }
   cin>>a;
   for(i=1;i<=a;i++){
    cin>>b;
    printf("Case %d: ",i);
    cout<<result[b-1]<<endl;
   }

    return 0;
}
