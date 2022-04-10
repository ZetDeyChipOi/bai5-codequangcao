#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[100000];
    int cs=0;
    string dayso;
    getline(cin,dayso);
    long tong=0;
    for (int i=0;i<dayso.size();i++)
    {
        if (dayso[i]>='0' and dayso[i]<='9')
        {
            int so;
            so=dayso[i]-'0';
            tong=tong*10+so;
        }
        else
        {
            a[cs]=tong;
            cs++;
            tong=0;
        }
    }
    a[cs]=tong;
    cs++;
    for (int i=0;i<cs;i++)
        cout<<a[i];
    return 0;
}