// Online C++ compiler to run C++ program online
#include<iostream>
#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set <int>s;
    s.insert(10);
    s.insert(3);
    s.insert(9);
    s.insert(2);
    //s.insert(2) it will not be displayed and the size will remain same because duplicacy in unordered_set is not allowed.
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it <<"  ";
    }
    cout<<"Number of elements in unordered set is "<<s.size()<<endl;
    
  s.clear();
  // clear function will clear all the set.
  //now again check the size
   cout<<"Number of elements in unordered set is "<<s.size()<<endl;
    
    int key=20;
    //if we want to search any element in the unordered set than we will use find funtion
    if(s.find(key)==s.end())//s.find will search and return iterator for that but if not found than iterator move to end of set so if element is found iterater will stop at that and it will not be equal to end else it will reah to end
    {
        cout<<"key not found "<<endl;
    }
    else
    cout<<"key found "<<endl;
  
  // if we want to delete any element from set
  int delete_key=15;
  s.erase(delete_key);
  //now check the size
   cout<<"Number of elements in unordered set is "<<s.size()<<endl;
   
   //now count function will tell any element present or not
   if(s.count(5))
       cout<<"key found ";
       else
       cout<<"key not found ";
   
    return 0;
}
