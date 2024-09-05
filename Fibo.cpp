// f(n) = 1 if n<=1
        // f(n-1)+f(n-2)

#include<bits/stdc++.h>
using namespace std;

int fib(int n){

    if(n<=1){

        return 1;
    }

    else{

        return fib(n-1)+fib(n-2);

    }

}

int main(){

cout<<fib(10)<<endl;
return 0;
}

