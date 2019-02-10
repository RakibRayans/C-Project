#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, b;
    int n, m, l, i, j, k, x1;
    string a[]= {"CSE", "ICT", "BANGLA", "ENGLISH", "STAT", "MANAGEMENT", "PHYSICS", "CHEMISTRY", "MATH"};
    //int c[]={"10", "11", "12"};
    cin>>s;
    int t= s.size();
    int result=0, result1=0;
    if(s[0]=='1')
    {
        cout<<"Honors"<<endl;
        for(i=1; i<=2; i++)
        {
            result = result * 10 + ( s[i] - '0' );
        }
        //cout<<result<<endl;
        int x=result-1;
        int result1=0;
        cout<<"Session:"<<" "<<"20"<<x<<"-"<<"20"<<result<<endl;
        for(i=3; i<=4; i++) //x1++)
        {
            result1=result1*10+(s[i]-'0');
        }
        cout<<"Departhment:"<<" "<<a[result1]<<endl;
        int result2=0;
        for(i=5; i<8; i++)
        {
         result2=result2*10+(s[i]-'0');
        }
        cout<<"Roll Number:"<<" "<<result2<<endl;
    }
    else if(s[0]=='2')
    {
        cout<<"Masters"<<endl;
        for(i=1; i<=2; i++)
        {
            result = result * 10 + ( s[i] - '0' );
        }
        //cout<<result<<endl;
        int x=result-1;
        int result1=0;
        cout<<"Session:"<<" "<<"20"<<x<<"-"<<"20"<<result<<endl;
        for(i=3; i<=4; i++) //x1++)
        {
            result1=result1*10+(s[i]-'0');
        }
        cout<<"Departhment:"<<" "<<a[result1]<<endl;
        int result2=0;
        for(i=5; i<8; i++)
        {
         result2=result2*10+(s[i]-'0');
        }
        cout<<"Roll Number:"<<" "<<result2<<endl;
    }
}
