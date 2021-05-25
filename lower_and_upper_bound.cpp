#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 4, 5, 6};
    int array_length = sizeof(arr) / sizeof(arr[0]);
    int *it = upper_bound(arr, arr + array_length, 4);
    cout << "Index : " << it - arr << endl;

    char a[] = {'a', 'b', 'c'};
    string s(a);
    cout << *(s.begin()) << endl;
    cout << *(s.end()) << endl;

    //separating token from character array

    char str[100] = "Today is rainy day";
    char *ptr = strtok(str, " ");
    cout << ptr << endl;
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }

    return 0;
}