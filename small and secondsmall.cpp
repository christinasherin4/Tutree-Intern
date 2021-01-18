// find the smallest and second smallest element
#include <bits/stdc++.h>
using namespace std;
void small(int arr[], int arraysize)
{
    int i, frst,scnd;

    if (arraysize < 2)
    {
        cout<<" Invalid Input ";
        return;
    }

    frst = scnd = INT_MAX;
    for (i = 0; i < arraysize ; i++)
    {
        //find whether the arr[i] is less than the frst value
        //if true assign frst with arr[i]
        if (arr[i] < frst)
        {
            scnd = frst;
            frst = arr[i];
        }

     //if the value lies between frst and scnd,assign scnd to arr[i]
        else if (arr[i] <scnd && arr[i] != frst)
            scnd = arr[i];
    }
    //if condition fails check whether scnd is eual to int_max
    if (scnd == INT_MAX)
        cout << "There is no second smallest element\n";
    else
        cout << "The smallest element is " << frst << " and second "
            "Smallest element is " << scnd << endl;
}

/* Driver code */
int main()
{
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    small(arr, n);

}
