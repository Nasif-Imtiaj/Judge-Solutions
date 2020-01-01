#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x=0;

    cin>>a;

    string s;

    while(a--){

        cin>>s;

        if(s.compare("Tetrahedron")==0){
            x+=4;
        }
        if(s.compare("Cube")==0){
            x+=6;
        }
        if(s.compare("Octahedron")==0){
            x+=8;
        }
        if(s.compare("Dodecahedron")==0){
            x+=12;
        }
        if(s.compare("Icosahedron")==0){
            x+=20;
        }
    }





cout<<x<<endl;

return 0;





}
