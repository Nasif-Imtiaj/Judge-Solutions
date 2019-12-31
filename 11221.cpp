#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(h) scanf("%d",&h);
#define sl(h) scanf("%ld",&h);
#define sll(h) scanf("%lld",&h);
#define co(h)  cout<<h<<endl;
#define ci(h)  cin>>h;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
vector<string>mat;
int main()
{
//freopen("output.txt", "w", stdout);

    int len,i,j=0,a,b,c;

    string s,one_right,one_bottom,a_left,a_top,temp;

    cin>>c;
    getchar();
    for(b=1; b<=c; b++)
    {
        one_right.clear();
        one_bottom.clear();
        a_left.clear();
        a_top.clear();
        temp.clear();
        mat.clear();
        j=0;
        getline(cin,s);
        printf("Case #%d:\n",b);
        for(i=0; i<s.length(); i++)
            if(s[i]>='a' && s[i]<='z')
                temp+=s[i];
        s=temp;
        len=s.length();
        a=sqrt(len);
        if(a*a==len)
        {
            ///one_right
            one_right=temp;
            temp.clear();
            j=0;
            for(i=0; i<=len; i++)
            {
                if(j==a)
                {
                    mat.push_back(temp);
                    temp.clear();
                    j=0;
                }
                temp+=s[i];
                j++;
            }
            ///one down

            for(i=0; i<a; i++)
            {
                for(j=0; j<a; j++)
                {
                    one_bottom+=mat[j][i];
                }
            }

            ///a_left

            for(i=a-1; i>=0; i--)
            {
                for(j=a-1; j>=0; j--)
                {
                    a_left+=mat[i][j];
                }
            }

            ///a_top
            for(i=a-1; i>=0; i--)
            {
                for(j=a-1; j>=0; j--)
                {
                    a_top+=mat[j][i];
                }
            }
            if(one_right==one_bottom && one_right==a_left && one_right== a_top && one_bottom==a_left && one_bottom==a_top && a_left==a_top)
                cout<<a<<endl;
            else
                printf("No magic :(\n");

        }
        else
        {
            printf("No magic :(\n");
        }
    }
    return 0;
}
