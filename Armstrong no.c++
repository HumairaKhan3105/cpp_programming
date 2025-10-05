#include <iostream>
#include <cmath> 
using namespace std;

int main(){
int n,sum=0,temp,rem;
cout<<"enter the no : ";
cin>>n;
temp = n;
while(temp!=0){
    rem = temp%10;
    sum+=pow(rem,3);
    temp/=10;
}
if(sum==n){
    cout<<"Armstrong no";
}
else{
    cout<<"Not Armstrong no";
}
    return 0;
}
