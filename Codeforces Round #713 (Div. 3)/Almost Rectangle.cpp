#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;

    for(int i= 0; i<t; i++)
    {

        char a[410][410];
        int n;
        cin >>n;

        int row = n;
        int col = n;

        int istRow = 0;
        int istCol = 0;
        int secRow = 0;
        int secCol = 0;
        int flag = 0;

        for(int j=0; j<row; j++)
        {
            for(int k=0; k<col; k++)
            {
                char c;
                cin >> c;
                a[j][k]=c;

                if(c=='*'){
                   if(flag==0){
                      istRow = j;
                      istCol= k;
                      flag = 1;
                   }else{
                       secRow=j;
                       secCol=k;
                   }
                }
            }
        }



         if(istCol==secCol && istCol != n-1){
            a[istRow][istCol+1] = '*';
            a[secRow][secCol+1] = '*';
        }else if(istCol==secCol && istCol == n-1 ){
            a[istRow][istCol-1] = '*';
            a[secRow][secCol-1] = '*';
        }else if(istRow==secRow && istRow !=n-1 ){
            a[istRow+1][istCol] = '*';
            a[secRow+1][secCol] = '*';
        }else if(istRow==secRow && istRow==n-1 ){
            a[istRow-1][istCol] = '*';
            a[secRow-1][secCol] = '*';
        }else{
           a[istRow][secCol] = '*';
            a[secRow][istCol] = '*';
        }



        for(int j=0; j<row; j++)
        {
            for(int k=0; k<col; k++)
                cout << a[j][k] ;
            cout << '\n';
        }


    }

    return 0;
}

