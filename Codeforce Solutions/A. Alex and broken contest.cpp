#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,w=0;
    string s;
    string s1="Danil";
    string s2="Olya";
    string s3="Slava";
    string s4="Ann";
    string s5="Nikita";
    cin>>s;
    size_t t1=s.find(s1,0);
    while(t1!=string::npos){
        w++;
        t1= s.find(s1,t1+ 1);
    }

    size_t t2=s.find(s2,0);
    while(t2!=string::npos){
        w++;
        t2=s.find(s2,t2+1);
    }
    size_t t3=s.find(s3,0);
    while(t3!=string::npos)
    {
        w++;
        t3=s.find(s3,t3+1);
    }
    size_t t4=s.find(s4,0);
    while(t4!=string::npos){
        w++;
        t4=s.find(s4,t4+1);
    }
    size_t t5=s.find(s5,0);
    while(t5!=string::npos){
            w++;
        t5=s.find(s5,t5+1);
    }
    if(w==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
