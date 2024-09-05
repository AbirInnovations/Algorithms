#include<bits/stdc++.h>
using namespace std;


int main(){

    srand(time(0));

   freopen("outfloat.txt","w",stdout);
    for(int i=0;i<100;i++){
       cout<<((rand()%100+1)/100.0)<<endl;
    }
    //printList(a,n);

return 0;
}

