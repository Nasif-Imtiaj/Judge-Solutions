#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
    map<string,int>loved;
    map<string,int>:: iterator it;

    int a,b,i,j;

    string s,s1;

    cin>>a;
    getchar();
    while(a--)
    {
        cin>>s;
        getline(cin,s1);
        loved[s]++;
    }

   for(it=loved.begin();it!=loved.end();++it){
    cout<<it->first<<" "<<it->second<<endl;
   }

    return 0;
}

