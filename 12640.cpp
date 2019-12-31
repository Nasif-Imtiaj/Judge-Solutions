#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int arr[1000000],pos;
int kadane(int sz)
{
    int max_so_far=arr[0];
    int max_ending_here=0;
    int st=0,en=0,point=0;
    for(int i=0; i<sz; i++)
    {
        max_ending_here=max_ending_here+arr[i];
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
            st=point,en=i;
        }
        if(max_ending_here<0)
        {
            max_ending_here=0;
            point=i+1;
        }
    }
    return max(max_so_far,0);
}
int main()
{
//freopen("output.txt", "w", stdout);
    string s;
    while(getline(cin,s)){
        int num;
        pos=0;
        stringstream ss;
        ss<<s;
        while(ss>>num)
            arr[pos++]=num;
        printf("%d\n",kadane(pos));
    }

    return 0;
}

