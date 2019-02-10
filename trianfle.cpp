#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cout << "size :" ;
        cin >> n;

        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                if(i > n/2) cout << " *";
                else cout << " $";
            }
                cout << endl;
        }
    }
    return 0;
}

