// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int sp;
// //     cout<<"enter sp: ";
// //     cin>>sp;
// // int cp;
// // cout<<"enter cp: ";
// // cin>>cp;
// // if(cp>sp) {
// //     cout<<"loss";
// // }
// // if(cp<sp) {
// //     cout<<"profit";
// // }
// // if(cp==sp) {
// //     cout<<"no loss no profit";
// // }
// // }

// //METHOD2 and also find values///////////////////////////////////////////////////////////////////

 #include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"enter sp: ";
    cin>>sp;
int cp;
cout<<"enter cp: ";
cin>>cp;
if(cp>sp) {
    cout<<"loss: "<<cp-sp;
}
else if(cp<sp) {
    cout<<"profit: "<<sp-cp;
}
else{
    cout<<"no loss no profit: "<<"0";

}
}
