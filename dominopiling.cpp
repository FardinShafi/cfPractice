#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int m=0,n=0,count=0;
    
    cin>>m;
    cin>>n;

    int x = floor(m/2);
    count =x*n;
    int temp =(m*n) - (count*2);
    count= count+ floor(temp/2);
    cout<<count<<endl;

    return 0;
}