#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter side a: ";
cin>>a;
cout<<"enter b: ";
cin>>b;
cout<<"enter c: ";
cin>>c;
if(a+b>c and b+c>a and c+a>b){
    cout<<"yes it is dude";
}
else{
    cout<<"nope";
}
}