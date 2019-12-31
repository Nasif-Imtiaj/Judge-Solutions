#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
struct box
{
    string name;
    int points,games_played,wins,ties,losts,g_dif,g_scored,g_against;
} football[100];
bool comp (char s1, char s2)
{
    return tolower(s1)<tolower(s2);
}
bool compare(box l, box r)
{
    int a,b,i;
    char s[1000];
    char s1[1000];
    a=l.name.length();
    for(i=0; i<a; i++)
    {
        s[i]=l.name[i];
    }
    b=r.name.length();
    for(i=0; i<b; i++)
    {
        s1[i]=r.name[i];
    }
    if(l.points<r.points)
        return 0;
    if(l.points>r.points)
        return 1;

    if(l.wins<r.wins)
        return 0;
    if(l.wins>r.wins)
        return 1;

    if(l.g_dif<r.g_dif)
        return 0;
    if(l.g_dif>r.g_dif)
        return 1;

    if(l.g_scored<r.g_scored)
        return 0;
    if(l.g_scored>r.g_scored)
        return 1;

    if(l.games_played<r.games_played)
        return 1;
    if(l.games_played>r.games_played)
        return 0;
    if(lexicographical_compare(s, s+a, s1, s1+b,comp))
        return 1;
    else
        return 0;
    ///need to add more conditions similar to above for more items
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int i,j,a,b,c,d,len,note=1,score=0,score2=0,next,h;
    string s,s1,name,name2;
    cin>>d;
    getchar();
    while(d--)
    {
        note=1,score=0,score2=0;
        memset(&football, 0, sizeof(football));
        name.clear();
        name2.clear();
        getline(cin,s1);
        cin>>a;
        getchar();
        for(i=0; i<a; i++)
        {
            getline(cin,s);
            football[i].name=s;

        }
        cin>>h;
        getchar();
        for(j=0; j<h; j++)
        {
            getline(cin,s);
            note=1;
            score=0;
            name.clear();
            score2=0;
            name2.clear();
            len=s.length();
            for(i=0; i<len; i++)
            {
                if(s[i]=='@')
                {
                    next=i;
                    break;
                }
                if(s[i]=='#')
                {
                    note--;
                    continue;
                }
                if(note==1)
                    name+=s[i];
                if(note==0)
                {
                    score*=10;
                    score+=s[i]-48;
                }
            }
            note=1;
            for(i=next+1; i<len; i++)
            {
                if(s[i]=='#')
                {
                    note--;
                    continue;
                }
                if(note==0)
                    name2+=s[i];
                if(note==1)
                {
                    score2*=10;
                    score2+=s[i]-48;
                }
            }
            for(i=0; i<a; i++)
            {
                if(football[i].name==name)
                {
                    football[i].games_played++;
                    football[i].g_scored+=score;
                    football[i].g_against+=score2;
                    if(score>score2)
                    {
                        football[i].points+=3;
                        football[i].wins++;
                    }
                    else if(score==score2)
                    {
                        football[i].points++;
                        football[i].ties++;
                    }
                    else
                        football[i].losts++;

                }
                if(football[i].name==name2)
                {
                    football[i].games_played++;
                    football[i].g_scored+=score2;
                    football[i].g_against+=score;
                    if(score2>score)
                    {
                        football[i].points+=3;
                        football[i].wins++;
                    }
                    else if(score==score2)
                    {
                        football[i].points++;
                        football[i].ties++;
                    }
                    else
                        football[i].losts++;
                }
            }
        }

        for(i=0; i<a; i++)
        {
            football[i].g_dif=football[i].g_scored-football[i].g_against;
        }
        sort(football,football+a,compare);
        cout<<s1<<endl;
        for(i=0; i<a; i++)
        {
            cout<<i+1<<") "<<football[i].name<<" "<<football[i].points<<"p, "<<football[i].games_played<<"g ("<<football[i].wins<<"-"<<football[i].ties<<"-"<<football[i].losts<<"), "<<football[i].g_dif<<"gd ("<<football[i].g_scored<<"-"<<football[i].g_against<<")"<<endl;
        }
        if(d>0)
            printf("\n");
    }


    return 0;
}
