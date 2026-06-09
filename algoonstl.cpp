          A L G O    IN     S T L



         ITERATORS AND ITERATING ALGOS             



//every algo me header file algorithm use kar


1. for_each


//sbke uper ek operation karne ke liye


#include <bits/stdc++.h>
using namespace std;


// make any functions
//yaha no. ko multilpe function bana raha hu

void kai(int a) {
    cout <<  4* a << " ";
}

int main() {

//2 ways of declaration

//a.normally without size

vector<int> v = {1, 2, 3, 4, 5};  

//b. by index inserting 

 vector<int>v;     //wrong hai size nahi dala 

 vector<int>v(5); //daal dia
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    v[4]=5;


for_each(v.begin(), v.end(), kai);  //function call kara



2.         find                     



#include <bits/stdc++.h>
using namespace std;

int main() {
  
vector<int> v = {1, 2, 3, 4, 5}; 

    // //likh jo function find karna hai
    int n = 4;
    
    //iterator declare 2 ways hai

    //1

    vector<int>::iterator it = find(v.begin(), v.end(), n); 

    // 2nd method imp

    auto it=find(v.begin(), v.end(), n); 

 //ye function khud dhund lega konsa iterator lagana hai

  (v.begin(),v.end()) range hai
   

    // now condition lga

    if(it != v.end()){
        cout <<"mill gyaaaa"<<" "<< *it << endl; 
    } else {
        cout << "Nahi mila" << endl;
    }

    return 0;
}

//output
//mill gya 4

//if target value nahi mili toh 0 return dega


3.       find_if              


//serches the first element that satisfies predicate
//predicate=condition that can be t/false


#include <bits/stdc++.h>
using namespace std;

// //function bna bool ka for t/f

bool b(int a){
   return a%2==0;
}

int main() {
  
vector<int> v = {1, 92764834, 8, 4, 5};

auto it= find_if(v.begin(),v.end(),b);
 cout<<*it<<endl;
}

// //output

// //92764834 aega
// //output me sbse phela no. aega 
// //according to condition 
// //not ki chota bada jo sbse phele wahi




4.           count()


// //count karta kitne elements

#include <bits/stdc++.h>
using namespace std;
int main() {
vector<int> v = {1,1,3,4,5,6,7,3,2,1,1,1,1,1,1
,1,2,1,2,1,2,1,2,1,2,1, 8, 4, 5};

int n=1;
int p=count(v.begin(),v.end(),n);
cout<<p; 
}

// output= 14




5.     similar count_if 



// //used with functions with specific conditions


#include <bits/stdc++.h>
using namespace std;

//galat code
//as count if only returns bool function

void n(int a){
    if(a>2){
        cout<<a;
    }
    else {
        cout<<a;
    }
}


// //right one

bool n(int a){        // ✅ void → bool
    if(a > 2){
        return true;  // ✅ cout hatao, return karo
    }
    else {
        return false;
    }
}


// //remember t=1,f=0 so ye bhi istemaal kar skta


int main() {
vector<float> v = {1,3,4.8,4,5,'a'};

int ans = count_if(v.begin(),v.end(),n);
cout<<ans;

 //output=5

// //3,4.8,4,5 and a ki ascii value
// //total 5


// }


6.             sort



//ascending order

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {222,3,4,33,22,88,5,5};

    sort(v.begin(),v.end()); 

    for (int anyname: v){
        cout<<anyname<<" ";
    }

//output=3 4 5 5 22 33 88 222 

cout<<endl;

//wht if reverse karne ho??
//simple

reverse(v.begin(),v.end());

  for (int anyname: v){
        cout<<anyname<<" ";
    }

//out=222 88 33 22 5 5 4 3


//remember agar direct sort ke baad kia
// tab aega upper output
//if no sort to normal reverse
//and output will=222 3 4 33 22 88 5 5 


// }

 

7.            rotate



//har element ko utha ke uske 'n' aage rakh deta
//n=1,2,3,4,...........
// maan le uske 3rd index pe
//eg if 10,20,30,40,50,60
//then rotate 10-->3rd index means
//40 ki jagah shift kar dega
//similar 20->50....soon
//ans= 40,50,60,10,20,30

//sbse main point:

//v.begin()+n wala sbse aage ajaega phir 
//series aage chalti jaegi
//n=1,2,3,4,...........


//A. right shift

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6};
    rotate(v.begin(),v.begin()+3,v.end());
    for(int p : v){
        cout<<p<<" ";   
    }



//dont use *p,why??
//uper wala range based loop hai
//* ye iterator me use hota hai
//eg.

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    rotate(v.begin(), v.begin()+4, v.end());
    
    vector<int>::iterator it = v.begin();
    while(it != v.end()){
        cout << *it << " ";  
    }
}

//output= 5 6 1 2 3 4 
//v.begin()+4 wala sbse aage ajaega phir 
//series aage chalti jaegi

// //B. ab left shift

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    rotate(v.begin(), v.end()-4, v.end());
    
    vector<int>::iterator it = v.begin();
    while(it != v.end()){
        cout << *it << " "; 
        it++;
    }
}

//output=3 4 5 6 1 2 

//v.end()-1 element ko 
//sbse piche baaki uske piche


8.  unique


//only saves unique...


#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3,3,2,4,9,2, 5, 5};

   auto kai= unique(v.begin(),v.end());

   v.erase(kai,v.end());
for(int dih: v){
    cout<<dih<<" ";
}

}


//out=1 2 3 2 4 9 2 5
//remember lagataaar repeat wale hatege sirf
//not all 2 2 3 2-->2 3 2 not 2 3


9. partition


//nam se hi pta lag raha hai
//eg even ek tarah odd ek taraf


#include <bits/stdc++.h>
using namespace std;

//create fun
bool kai(int a){
    return a%2==1;
}
int main(){
    vector<int> v = {1,2,3,4,5,6};

    auto it= partition(v.begin(),v.end(),kai);

    for(int nga : v){
        cout<<nga<<" ";
    }
}

//out iska=1 5 3 4 2 6 
//out if a%2==0 = 6 2 4 3 5 1 

//kuch ala nahi bas partition 
//kia even and odd ka
//true wale baad me false wale phele
//condition kuch bhi le skta hai



            NUMERIC ALGOS             




//add headers=numeric,algorithm,vector,iostream



1.           accumulate



//sum karta


#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int>v={1,2,3,4,5};
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum;
}



//out=15
//main points :::
//range ke baad 0 add karna imp hai 

//{starting value kuch bhi le skta jaruri
// nahi ki sirf 0 hi ho but phir baad me
//vo add hoga pure sum me}

//accu.fun. me strting value dena imp  
// range change bhi kar skta
//int sum=accumulate(v.begin()+2,v.end(),100);
//out=112


2.             inner_product




#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int>v={1,2,3,4};
    vector<int>x={5,6,7,8};
int ans= inner_product(v.begin(),v.end(),x.begin(),0);
    cout<<ans;
}

//out=70
// 1*2+2*6+3*7+4*8 hora hai


3.          partial_sum



//fibonachi type hai ye

//steps::

//vector value insert kar
//dusra vec bna phele wale ke size ka hi
//lga algo and print kara le for  lop se

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int>v={1,2,3,4,5};

    vector<int>x(v.size());

    partial_sum(v.begin(),v.end(),x.begin());

    for(int tf: x){
        cout<<tf<<" ";
    }

}

//out=1 3 6 10 15 



4.          iota


//values create and add ker dega


#include <bits/stdc++.h>
using namespace std;

int main() {
    
 vector<int>v={7};  //50

vector<int>v(7);  //50 51 52 53 54 55 56 

    iota(v.begin(),v.end(),50);

    for(int r:v){
        cout<<r<<" ";
    }
}

//now,

vector<int>v={7};

//isme ek hi element hai so
// size bhi ek hi hoga
// sirf 50 print hoga


 vector<int>v(7); 
 
//isme 7 size hai naki 
//ek element jo 7 hai
//so isliye output alag
//50 51 52 53 54 55 56 



         FINDING & SEARCHING ALGOS         




//linier search me O(n) me search element
//binary me O(logn) me



1.        binary_search


#include <bits/stdc++.h>
using namespace std;

int main() {
    
 vector<int>v={7,8,9,10,11,222222,3,4}; 
int t=110;
bool it=binary_search(v.begin(),v.end(),t);
cout<<it;
}

//output=0

//binarysrch me values bool me t/f
//110 is not present in vector


2.     lower_bound


//ye greater than and equal to values dega

//just uuse bada element dedega
//jaise maaan le 1,2,3,4,5 hai 
// //tine search kia 4.5 
// ans me 5 ajaega but remember 
// uske liye float ho
// ek int ka eg =10,20,30,40
// searched 35 ans me 40 aega

// $$$$ one more imp thing ki container  
// sorted hona chaiye  $$$$$$$$


#include <bits/stdc++.h>
using namespace std;

int main() {
    
 vector<int>v={7,8,9,10,11,222222,3,4}; 
 
 auto a=lower_bound(v.begin(),v.end(),8888);
 cout<<*a;
}


//ye non sorted container(vector) hai 
//garbage value aega as me




#include <bits/stdc++.h>
using namespace std;

int main() {
    
 vector<int>v={7,8,9,10,11,222222,3,4}; 
 sort(v.begin(),v.end());
 
 auto a=lower_bound(v.begin(),v.end(),8888);
 cout<<*a;
}


// output=222222
// as now 8888 ke sbse kareeb 222222 hai 

 vector<float>v={7,8,9,10,11,222222,3,4};
auto a=lower_bound(v.begin(),v.end(),9.24);

//  if ye hoga tab ans 10
 


3.        upper bound

//sirf greater value dega not even equal to

#include <bits/stdc++.h>
using namespace std;

int main() {
    
 vector<int>v={7,8,9,10,11,222222,3,4}; 
 sort(v.begin(),v.end());
 
 auto a=upper_bound(v.begin(),v.end(),7);
 cout<<*a;
}



// // output=8
// if  auto a=upper_bound(v.begin(),v.end(),0);
// then 3 output

// difference between ubound and low,...

// upper bound greater value dega not even equal
// lower_bound greater than and equal to values 




4.      equal range


// Socho Ek Class Hai

// Roll numbers: {3, 4, 7, 8, 8, 8, 10, 11}

// Teacher ne pucha — 8 roll number 
// kitni baar hai aur kahan hai?


// p.first  = pehla 8 kahan se shuru hua
// p.second = 8 khatam hone ke baad kya aaya

// {3, 4, 7, 8, 8, 8, 10, 11}
//           ↑           ↑
//        p.first     p.second



   //CODE


// #include <bits/stdc++.h>
// using namespace std;

int main() {
    
    vector<int> v = {3, 4, 7, 8, 8, 8, 10, 11};
    
    auto p = equal_range(v.begin(), v.end(), 8);
    
    cout << *p.first << endl;   // 8  — pehla 8
    cout << *p.second << endl;  // 10 — 8 ke baad wala
    
    // kitni baar 8 aaya?
    cout << p.second - p.first << endl;  // 3
}




               MIN MAX ALGOS  
               
               


// generally kisi ka max/min value ke liye 
// hame ek function already igven hai
//remember this function accepts only 
// 2 arguments (a,b,c) or more not allowed 


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=2,b=999;
    cout<<max(a,b)<<" "<<min(a,b);
}

//999 2


// but vo to numbers ke liye hua na 
// hame containers ke liye karna hai
//iterator ke form me karna hai  


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v={1,2,3,4,5,6,7,8,999};

    
    //i found combined way

auto it = max_element(v.begin(),v.end()),
x = min_element(v.begin(),v.end());;

    
// // or use this

 auto x = min_element(v.begin(),v.end());

    cout<<*it<<" "<<*x;
}

// output= 999 1

//chahe toh bina dusra statement likhe
//kar skta or chahe to dono mix karke likh skta



          HEAP ALGOS   


//binary tree ka part ig

#include <bits/stdc++.h>
using namespace std;

int main() {    
    vector<int>v={1,2,3,4,5,};
    
    make_heap(v.begin(),v.end());
    for(int a : v){
        cout<<a<<" ";
    }
}

// output= 5 4 3 1 2


// Code Explanation

// This code creates a max-heap from
// a vector using make_heap.

// make_heap kya karta hai?
// Inhe ek line mein khada karta hai — sabse lamba aage:
// 5, 4, 3, 1, 2


// Toh output kyun 5 4 3 1 2 aaya?

// 5 — sabse bada, pakka pehle aayega ✅
// 4 3 1 2 — baaki sab kisi bhi order mein 
// ho sakte hain, sorting nahi hai inki
 

// example:

vector<int>v={1,2,9,4,5,};
make_heap(v.begin(),v.end());

// output= 9 5 1 4 2 

vector<int>v={1,2,9686,4,5,};
make_heap(v.begin(),v.end());

// out= 9686 phele baki baad me



// Key Points to Remember

// To get a min-heap, use a comparator:
//  make_heap(v.begin(), v.end(), greater<int>())

// function and their ourpose

//  make_heap(): Turns a range into a max-heap
//  push_heap(): Adds a new element to the heap
//  pop_heap() : Removes the largest element
//  sort_heap(): Sorts a heap into ascending order


// sara heap ka concept ek code me



#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // 1. make_heap - vector ko heap banao

    make_heap(v.begin(), v.end());
    cout << "make_heap ke baad  : ";
    for(int a : v) cout << a << " ";

    // 2. push_heap - naya element add karo


    v.push_back(9);         // pehle vector me daalo

    push_heap(v.begin(), v.end());  // phir heap me daalo

    cout << "\npush_heap (9 add)  : ";

    for(int a : v) cout << a << " ";

    // 3. pop_heap - sabse bada element hatao


    // sabse bada element end me chala jata hai
    pop_heap(v.begin(), v.end());

    v.pop_back();    // phir vector se hatao

    cout << "\npop_heap (9 hata)  : ";

    for(int a : v) cout << a << " ";

    // 4. sort_heap - heap ko sort karo

    sort_heap(v.begin(), v.end());
    cout << "\nsort_heap ke baad  : ";
    for(int a : v) cout << a << " ";

    return 0;
}


// output:

// make_heap ke baad  : 5 4 3 1 2 
// push_heap (9 add)  : 9 4 5 1 2 3 
// pop_heap (9 hata)  : 5 4 3 1 2 
// sort_heap ke baad  : 1 2 3 4 5 


// complexity

// make_heap :: O(N)
// push_heap :: O(logN)
// pop_heap  :: O(1)
// sort_heap :: O(N)



// SET ALGOS  //



#include <bits/stdc++.h>
using namespace std;

int main() {

//     //ye do set sab operations ke liye hai

    set<int> s1 = {1, 2, 3, 4, 5};
    set<int> s2 = {3, 4, 5, 6, 7};

 
        1. Union


// //  inserter hai ye niche wala

    set<int> unionSet;

    set_union(s1.begin(), s1.end(),
              s2.begin(), s2.end(),

 inserter(unionSet, unionSet.begin()));

    cout << "Union            : ";

    for(int a : unionSet) cout << a << " ";


            2. Intersection


//     //inserter

    set<int> interSet;

 set_intersection(s1.begin(), s1.end(),
 s2.begin(), s2.end(),inserter(interSet, interSet.begin()));                  
                     

cout << "\nIntersection     : ";

for(int a : interSet) cout << a << " ";


      3. Difference  (s1 - s2)


// //inserter

set<int> diffSet;

set_difference(s1.begin(), s1.end(),
s2.begin(), s2.end(),inserter(diffSet, diffSet.begin()));
                   

cout << "\nDifference(s1-s2): ";

for(int a : diffSet) cout << a << " ";


      4. Symmetric Difference


//     //inserter

set<int> symSet;

set_symmetric_difference(s1.begin(), s1.end(),
s2.begin(), s2.end(),inserter(symSet, symSet.begin()));
                             
                             
cout << "\nSymmetric Diff   : ";   

for(int a : symSet) cout << a << " ";



          5. Subset check


bool isSubset = includes(s1.begin(), s1.end(),
interSet.begin(), interSet.end());

cout << "\nSubset check     : " << (isSubset ? "Yes" : "No");

    return 0;
}



// // **Output:**

// // Union            : 1 2 3 4 5 6 7
// // Intersection     : 3 4 5
// // Difference(s1-s2): 1 2
// // Symmetric Diff   : 1 2 6 7
// // Subset check     : Yes


// // symmetric difference use
// // s1 = {1, 2, 3, 4, 5}
// // s2 = {3, 4, 5, 6, 7}

// // Common    = {3, 4, 5}  ← ye hatao
// Baki bacha = {1, 2, 6, 7} 









