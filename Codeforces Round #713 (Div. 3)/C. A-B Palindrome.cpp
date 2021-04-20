#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >>t;

    for(ll i=0; i<t; i++)
    {
        ll a,b;
        string s;
        ll freeSpace = 0;
        cin >>a >>b;
        cin >>s;
        ll length = s.size();

        if(a==1 && b==0)
        {
            if(s[0]=='1')
                cout << -1 << endl;

            else
                cout << 0 << endl;
        }
        else if(a==0 && b==1)
        {
            if(s[0]=='0')
                cout << -1 << endl;

            else
                cout << 1 << endl;
        }
        else if(a%2 != 0 && b%2 !=0)
            cout << -1 << endl;

        else
        {

            for(ll j=0; j<s.size(); j++)
            {
                if(s[j] == '?')
                    freeSpace++;

                else if(s[j]=='0')

                    a--;
                else

                    b--;
            }


            if(a>= 0 && b>=0)
            {
                int flag = 0;
                for(ll j=0; j<=length/2; j++)
                {
                    if(s[j]=='?' && s[length-j-1] =='?')

                        continue;

                    else if(s[j] == '?' || s[length-j-1] == '?')
                    {
                        if(s[j]=='?')
                        {
                            if(s[length-j-1] == '0' && a!=0 )
                            {
                                s[j]='0';
                                a--;
                            }
                            else if(s[length-j-1]=='1' && b!=0)
                            {
                                s[j]='1';
                                b--;
                            }
                            else
                            {
                                flag = 1;
                                break;
                            }
                        }
                        else
                        {
                            if(s[j] == '0' && a!=0 )
                            {
                                s[length-j-1]='0';
                                a--;
                            }
                            else if(s[j]=='1' && b!=0)
                            {
                                s[length-j-1]='1';
                                b--;
                            }
                            else
                            {
                                flag = 1;
                                break;
                            }
                        }
                    }
                    else if(s[j]!=s[length-j-1])
                    {
                        flag=1;
                        break;
                    }
                }

//                cout << s <<endl;
                /////// second for loop

                for(ll j=0; j<=length/2; j++)
                {
                    if(j == length-j-1)
                    {
                        if(s[j]=='?')
                        {
                            if(a>0)
                            {
                                s[j]='0';
                                a--;
                            }
                            else if(b>0)
                            {
                                s[j]='1';
                                b--;
                            }
                            else
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(s[j]=='?' && s[length-j-1] =='?')
                    {
                        if(a>1)
                        {
                            s[j]='0';
                            s[length-j-1]='0';
                            a -=2;
                        }
                        else if(b>1)
                        {
                            s[j]='1';
                            s[length-j-1]='1';
                            b -=2;
                        }
                        else
                        {
                            flag=1;
                            break;
                        }
                    }





                }

                if(flag)
                    cout << -1 <<endl;

                else
                    cout << s <<endl;

            }
            else
                cout << -1 <<endl;


        }

    }


    return 0;
}





