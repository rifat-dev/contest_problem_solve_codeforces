#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >>n;

        vector<int> N;

        for(int j=1; j<=n; j++)
        {
            int a;
            cin >> a;
            N.push_back(a);
        }



        if(n==1)
        {
         cout << n << endl;
        }
        else
        {
            for(int j=0; j<n-1; j++)
            {
                if(N[j]!=N[j+1])
                {
                   if(j==0){
                     if(N[j+1]==N[j+2]){
                        cout<<j+1<<endl;
                        break;
                     }else{
                        cout<<j+2<<endl;
                        break;
                     }
                   }else if(j==n-2){
                       cout<<n<<endl;
                       break;
                   }else{
                       cout<<j+2<<endl;
                       break;
                   }
                }
            }
        }
    }

    return 0;
}
