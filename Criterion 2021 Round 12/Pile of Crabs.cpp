#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;

    vector<int> h;
    vector<int> x;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >>a;
        h.push_back(a);
    }

    for(int j=0; j<q; j++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }

    for(int i=0; i<q; i++)
    {
        if(h[x[i]-1] != 0)
        {
            if(x[i] == n)
            {
               swap(h[0],h[n-1]);
            }
            else
            {
                for(int j = x[i] ; j<n; j++)
                {
                    if(h[j]!=0)
                        h[j]--;
                }
            }

        }
        else
            cout<< "dead" << endl;

    }

    for(int a:h)
        cout << a << " ";

    return 0;
}


