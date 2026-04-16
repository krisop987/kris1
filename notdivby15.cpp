#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter num: ";
cin>>a;
if((a%5==0 || a%3==0) and (a%15!=0)){
    cout<<"the num is div by5 and 3 but not 15";
}
else{
    cout<<"not she is ";
}
}