#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for(int a=0; a<t ; a++)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int i=0;
        int step = 0;
        while(i<n)
        {
            if(s[i] == '*' )
            {
                step++;
                int flag = 0;
                for(int j = n-1 ; j>i ; j--)
                {
                    if(s[j]=='*' && j-i<= k)
                    {
                        i = j;
                        flag = 1;
                        break;
                    }

                }
                if(!flag){
                    i++;
                }
            }else{
                i++;
            }
        }

        cout << step << endl;

    }


    return 0;

}
