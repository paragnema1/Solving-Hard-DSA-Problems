// print even and odd function from 1 to n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i&1){
            cout<<i<<" is odd "<<endl;
        }
        else{
            cout<<i<<" is even "<<endl;
        }
    }
}