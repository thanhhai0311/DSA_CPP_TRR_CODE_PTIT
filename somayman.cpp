#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            int a;
            cin >> a;
            if(a%100==86) cout << "1" << endl;
            else cout << "0" << endl;
    }
    return 0;
}
