// //method1///////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter percentge: ";
//     cin>>a;
//     if(a>=81 and a<=100){
//         cout<<"very good";
//     }
//     if(a>=61 and a<=80){
//         cout<<"good";
//     }
//     if(a>=41 and a<=60){
//         cout<<"avg ";
//     }
//     if(a<=40){
//         cout<<"fail";
//     }
// }
//method2////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter percentge: ";
    cin>>a;
    if(a>=81 and a<=100){
        cout<<"very good";
    }
  else if(a>=61){
        cout<<"good";
    }
  else if(a>=41){
        cout<<"avg ";
    }
 else{
        cout<<"fail";
    }
}