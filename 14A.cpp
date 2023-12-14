#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    c=a/b;
    if (a%b==0){
        cout<<0<<endl;
        
    }else{
        cout<<(c+1)*b-a<<endl;
    }
}