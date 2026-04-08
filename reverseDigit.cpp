#include<bits/stdc++.h>
using namespace std;

int main() {
    int num = 12345;
    int rev = 0;
    while(num){
        int rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    cout<<rev<<endl;
    return 0;
}