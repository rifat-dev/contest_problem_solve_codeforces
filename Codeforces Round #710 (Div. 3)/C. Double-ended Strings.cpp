#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        string s1,s2;
        cin >> s1 >> s2;
        int start;
        int maxLength = 0;

        if(s1.size()<s2.size())
            s1.swap(s2);

        for(int j=0; j<s1.size(); j++)
        {
            int flag = 0;
            int curLength = 0;
            for(int k=0, start = 0 ; k<s2.size(); k++)
            {

                if(flag)
                {

                    if(s1[start]==s2[k])
                    {
                        curLength++;
                        start++;
                    }
                    else
                    {
                        if(curLength>maxLength)
                            maxLength = curLength;

                        if(s1[j] == s2[k] )
                            k--;

                        flag = 0;
                        start = 0;
                        curLength = 0;
                    }
                }

                else if(s1[j] == s2[k])
                {
                    curLength++;
                    start = j+1;
                    flag = 1;
                }

            }

            if(curLength > maxLength)
            {
                maxLength = curLength;
                curLength = 0;
            }
            curLength = 0;

        }

        int sumLength = s1.size() + s2.size();
        cout << sumLength - (maxLength*2) << endl ;

    }

}
