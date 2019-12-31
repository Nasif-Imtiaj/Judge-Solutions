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
    string s,young,old;
    int youngday=INT_MAX,youngmonth=INT_MAX,youngyear=INT_MAX,olddate=0,oldmonth=0,oldyear=0,day,month,year;
    while(t--)
    {
        cin>>s>>day>>month>>year;
        if(year<youngyear)
        {
            youngyear=year;
            youngmonth=month;
            youngday=day;
            young=s;
        }
        else if(year==youngyear)
        {
            if(month<youngmonth)
            {
                youngmonth=month;
                youngday=day;
                young=s;
            }
            else if(month==youngmonth)
            {
                if(day<youngday)
                {
                    youngday=day;
                    young=s;
                }
            }
        }
        if(year>oldyear)
        {
            oldyear=year;
            oldmonth=month;
            olddate=day;
            old=s;
        }
        else if(year==oldyear)
        {
            if(month>oldmonth)
            {
                oldmonth=month;
                olddate=day;
                old=s;
            }
            else if(month==oldmonth)
            {
                if(day>olddate)
                {
                    olddate=day;
                    old=s;
                }
            }
        }
    }
    cout<<old<<endl;
    cout<<young<<endl;


    return 0;
}

