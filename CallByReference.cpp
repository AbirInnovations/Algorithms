#include<bits/stdc++.h>
using namespace std;

void Swap(int *x, int *y){

    int temp=*x;
   *x=*y;
   *y=temp;

}

void printArray(int m[], int s){

    for(int i=0;i<s;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int A[],int n){

for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
        if(A[i]>A[i+1]) Swap(&A[i],&A[i+1]);
    }

}
}

int main(){

    int a[]={5,4,7,9,2,1};
    printArray(a,6);
    bubbleSort(a,6);
    printArray(a,6);

return 0;
}
