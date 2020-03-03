#include <bits/stdc++.h>
using namespace std;
string twoStrings(string s1, string s2)
{
    int value=0;
    int l1=s1.size();
    int l2=s2.size();
    if(l1>l2)
    {
    for(int i=0;i<l1-1;i++)
    {
        if(s1[i]=='\0')
            continue;
        else
        {
        for(int j=i+1;j<l1;j++)
        {
            if(s1[i]==s1[j])
            {
                s1[j]='\0';
            }
            else continue;
        }
        }
    }
    for(int i=0;i<l1;i++)
    {
        if(s1[i]=='\0')
            continue;
        else
        {
        for(int j=0;j<l2;j++)
        {
          if(s1[i]!=s2[j])
              continue;
            else 
            {
              value++;
              break;
            }
        }
       }
    }
    }
    else
    {
        for(int i=0;i<l2-1;i++)
        {
            if(s2[i]=='\0')
                continue;
            else
            {
            for(int j=i+1;j<l2;j++)
            {
                if(s2[i]==s2[j])
                {
                    s2[j]='\0';
                }
                else continue; 
            }
            }
        }
        for(int i=0;i<l2;i++)
        {
            if(s2[i]=='\0')
                continue;
            else
            {
            for(int j=0;j<l1;j++)
            {
                
                if(s2[i]!=s1[j])
                    continue;
                else
                {
                    value++;
                    break;
                 }
            }
        }
    }
    }
    if(value)
        return "YES";
     else
         return "NO";
}
int main()
{
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}
