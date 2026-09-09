#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    tuple<string , int , string> student[n];
    for(int i = 0; i < n; i++)
    {
        cin >> get<0>(student[i]) >> get<1>(student[i]) >> get<2>(student[i]);
    }
    for (auto [x, y, z] : student){
        cout << x << " " << y << " " << z << "\n";  
    }   

    return 0;
}