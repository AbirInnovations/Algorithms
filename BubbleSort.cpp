#include<bits/stdc++.h>
using namespace std;

void printArray(int m[], int s){

    for(int i=0;i<s;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;

}

void Swap(int *x, int *y){
            int temp=*x;
               *x=*y;
               *y=temp;
}

void bubbleSort(int m[], int n){

    for(int k=0;k<n;k++){
        for(int i=0;i<n-1;i++){
            if(m[i]>m[i+1]){
               Swap(&m[i],&m[i+1]);
            }
    }
    }


}

int main(){

    int a[]={2,7,4,1,5,3};

    printArray(a,6);
    bubbleSort(a,6);
    printArray(a,6);


return 0;
}
