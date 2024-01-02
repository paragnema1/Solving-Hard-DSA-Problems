// Fibonnaci Series
#include <iostream>
using namespace std;
int main(){
    int a =0;
    int b=1;
    int n;
    cout<<" Enter n : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int addition=a+b;
        a=b;
        b=addition;
        cout<<addition<<" ";
    }
}