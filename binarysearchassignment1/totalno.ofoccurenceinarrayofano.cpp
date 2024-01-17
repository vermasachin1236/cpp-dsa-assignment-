  /* #include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 4, 5};
    int n = 8;
    int x = 4;
    int lo = 0, hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
            lo = mid + 1;
        else if (arr[mid] < x)
            lo = mid + 1;
        else
        {
            hi = mid - 1;
        }
    }
    int a = hi;
    lo = 0;
    hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
            hi = mid - 1;
        else if (arr[mid] < x)
            lo = mid + 1;
        else
        {
            hi = mid - 1;
        }
    }
    int b = lo;
    cout << "total number of occurence: " << a - b + 1;
    return 0;
}*/     
#include<iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 3, 4, 4, 4, 5};
    int n = 8;
    int x = 4;
    int lo = 0, hi = n - 1;

    // Finding the lower bound
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
            hi = mid - 1;
        else if (arr[mid] < x)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    int a = lo;

    lo = 0;
    hi = n - 1;

    // Finding the upper bound
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
            lo = mid + 1;
        else if (arr[mid] < x)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    int b = hi;

    cout << "Total number of occurrences: " << b - a + 1;

    return 0;
}

