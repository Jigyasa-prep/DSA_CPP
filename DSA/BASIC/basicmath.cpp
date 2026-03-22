#include<bits/stdc++.h>
using namespace std;
int main(){
//count all digits of a number
/*int n;
int count=0;
cin>>n;
while(n>0){
    int lastdigit= n % 10;
    count=count+1;
    n=n/10;
}
cout<<count;
*/
//reverse a number
/*int n;
cin>>n;
int rev=0;
while(n!=0){
    int lastdigit=n%10;
    rev=(rev*10)+lastdigit;
    n=n/10;
}
cout<<rev;
*/
//palindrome=reverse is same
/*int n;
cin>>n;
int dup=n;
int rev=0;
while(n!=0){
    int lastdigit=n%10;
    rev=(rev*10)+lastdigit;
    n=n/10;
}
cout<<rev;
if(dup==rev){
    cout<<"palindrome";
}else{
    cout<<"not palindrome";
}
*/
//armstrong=sum of cube of digit is same as num
   /* int n;
    cin >> n;

    int dup = n;
    int sum = 0;

    while (n != 0) {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }

    cout << sum << endl;

    if (sum == dup) {
        cout << "armstrong";
    } else {
        cout << "not armstrong";
    }

    return 0;
    
   */
  //print all divisors 
  /*int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i<<endl;
    }
  }
  */
 /*int n;
 cin>>n;
 vector<int> v;
 for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        v.push_back(i);
    }
    if((n/i)!=i){
        v.push_back(n/i);
    }
 }sort(v.begin(),v.end());
 for(int x:v){
 cout<<x<<" ";
}*/
//prime number
/*int n;
cin>>n;
int count =0;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
        count++;
        if(n/i!=i){
            count++;
        }
    }
}
if(count==2){
    cout<<n<<"is prime";
    cout<<count;
}*/
//GCD
/*int n1,n2;
cin>>n1;
cin>>n2;
for(int i=min(n1,n2);i>=1;i--){
   if(n1%i==0&&n2%i==0){
    cout<<"GCD IS "<<i;
    break;
   }

}*/
//EUCLIDEAN ALGORITHM
//gcd(a,b)=gcd(a-b,b)
/*int a,b;
cin>>a>>b;
int n1=a;
int n2=b;
while(a>0&&b>0){
    if(a>b){
        a=a%b;
    }else{
        b=b%a;
    }
}if(a==0){
    cout<<"gcd of "<<n1<<" and "<<n2<<" :"<<b;
}else{
    cout<<"gcd of "<<n1<<" and "<<n2<<" :"<<a;
}*/
}