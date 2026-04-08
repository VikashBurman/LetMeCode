#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp = n;
    int rev = 0;
    while(temp){
        int rem = temp%10;
        rev = rev*10+rem;
        temp = temp/10;
    }
    if(n == rev){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}