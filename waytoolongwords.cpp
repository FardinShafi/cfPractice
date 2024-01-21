#include<iostream>
#include<iostream>

using namespace std;

main(){

    int x=0;
    cin>>x;

   for(int i=0;i<x;i++){
        string s="";
        cin>>s;
    
        if(s.length()>=10){
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
   }

    return 0;
}