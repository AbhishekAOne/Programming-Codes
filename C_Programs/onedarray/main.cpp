#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[100];
    cout<<"Enter 7 values in array\n";
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
 cout<<"your array elements are: ";
 for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }

    getch();
}
