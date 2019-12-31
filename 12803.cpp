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
int main()
{
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<double>numbers;
        stack<int>operations;
        string s,x;
        getline(cin,s);
        stringstream ss;
        double num;
        ss<<s;
        while(ss>>x)
        {
            if(x[0]>='0' && x[0]<='9')
            {
                stringstream xx;
                xx<<x;
                xx>>num;
                numbers.push(num);
            }
            else if(x[0]=='+')
            {
                if(x.length()>1)
                {
                    stringstream xx;
                    xx<<x;
                    xx>>num;
                    numbers.push(num);
                }
                else
                    operations.push(1);
            }
            else if(x[0]=='-')
            {
                if(x.length()>1)
                {
                    stringstream xx;
                    xx<<x;
                    xx>>num;
                    numbers.push(num);
                }
                else
                    operations.push(2);

            }
            else if(x[0]=='/')
            {
                if(x.length()>1)
                {
                    stringstream xx;
                    xx<<x;
                    xx>>num;
                    numbers.push(num);
                }
                else
                    operations.push(3);
            }
            else if(x[0]=='*')
            {
                if(x.length()>1)
                {
                    stringstream xx;
                    xx<<x;
                    xx>>num;
                    numbers.push(num);
                }
                else
                    operations.push(4);
            }
            else if(x[0]==')')
            {
                double a,b,d;
                a=numbers.top();
                numbers.pop();
                b=numbers.top();
                numbers.pop();
                int c=operations.top();
                operations.pop();
                if(c==1)
                    d=a+b;
                else if(c==2)
                    d=b-a;
                else if(c==3)
                    d=b/a;
                else
                    d=a*b;
                numbers.push(d);
            }
        }
        cout<<fixed<<setprecision(2)<<numbers.top()<<endl;
    }
    return 0;
}
