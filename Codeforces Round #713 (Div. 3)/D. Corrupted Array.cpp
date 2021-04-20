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
        cin >> n;


        vector<int> arr;
        for(int j=0; j<n+2; j++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        sort(arr.begin(), arr.end());

        int64_t sum = 0;
        for(int j=0; j<n+1; j++)
            sum += arr[j];

        int flag = 0;

        for(int j=0; j<n+1; j++)
        {
            sum -= arr[j];
            if(sum == arr[n+1])
            {
                arr[j] = -1;
                flag=1;
                break;
            }
            else
                sum += arr[j];
        }

        if(flag)
        {
            for(int j=0; j<n+1; j++)
            {
                if(arr[j] != -1)
                    cout << arr[j] << " ";
            }
            cout << "" << endl;

        }
        else
        {
            sum -= arr[n];

            if(sum == arr[n])
            {
                for(int j=0; j<n; j++)
                {
                    cout << arr[j] << " ";
                }
                cout << "" << endl;

            }
            else
                cout << -1 << endl;
        }
    }

    return 0;
}



