#include<iostream>
#include<cctype>
#include<string>
using namespace std;


int main(int argc, char const *argv[])
{
    string s="";
    cin>>s;
    for (char &c : s) {
        c = tolower(c);
    }

    string str = "";

    for(int i =0; i<s.length();i++){
        if((s[i]!= 'a' && s[i]!= 'e' && s[i]!= 'i' && s[i]!= 'o' && s[i]!= 'u' && s[i]!= 'y') && s.length()!=0){
            str+=".";
            str+=s[i];
        }
    }
    s=str;
    cout<<s<<endl;

    return 0;
}
