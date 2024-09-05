include<bits/stdc++.h>
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

srand(time(0));

    int a[100];


for(int i=0;i<100;i++){
    a[i]=rand()%100;
}
    printArray(a,100);
    bubbleSort(a,100);
    printArray(a,100);




return 0;
}
