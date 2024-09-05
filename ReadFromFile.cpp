#include<bits/stdc++.h>
using namespace std;

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                Swap(&arr[j], &arr[j+1]);
}

void printList(int p[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<endl;
}

int main()
{

    int n=100000;

    int *m= new int[n];
    freopen("out.txt","r",stdin);

    for(int i=0; i<n; i++)
    {
        cin>>m[i];
    }

   // printList(m,n);

    bubbleSort(m,n);

    freopen("sortedout.txt","w",stdout);
    printList(m,n);


    return 0;
}
