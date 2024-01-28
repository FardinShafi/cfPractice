#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double m,n,a;
    cin>>n>>m>>a;
    long long  x_axis=ceil(n/a);
    long long  times =ceil(m/a);

    long long result= x_axis*times;

    cout<<result<<endl;

    return 0; 
     
}