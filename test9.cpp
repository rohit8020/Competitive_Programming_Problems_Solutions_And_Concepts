#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.front() = 40; //assignment is allowed
    myvector.front() += myvector.back();
    cout << myvector.front() << endl;

    cout << "\n========================\n";
    int a[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    sort(a, a + 5, greater<int>());
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n========================\n";

    int arr[5] = {4, 5, 1, 0, 1};
    sort(arr, arr + 5);
    cout << lower_bound(arr, arr + 5, 3) - arr << endl;
    cout << "\n========================\n";
    vector<int> v = {20, 40, 30, 10, 50, 30};
    sort(v.begin(), v.end());
    cout << upper_bound(v.begin(), v.end(), 30) - v.begin() << endl;
    cout << "\n========================\n";

    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(7);
    s.insert(2);
    s.insert(12);
    s.insert(10);
    auto it = s.lower_bound(15);
    cout << *(--it) << endl;
    
    return 0;
}