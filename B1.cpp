#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    bool check=false;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        for(int j=0;j<i;j++)
        {
            if(a[j]==a[i]) check=true;
        }
    }
    if(check) cout << "Yes";
    else cout << "No";
    return 0;
}
