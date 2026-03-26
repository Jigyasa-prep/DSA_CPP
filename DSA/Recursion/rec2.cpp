//print name n times using recursion
#include<bits/stdc++.h>
using namespace std;
/*void printname(string name,int n){
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
}*/
//print 1 to n
/*void print1ton(int n){
    if(n==0){
        return;    }
        print1ton(n-1);
        cout<<n<< " ";
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print1ton(n);
    return 0;
}*/
//print n to 1
void printnto1(int n){
    if(n==0){
        return;    }
        cout<<n<<"  ";
        printnto1(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    printnto1(n);
    return 0;
}
