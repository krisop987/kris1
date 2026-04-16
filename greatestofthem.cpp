// #include<iostream>
// using namespace std;
// int main(){
// int a,b,c;
// cout<<"enter a: ";
// cin>>a;
// cout<<"enter b: ";
// cin>>b;
// cout<<"enter c: ";
// cin>>c;
// if(a>b  and a>c){
//     cout<<"the greatest number is: "<<a;
// }
//     if(b>c and b>a){
//         cout<<"the greatest number is: "<<b;

//     }
//     if(c>a and c>b){
//         cout<<"the greatest number is: "<<c;
//     }
// }

//another method////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter a: ";
cin>>a;
cout<<"enter b: ";
cin>>b;
cout<<"enter c: ";
cin>>c;
if(a>b and a>c){
    cout<<"the greatest number is: "<<a;
}
 else if(b>c and b>a){
        cout<<"the greatest number is: "<<b;
 }
 else{
        cout<<"the greatest number is: "<<c;
 }
}