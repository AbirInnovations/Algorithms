#include<bits/stdc++.h>
using namespace std;

int main(){

    srand(time(0));

    freopen("NumberGenetateForMid.txt","w",stdout);
    for(int i=0;i<100000;i++){
        cout<<(rand()%100000+1)<<endl;
    }



return 0;
}
