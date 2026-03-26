//print name n times using recursion
#include<bits/stdc++.h>
using namespace std;
void printname(string name,int n){
    if(n==0){
        return;
    }
    cout<<name<<endl;
    printname(name,n-1);
}
int main(){
    string name;
    int n;
    cout<<"Enter name: ";
    cin>>name;
    cin>>n;
    printname(name,n);
    return 0;
}