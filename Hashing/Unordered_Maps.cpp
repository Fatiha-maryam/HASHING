#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main() {
     unordered_map <string,int> umap;
     umap["AMNA"]=23;
     umap["ALI"]=44;
     umap["MARYAM"]=12;
     umap["UMNA"]=56;
     //to diaplay all the elements of unordered map
     
    /* for(auto x: umap) this is one way to display
     {
     cout<<x.first<<" "<<x.second<<endl;
     } */
    //other one is 
    for(auto itr=umap.begin();itr!=umap.end();itr++)
       { cout<<itr->first<<" "<<itr->second<<endl;}
    
    
    // to find any element in the unordered set
    string key="UMNA";
    if(umap.find(key)!=umap.end())
        cout<<"Key found "<<endl;
        else
        cout<<"key not found"<<endl;
       
     //we can also find key and display key and name
     // as find function return iterator pointer to that element so 
     //we need to store the key and vlaue at which pointer is pointing to
     if(umap.find(key)!=umap.end())
     {
         auto temp =umap.find(key);
         cout<<"key found : key is " <<temp->first<<"  "<<"value is "<<temp->second<<endl;
     }
     else
     {
         cout<<"Key not found "<<endl;
     }

    //another way to insert in unorderd map is 
    umap.insert(make_pair("FATIMA",123));
        for(auto itr=umap.begin();itr!=umap.end();itr++)
        {cout<<itr->first<<" "<<itr->second<<endl;}
    
    // to find size of our umap
    cout<<"Size of our unordered map is: "<<umap.size()<<endl;
    
    // if we want to delete any number from unordered map
  key="ALI";
  umap.erase(key);
       for(auto itr=umap.begin();itr!=umap.end();itr++)
        {cout<<itr->first<<" "<<itr->second<<endl;}
        cout<<"Size of our unordered map is: "<<umap.size()<<endl;
cout<<endl;
cout<<endl;
// Another example
int array[]={7,1,6,8,9,3,1,0,9,3,4,5,6,2,1};
unordered_map<int,int> unmap;//unordered map is made first contains key second contains value
for(int i=0;i<15;i++)//loop to iterate whole array
{
    int key=array[i];//one by one array value will be stored in key
    unmap[key]++;//then each key will pass through hash function and make a hashtable index where value is stored.
    // if same element come again than it will increament the count
}
 for(auto itr=unmap.begin();itr!=unmap.end();itr++)
        {cout<<itr->first<<" "<<itr->second<<endl;}
        
int num=5;
if(unmap.find(num)!=unmap.end())
{cout<<"number found ";
 auto numb=unmap.find(num);
 cout<<"The number is "<<numb->first<<" and its count is "<<numb->second;
}
else
{cout<<"not found ";
}
    return 0;
}
