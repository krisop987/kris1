              S  T  L                  

//   /*            CONTAINERS            */



     1.   V E C T O R S          


// #include <bits/stdc++.h>
// using namespace std;
// // declare
// int main()
// {

//     vector<char>v; for non empty v(10,'e');
//     vector<int>v;   similar as up
//     v.push_back(2); for inserting
//     cout<<v[4]; index koi bhi ho skta


//     end begin functions

//     vector<int> v(5, -1);

//     cout <<*(v.end()-1)<<" "<<*(v.begin());

//cout<<(v.end()-v.begin())<<" "<<v.size()<<endl; 

//if (v.end()-v.begin()) then size print kar deta

//     /last element//v.begin for first
//      cout <<*(v.begin())<<endl; 

//     vector<int>v;
//     v.push_back(10);
//     v.push_back(8);
//     v.pop_back();
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
      

//     vector<int>v={1,2,3,4,6,3,4,5,5,2,34};
//     cout<<v.front()<<" "<<v.back();

//     vector<int>v;                 
//     v.push_back(3);
//      v.push_back(4);
//       v.push_back(5);
//        v.push_back(1);
//        v.push_back(2);
//        v.pop_back();
//         v.pop_back();
//        v[2]=9;   //insert
//     //    cout<<v[2]<<;

//     cout<<v.size()<<" "<<v.capacity();



    
//     vector<int>v; 
//     cout<<v.capacity()<<" "<<v.size();    //0 0


     
//     vector<int>v; 
//     v.reserve(5);
//     cout<<v.capacity()<<" "<<v.size();   
//iss fun se capacity reserve kar skta    5 0


//      vector<int>v; 
//      cout<<v.max_size();  //max size of system



    
//     vector<int>v;                 
//     v.push_back(3);
//      v.push_back(4);
//       v.push_back(5);
//        v.push_back(1);
//        v.push_back(2);
//        v.pop_back();
//         v.pop_back();
//        v.clear();
//     cout<<v.size();




//     vector<int>v;                 
//     v.push_back(3);
//      v.push_back(4);
//       v.push_back(5);
//        v.push_back(1);
//        v.push_back(2);
//        v.insert(v.begin()+2,107246);
//     // // v.insert(v.begin()+3,288828);
//     // v.insert(v.end()-3,333);
//        cout<<v[2];




       
//     vector<int>v;                 
//     v.push_back(3);
//      v.push_back(4);
//       v.push_back(5);
//        v.push_back(1);
//        v.push_back(2);
    // //    v.erase(v.begin()+2,v.end()-1);
//     // v.erase(v.begin()+3,v.end()-1);  //not included last one

//     v.erase(v.begin());      // first element wipe out

//     v.erase(v.begin(),v.end());    //fully wiped vector
//    cout<<v.size();




      
       
//     // vector<int>v;   
//     // vector<int>x;              
//     // v.push_back(1);
//     //  v.push_back(2);
//     //   v.push_back(3);
//     //    v.push_back(4);
//     //    v.push_back(5);

//     //  x.push_back('w');  //ascall value
//     //  x.push_back(400);
//     //   x.push_back(500);
//     //    x.push_back(100);
//     //    x.push_back(200);
//     //    v.swap(x);
//     //    cout<<v[3]<<" "<<v[0]<<" "<<x[0];



//     // vector<int>v;               
//     // v.push_back(1);
//     //  v.push_back(2);
//     //   v.push_back(3);
//     //    v.push_back(4);      ///access by loop in iterator
//     //    v.push_back(5);
//     //    vector<int>::iterator orewa=v.begin();
//     //    while(orewa!=v.end()){
//     //     cout<<*orewa<<" ";
//     //     orewa++;
//     //    }




// vector<vector<int>>ko(4,vector<int>(5,0));
// cout<<ko.size()<<" "<<ko[0].size();   //rows & column size

// // for(int i = 0; i < 14; i++) {          // rows  //for accessing 
// //     for(int j = 0; j < 5; j++) {      // columns
// //         cout << ko[i][j] << " ";
// //     }
// //     cout<<endl;
// // }





   
// //     vector<vector<int>>ko(4,vector<int>(5,0));

// //    for(int i = 0; i < 14; i++) {          
// //       for(int j = 0; j < 5; j++) {      
// //          cout << ko[i][j] << " ";
// //      }
// //        cout<<endl;    

// // }

 
// //     vector<vector<char>>ko(4,vector<char>(5,'e'));

// //    for(char i = 0; i < 4; i++) {          
// //       for(char j = 0; j < 5; j++) {      
// //          cout << ko[i][j] << " ";
// //      }
// //        cout<<endl;    

// // }


// vector<vector<int>>v(4);
// v[0]=vector<int>(4);
// v[1]=vector<int>(2);
// v[3]=vector<int>(3);
// v[4]=vector<int>(5);
//    for(int i = 0; i < 4; i++) {          
//       for(int j = 0; j < 5; j++) {        ////wrong code
//          cout << v[i][j] << " ";
//      }
 
//     }


// vector<vector<char>> v(4);

// v[0] = vector<char>(4, '*');  // ✅ valid index
// v[1] = vector<char>(2, 'e');  // ✅ valid index
// v[2] = vector<char>(3, '4');  // ✅ valid index  //right code
// v[3] = vector<char>(5, '3');  // ✅ valid index

// for(int i = 0; i < 4; i++) {           // ✅ int
//     for(int j = 0; j < v[i].size(); j++) { 
//         cout << v[i][j] << " ";
//     }
//     cout << endl;
// }

//code for only int

// vector<vector<int>> v(4);

// v[0] = vector<int>(4, 8);  // ✅ valid index
// v[1] = vector<int>(2, 9);  // ✅ valid index
// v[2] = vector<int>(3, 0);  // ✅ valid index          
// v[3] = vector<int>(5, 6);  // ✅ valid index

// for(int i = 0; i < 4; i++) {           //  int
//     for(int j = 0; j < v[i].size(); j++) { //har row ki apni size
//         cout << v[i][j] << " ";
//     }
//     cout << endl;
// }





          2.     L I S T           





// #include<bits/stdc++.h>
// using namespace std;
// int main(){

    //     DECLARE     //


//     list<int>l;             //declaration//creation///
//     l.push_back(9);          //9
//    l.push_front(88);         //88 9
//    l.push_front(8);         //8 88 9
//     l.push_back(10);        //8 88 9 10
//     l.push_back(9);         //8 88 9 10 9
//     l.pop_back();           //8 88 9 10
//     l.pop_front();          //88 9 10

//     cout<<l.front()<<l.back()-1;   //strt and end values
//     // cout<<l.front()+12;     //ye karne par 100 aega



//    WAYS OF ACCESSING BY FOR LOOP   //



//   for (int val : l) {            //range based loop
//     cout << val << " ";
// }


// for (auto it = l.begin(); it != l.end(); ++it) {    ///iterator se access
//     cout << *it << " ";


// // list<int>::iterator it=l.begin();    //same answers aega->[ 88 9 10]
// // while(it !=l.end()){              ////iterator is traverse way to///
// //     cout<<*it<<" ";               ////access list vector etc///
// //     it++;
// // }  


//        SOME EXTRA AND SIZE    ///


// // }
// // cout<<endl;           //horizontal space create
// // cout<<l.size();      //for size        



//           REMOVE FUNCTION        //


// //     list<int>l;             
// //     l.push_back(9);         
// //    l.push_front(88);         
// //    l.push_front(8);         
// //     l.push_back(10);       
// //     l.push_back(9);      
// //     l.remove(9);
// //     cout<<l.size();  //3 aega jitne 9 hai sbko remove kar dega
//                      //print karne ke liye loop use kar


//      SWAP        //


//     list<int>l;             
// //     l.push_back(9);    
// //    l.push_front(88);         
// //    l.push_front(8);              
// //     l.push_back(10);       
// //     l.push_back(9);      

// //   list<int>le;             
// //     le.push_back(55);         //55
// //    le.push_front(44);         //44 55
// //    le.push_front(99);         //99 44 55
// //     le.push_back(77);         //99 44 55 77
// //     le.push_back(66);         //99 44 55 77 66

// //     le.swap(l);

// // for (auto it = l.begin(); it != l.end(); ++it) {    ///iterator se acces
// //     cout << *it << " ";                         //value print ho jaega
// // }


// //     INSERT  //  same as vector  //


// //     list<int>l;             
// //     l.push_back(9);    
// //    l.push_front(88);         
// //    l.push_front(8);              
// //     l.push_back(10);       
// //     l.push_back(9); 
// //     l.insert(l.begin(),3);   //name.insert(iterator,value)

// // list<int>::iterator it=l.begin();   //always use iterator 
// // while(it !=l.end()){                //for printing
// //     cout<<*it<<" ";                
// //     it++;
// // }                                     //answer= //3 8 88 9 10 9//



// //    ERASE   //    l.erase(iterator range1,range2);   //


// //     list<int>l;             
// //     l.push_back(9);    
// //    l.push_front(88);         
// //    l.push_front(8);              
// // //     l.push_back(10);       
// // //     l.push_back(9); 
    
// // //     l.erase(l.begin(),l.end()-3);

// // // }




         3.      Q U E U E     





// // //first in first out ds
// // //insert back se hogi and remove front se
// // //header file = #include<queue>

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main() { 


// // // //  CREATION/DECLARATION    //

// // // queue<int>q;
// // // q.push(1);     //1
// // // q.push(2);     //1 2
// // // q.push(3);     //1 2 3
// // // q.push(4);      //1 2 3 4 
// // // q.push(5);     //1 2 3 4 5
// // // q.push(6);     //1 2 3 4 5 6 
// // // q.pop();       //2 3 4 5 6
// // // q.pop();       //3 4 5 6 

// // // cout<<q.size();          //4
// // // cout<<endl;               


// // // while (!q.empty()) {
// // //     cout << q.front() << " ";      // 3 4 5 6 
// // //     q.pop();
// // // }


// // //empty diby//


// // // //   FRONT AND BACK      //


// // // queue<int>q;
// // // q.push(1);     //1
// // // q.push(2);     //1 2
// // // q.push(3);     //1 2 3
// // // q.push(4);      //1 2 3 4 
// // // q.push(5);     //1 2 3 4 5
// // // q.push(6);      //1 2 3 4 5 6 
// // // cout<<q.front()<<" "<<q.back();     //1 6


// // //    SWAP    //

// // queue<int>q;
// // q.push(1);     //1
// // q.push(2);     //1 2
// // q.push(3);     //1 2 3
// // q.push(4);      //1 2 3 4 
// // q.push(5);     //1 2 3 4 5
// // q.push(6);      //1 2 3 4 5 6 

// // queue<int>q2;
// // q2.push(6);     //6
// // q2.push(5);     //6 5
// // q2.push(4);     //6 5 4
// // q2.push(3);     //6 5 4 3 
// // q2.push(2);     //6 5 4 3 2 
// // q2.push(1);      //6 5 4 3 2 1

// // q.swap(q2);
// // // cout<<q.begin()<<" "<<q2.begin();   error as ye iterator hai
// // cout<<q.front()<<" "<<q2.front();   // 6 1

// // }



// //$$$$       S T A C K     $$$$//

// // 1.last in ,firt out  datastructure
// // 2.header file me stack lga de

// // 3.stack doesn't support range-based for loops.
// //3.1.it has no iterators.
// //3.2.You need to pop elements to traverse it.



// // #include <bits/stdc++.h>
// // using namespace std;

// //     int main() {
// //         //declare
// //         stack<int>s;
// //         s.push(3);    //3
// //         s.push(4);    //3 4
// //         s.push(5);    //3 4 5 
// //         s.push(6);    //3 4 5 6 
// //         s.pop();     //3 4 5    access me 5 top element hoga
//                                 //so ans 5 4 3 
//         // cout<<s.size()<<endl;   //for size
        
// //   for (int val : s) {          //range based loop
// //     cout << val << " ";        //doesnt work
// // }


// // while (!s.empty()) {
// //         cout << s.top() << " ";  //5 4 3
// //         s.pop();
// //     }


  
// // while (!s.empty()) {             //5 4 3
// //     cout << s.top() << " ";  
// //     s.pop();
// // }


// // cout<<s.top();    //5

// //empth diby
// //swap diby

// //  }



      

        4.      D E Q U E    



// //double ended queue.
// //similar to vector but it allows.
// //insertion and removal at both ends.

// //suitable jab elements ko frequently
// //remove and insert karna ho front/back se
// //header file deque nahi queue hai
// //#include<queue>

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {

// //     deque<int>d;
// //    d.push_back(1);  //1
// //    d.push_back(2);  // 1 2 
// //    d.push_back(3);  //1 2 3
// //    d.push_front(4); //4 1 2 3
// //    d.push_front(5); //5 4 1 2 3 
// //    d.push_front(6); //6 5 4 1 2 3 
// //    d.pop_back();    //6 5 4 1 2
// //    d.pop_front();   //5 4 1 2

// // 3 ways to print //all have ans= 5 4 1 2

// //1.range based (simplest)

// // for (int x : d) {
// //     cout << x << " ";
// // }

// //index based

// // for (int i = 0; i < d.size(); i++) {
// //     cout << d[i] << " ";
// // }

// // //iterator

// // for (auto it = d.begin(); it != d.end(); it++) {
// //     cout << *it << " ";
// // }

// // cout<<d.size();    // 4
// //empty diby


// // using iterator(  steps dekh )

// //declare

// //     deque<int>d;
// // //insert

// //    d.push_back(1);  //1
// //    d.push_back(2);  // 1 2 
// //    d.push_back(3);  //1 2 3
// //    d.push_front(4); //4 1 2 3
// //    d.push_front(5); //5 4 1 2 3 
// //    d.push_front(6); //6 5 4 1 2 3 
// //    d.pop_back();    //6 5 4 1 2
// //    d.pop_front();   //5 4 1 2

// //    //iterator declare

// // deque<int>::iterator it=d.begin();

// //access by for loop by iterator

// // for (auto it = d.begin(); it != d.end(); it++) {
// //     cout << *it << " ";
// // }                           // 5 4 1 2 

// //or use while loop

// // while(it !=d.end()){
// //     cout<<*it<<" ";
// //     it++;                   // 5 4 1 2 
// // // }


// // // index wise bhi access kar skta hai d[]
// // //    deque<int>d;
// // //    d.push_back(1);  //1
// // //    d.push_back(2);  // 1 2 
// // //    d.push_back(3);  //1 2 3
// // //    d.push_front(4); //4 1 2 3
// // //    d.push_front(5); //5 4 1 2 3 
// // //    d.push_front(6); //6 5 4 1 2 3 
// // //    d.pop_back();    //6 5 4 1 2
// // //    d.pop_front();   //5 4 1 2
// // // cout<<d[0]<<endl;;   //5  
// // // cout<<d[3]<<endl;     //2
// // // cout<<d.at(3);        //2
// // //;;....; semi colon kitne bhi lele error nahi aega c++ me



// // //insert,erase,clear,swap allwork same
// // //as alike previous ones

// // //bas dhyan rakh insert me itertor use

// // //$$$$  P R I O R I T Y  Q U E U E    $$$$//


// // //header file again queue
// // //jiski jada priority use print karega

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     priority_queue<int>p;
// //     p.push(2);//2
// //     p.push(3335);//3335 2
// //     p.push(7);//3335 7 2
// //     p.push(5);//3335 7 5 2
// //     p.push(1);//3335 7 5 2 1
// //     p.pop();// 7 5 2 1 (pop me top priority wala hatt jaega)
// //     cout<<p.top()<<endl; //7 (if pop na hota to 3335 hota)
  
// //     cout<<p.size()<<endl; //idhar size=4 hoga niche 0
// //     //access

// //     for (; !p.empty(); p.pop()) { // 7 5 2 1
// //         cout << p.top() << " ";
// //     }    
// //     cout<<endl;
   
// //     cout<<p.size();  //0 as sab print hogaye 
//                      //no element in upperspace


//  //swap,empty diby  



 
              5.       M   A   P    



// //collection of entries having key and values
// //key should be unique
// //2 types unordered and ordered
// //header file of ordered is map
// //header file of unordered is unordered_map

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {

// //1.inordered map
// //unord.. me random values me access hoga

//     //creation    type1 , type2
// //     unordered_map<string,string>u;
// //     //insertion(3 ways)
// //     //1
// //     u["e"]="gay";
// //     //2
// //     u.insert(make_pair("f","no"));
// //     //3(pair bnaale)
// //     pair<string,string>p;
// //     p.first="g";
// //    p.second="pro";
// //    u.insert(p);
// //    cout<<u.size()<<endl; //abhi 3

// //access karne ke tarike

// // //1
// // cout << u["e"];  // gay  put key and get
// // cout << u.at("e");  // gay

//  //2
// // for (auto x : u) {                               //g pro
// //   cout << x.first << " " << x.second << endl;    ///f no    
// //                                                 // e gay
// // // }
// // // // cout<<endl;
// // // u.clear();
// // // cout<<u.size(); //0 now


// // //overall output of upper solution

// // //g pro
// // //f no
// // //e gay

// // //0

// // //empty,erase(it1,it2) diby

// // //find
// // //agar jo key dhundni hai vo mil gayi to
// // //uska iterator return dega agar nahi mili
// // //to means end tak pahuch chuka hai vo

// // //example

// //       unordered_map<string,string>u;
// //     //insertion(3 ways)
// //     //1
// //     u["e"]="gay";
// //     //2
// //     u.insert(make_pair("f","no"));
// //     //3(pair bnaale)
// //     pair<string,string>p;
// //     p.first="g";
// //    p.second="pro";
// //    u.insert(p);

// //    if(u.find("e")!=u.end()){  //key found
// //     cout<<"key found"<<endl;   
// //    }
// //    else{
// //     cout<<"not found"<<endl;
// //    }

// //    //if e ki jaah kuch bhi karta jaise d,e f rtc
// //    // jo uper keys me nahi hai to not found ata


// //    if(u.find("we")!=u.end()){  //not found
// //     cout<<"key found"<<endl;   
// //    }
// //    else{
// //     cout<<"not found"<<endl;
// //    }





// //    }


// // ordered mAP/MAP


// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// // //ord.. me structured values me access hoga

// //     //creation    type1 , type2
// //     map<string,string>u;
// //     //insertion(3 ways)
// //     //1
// //     u["e"]="gay";
// // //     //2
// // //     u.insert(make_pair("f","no"));
// // //     //3(pair bnaale)
// // //     pair<string,string>p;
// // //     p.first="g";
// // //    p.second="pro";
// // //    u.insert(p);
// // //    cout<<u.size()<<endl; //abhi 3

// // // //access karne ke tarike

// // // //1
// // // cout << u["e"]<<endl;  // gay  put key and get
// // // cout << u.at("e")<<endl;  // gay

// // // //2
// // // for (auto x : u) {                               //e gay  
// // //   cout << x.first << " " << x.second << endl;    ///f nno    
// // //                                                 // g pro
// // // }



// // // }


// // //dono same hai just ek ordered me hai

// // //integer value bhi insert kar skta

// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main() {
// // //     map<int,string>m;
// // //     m.insert(make_pair(1,"bmw"));
// // //     m.insert(make_pair(2,"mercedes"));
// // //     m.insert(make_pair(3,"audi"));
// // //     m.insert(make_pair(1,"ferrari"));
   
// // //    //declare iterator

// // //     map<int,string>::iterator it=m.begin(); 

// // //   //3rd way of acceessing by iterator

// // //     while(it!=m.end()){ 
// // //     pair<int,string>m=*it;
// // //     cout<<m.first<<" "<<m.second<<endl;
// // //     it++;

// //     //output
    
// // //1 bmw
// // //2 mercedes
// // //3 audi

// // //difference
// // //in map/ordered map complexity is o(logn)
// // //while unorder me o(1)


// //     // }
// // // }



              6.     S   E   T    



// // //only store unique values 
// // //no duplicate values allowed
// // //2 types odrered complexity o(logn)
// // //unordered of compl O(1)
// // //header set

// #include <bits/stdc++.h>
// using namespace std;

//  int main() {

// //     set<int>s;
// //     s.insert(3); //3
// //     s.insert(4); //3 4 
// //     s.insert(5); //3 4 5
// //     s.insert(3); //3 4 5 (as no unique values allowed)
// //     s.insert(6); //3 4  5 6

// //     cout<<*s.begin()<<endl; //3 yaad rakhio refrance dena jaruri hai


// //     cout<<s.size()<<endl; //4
// // s.clear();
// //  cout<<s.size()<<endl;  //0 //but yaad rakhio niche 
// //     //traverse          //loop bhi print nahi hoga phir


// //     set<int>:: iterator it=s.begin();
// //     while(it!=s.end()){
// //         cout<<*it<<" ";          //3 4 5 6 
// //         it++;
// //     }
// // cout<<endl;

// //if unordered

//     // unordered_set<int>us;
//     // us.insert(3); //3
//     // us.insert(4); //3 4 
//     // us.insert(5); //3 4 5
//     // us.insert(3); //3 4 5 (as no unique values allowed)
//     // us.insert(6); //3 4  6
//     // //traverse
//     // unordered_set<int>:: iterator itx=us.begin();
//     // while(itx!=us.end()){
//     //     cout<<*itx<<" ";          //6 5 4 3 aega 
//     //     itx++;
//     // }



// // erase,empty diby


//  //found



//     set<int>s;
//     s.insert(3); //3
//     s.insert(4); //3 4 
//     s.insert(5); //3 4 5
//     s.insert(3); //3 4 5 
//     s.insert(6); //3 4  5 6
// // if(s.find(3)!=s.end()){  
// //     cout<<"found";
// // }
// // else{
// //     cout<<"not found"<<endl;
// // }
// // cout<<endl;

// //uper wale me s.end() means vo end tak
// //jaane se phele hi mil gya


// // if(s.find(44)!=s.end()){
// //     cout<<"found";
// // }
// // else{
// //     cout<<"not found";
// // }
// // cout<<endl;
// // //isme end tak bhi ni mila


// //count

// if(s.count(4)==1){
//     cout<<"found";

//  }
// if(s.count(4)==0){
//     cout<<"not found";
//  }

//  //key points/

//  //dekh  only 0 and 1 me baat
//  //dono if hai else nahi hoga
//  //dusre me else if bhi use kar skta hai
//  //if koi alag element jo set me na ho vo dala
//  //to not found aega
// }