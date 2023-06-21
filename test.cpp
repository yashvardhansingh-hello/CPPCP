#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {2, 33, 3, 22, 7};
    for (auto it : v)
    {
        cout<<it<<' ';
    }
    cout << endl;
    v.insert(v.begin()+2, 3, 8);

    for (auto it : v)
    {
        cout<<it<<' ';
    }
    cout<<endl<<v.size()<<endl;
    v.pop_back();
    cout<<v[v.size()-1];
    return 0;
}