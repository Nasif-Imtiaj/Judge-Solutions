#include<bits/stdc++.h>
using namespace std;
int ans=100;
void bc(string s,int a)
{
    if(s.length<ans)
    {
        ans=s.length();
    }
    int i,z=0;
    string temp;
    for(i=a; i<s.length(); i++)
    {
        bc(s,0);
    }

}
int main()
{
    int i,a,z=0;

    string s,temp;

    cin>>s;

    bc(s,0);









    return 0;
}
