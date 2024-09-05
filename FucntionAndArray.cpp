#include<bits/stdc++.h>
using namespace std;

#define n 100

void printList(int m[], int n){
    for(int i=0;i<n;i++){
            cout<<m[i]<<" ";
        }

}

int main(){

int a[n];
    //int n;
    //cin>>n;
    //int *a =(int*)malloc(n*sizeof(int));
    //int *a = new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printList(a,n);

return 0;
}
