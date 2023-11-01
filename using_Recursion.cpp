#include<iostream>
using namespace std;

double pow(double x,int n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        return 1/pow(x,-n);
    }
    else if(n%2==0){
        double temp=pow(x,n/2);
        return temp * temp;
    }
    else{
        double temp=pow(x,n/2);
        return x * temp * temp;
    }
}

int main(){
    double x;
    int n;
    
    cout<<"Enter the Base : "<<endl;
    cin>>x;
    cout<<"Enter the exponent : "<<endl;
    cin>>n;
    
    double result=pow(x,n);
    cout<<"Result :"<<result<<endl;
    return 0;
}
