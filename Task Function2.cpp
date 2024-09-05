#include<bits/stdc++.h>
using namespace std;



int * printList(int *x,int s)
{
    int *p=(int *)malloc(s*sizeof(int));
    //int *p = new int[s];

    for(int i=0; i<s; i++)
    {
        p[i]=x[i]*x[i];
    }

    return p;

}


int main()
{

    int a[]= {10,20,30,40};

    int *m= printList(a,4);

    for(int i=0; i<4; i++)
    {
        cout<<m[i]<<" ";
    }


    return 0;
}
