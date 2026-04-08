#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 0;
    int count = 0;
    if(num == 0){
        cout<<"1"<<endl;
        return 0;
    }
    while(num!=0){
        count++;
        num = num/10;
    }
    cout<<count;
    return 0;
}