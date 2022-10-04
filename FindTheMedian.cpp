#include <iostream>

using namespace std;

int main()
{
    int arr[] = {56, 67 ,30 ,79};
    int n = 4;

    sort(arr, arr + n);
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
    cout<<endl;
    if (n % 2 != 0)
    {
       
        {
            cout << arr[n/2] << endl;
        }
    }
    else
    {
        int k = (arr[(n/2)-1] + arr[(n/2)])/2;
        cout << k;
    }
}
