#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string ch;
    int t, i, x=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>ch;
        if(ch[1]=='+')
        {
            x++;
        }
        else
            x--;
    }
    cout<<x<<endl;
    getch();
}
