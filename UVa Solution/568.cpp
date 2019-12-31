#include<bits/stdc++.h>
using namespace std;
struct box{
string s;
}box[10010];
int main()
{
    long long int a,b,c,d,i,multi=1,len;
    stringstream change;
    string s;
    for(i=1;i<=10000;i++)
    {
        multi*=i;
        while(1){
            a=multi%10;
            if(a!=0){
                break;
            }
            multi=multi/10;
        }
        multi=multi%100000000;
     //   cout<<a<<" "<<i<<endl;
        box[i].s=a+48;
    }
    while(cin>>a){
        if(a<10){
            cout<<"    ";
        }
        else if(a<100){
            cout<<"   ";
        }
        else if(a<1000){
            cout<<"  ";
        }
        else if(a<10000){
            cout<<" ";
        }
        if(a==0){
            cout<<"0 -> 1"<<endl;
        }
        else{
            cout<<a<<" -> "<<box[a].s<<endl;
        }
    }
return 0;
}
