#include<bits/stdc++.h>
using namespace std;
#define T printf("bug\n");
int main()
{
//freopen("output.txt", "w", stdout);
    int a,p=1,i=0;
    while(cin>>a)
    {
        while(p<=a)
        {
            if(i%2==0)
                p*=9;
            else
                p*=2;

            if(p>=a && i%2==0)
            {
                cout<<"Stan wins."<<endl;
                break;
            }
            else if(p>=a && i%2!=0)
            {
                cout<<"Ollie wins."<<endl;
                break;
            }
            i++;
        }
        i=0;
        p=1;
    }
    return 0;
}
