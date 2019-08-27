#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[100],search;
    cout<<"Enter 7 values in array\n";
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
 cout<<"which element you want to search ";
 cin>>search;
 for(int i=0;i<7;i++)
    {
        if(arr[i]==search)
            cout<<"position is"<<i;
    }

    getch();
}
