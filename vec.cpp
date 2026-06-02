// #include <bits/stdc++.h>
// using namespace std;
// // declare
// int main()
// {
//     // vector<char>v; for non empty v(10,'e');
//     // vector<int>v;   similar as up
//     // v.push_back(2); for inserting
//     // cout<<v[4]; index koi bhi ho skta


//     //end begin functions

//     // vector<int> v(5, -1);
//     // cout <<*(v.end()-1)<<" "<<*(v.begin())<<" "<<(v.end()-v.begin())<<" "<<v.size()<<endl;  //if (v.end()-v.begin()) then sze print kar deta
//     ///last ele//v.begin for firdt 
//     //  cout <<*(v.begin())<<endl; 

//     // vector<int>v;
//     // v.push_back(10);
//     // v.push_back(8);
//     // v.pop_back();
//     // for(int i=0;i<v.size();i++){
//     //     cout<<v[i]<<" ";
//     // }
      

//     // vector<int>v={1,2,3,4,6,3,4,5,5,2,34};
//     // cout<<v.front()<<" "<<v.back();

//     // vector<int>v;                 
//     // v.push_back(3);
//     //  v.push_back(4);
//     //   v.push_back(5);
//     //    v.push_back(1);
//     //    v.push_back(2);
//     //    v.pop_back();
//     //     v.pop_back();
//     //    v[2]=9;   //insert
//     // //    cout<<v[2]<<;

//     // cout<<v.size()<<" "<<v.capacity();



    
//     // vector<int>v; 
//     // cout<<v.capacity()<<" "<<v.size();    //0 0


     
//     // vector<int>v; 
//     // v.reserve(5);
//     // cout<<v.capacity()<<" "<<v.size();   //iss fun se capacity reserve kar skta    5 0



//     //  vector<int>v; 
//     //  cout<<v.max_size();  //max size of system



    
//     // vector<int>v;                 
//     // v.push_back(3);
//     //  v.push_back(4);
//     //   v.push_back(5);
//     //    v.push_back(1);
//     //    v.push_back(2);
//     //    v.pop_back();
//     //     v.pop_back();
//     //    v.clear();
//     // cout<<v.size();




//     // vector<int>v;                 
//     // v.push_back(3);
//     //  v.push_back(4);
//     //   v.push_back(5);
//     //    v.push_back(1);
//     //    v.push_back(2);
//     //    v.insert(v.begin()+2,107246);
//     // // // v.insert(v.begin()+3,288828);
//     // // v.insert(v.end()-3,333);
//     //    cout<<v[2];




       
// //     vector<int>v;                 
// //     v.push_back(3);
// //      v.push_back(4);
// //       v.push_back(5);
// //        v.push_back(1);
// //        v.push_back(2);
// //     // //    v.erase(v.begin()+2,v.end()-1);
// //     // v.erase(v.begin()+3,v.end()-1);               //not included last one
//     // v.erase(v.begin());                               // first element wipe out
// //     v.erase(v.begin(),v.end());                     //fully wiped vector
// //    cout<<v.size();




      
       
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
//     //    v.push_back(4);            ///access by loop in iterator
//     //    v.push_back(5);
//     //    vector<int>::iterator orewa=v.begin();
//     //    while(orewa!=v.end()){
//     //     cout<<*orewa<<" ";
//     //     orewa++;
//     //    }




// //     vector<vector<int>>ko(4,vector<int>(5,0));
// //     // cout<<ko.size()<<" "<<ko[0].size();          //rows and column size respectively///

// // for(int i = 0; i < 14; i++) {          // rows        //for accessing elemetssss
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


// // vector<vector<int>>v(4);
// // v[0]=vector<int>(4);
// // v[1]=vector<int>(2);
// // v[3]=vector<int>(3);
// // v[4]=vector<int>(5);
// //    for(int i = 0; i < 4; i++) {          
// //       for(int j = 0; j < 5; j++) {        ////wrong code
// //          cout << v[i][j] << " ";
// //      }
 
// //     }
// // }

// // vector<vector<char>> v(4);

// // v[0] = vector<char>(4, '*');  // ✅ valid index
// // v[1] = vector<char>(2, 'e');  // ✅ valid index
// // v[2] = vector<char>(3, '4');  // ✅ valid index             ////right code////
// // v[3] = vector<char>(5, '3');  // ✅ valid index

// // for(int i = 0; i < 4; i++) {           // ✅ int
// //     for(int j = 0; j < v[i].size(); j++) { // ✅ har row ki apni size
// //         cout << v[i][j] << " ";
// //     }
// //     cout << endl;
// // }


// // vector<vector<int>> v(4);

// // v[0] = vector<int>(4, 8);  // ✅ valid index
// // v[1] = vector<int>(2, 9);  // ✅ valid index
// // v[2] = vector<int>(3, 0);  // ✅ valid index             ////right code////
// // v[3] = vector<int>(5, 6);  // ✅ valid index

// // for(int i = 0; i < 4; i++) {           // ✅ int
// //     for(int j = 0; j < v[i].size(); j++) { // ✅ har row ki apni size
// //         cout << v[i][j] << " ";
// //     }
// //     cout << endl;
// // }




// }

  

