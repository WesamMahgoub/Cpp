#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size()-1;i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    cout << s;
    return 0;
}
