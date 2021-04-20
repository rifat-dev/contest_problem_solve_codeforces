#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{

    for(int k=0; k<n; k++)
        cout << arr[k]<<" ";
    cout << "" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,k;
        cin >> n >>k;

        int arr[110];
        for(int j=0; j<n; j++)
            arr[j] = j+1;

        if(k==0)
        {
          print(arr, n);
        }else if(n%2==0 && n/2<=k){

          cout<< -1 << endl;
        }else if(n/2 < k){
            cout << -1 << endl;
        }else{

            for(int j=1; j<n-1; j++){
                  if(arr[j]>arr[j-1] && arr[j]<arr[j+1]){
//                    cout << j << endl;
                      swap(arr[j],arr[j+1]);
                      k--;
                      if(k==0){
                        break;
                      }
                  }
            }

            print(arr,n);

        }

    }

    return 0;
}

