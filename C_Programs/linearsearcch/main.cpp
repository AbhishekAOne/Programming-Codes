#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()

{
    int arr[3][3],rows,columns;

    cout<<"enter no of rows";
    cin>>rows;

    cout<<"enter no of columns";
    cin>>columns;

    for(int i=0;i<rows;i++)

    for(int j=0;j<columns;j++)

    cin>>arr[i][j];



for(int i=0;i<rows;i++)

    for(int j=0;j<columns;j++)

    cout<<arr[i][j];

    getch();

}
