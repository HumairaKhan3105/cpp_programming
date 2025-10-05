#include <iostream>
#include <cmath> 
using namespace std;

int main(){
int n,i;
cout<<"Enter a no : ";
cin>>n;
if(n<=1){
    cout<<"not a prime no";
}
else{
    for(int i =2;i*i<=n;i++){
    if(n%i==0){
      cout << n << " is not a prime number." << endl;
    }
    return 0;
    }
}
cout << n << " is  a prime number." << endl;
    return 0;
}
