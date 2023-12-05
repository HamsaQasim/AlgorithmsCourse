#include<iostream>
#include<chrono>

using namespace std;

unsigned long long iterativeFactorial(unsigned long long n){
    unsigned long long f=1;
    while(n>0){
     f*=n;
     n=n-1;}
return f;
}
unsigned long long recursiveFactorial(unsigned long long n){

if (n==1)
    return 1;
else
    return n*recursiveFactorial(n-1);
}

int main(){

unsigned long long num;
unsigned long long fact;
cout<<"Enter any number to find it's factorial"<<endl;
cin>>num;
auto t1=std::chrono::high_resolution_clock::now();
fact= iterativeFactorial(num);
//fact=recursiveFactorial(num);
auto t2=std::chrono::high_resolution_clock::now();
cout<<fact<<endl;



auto duration=std::chrono::duration_cast<chrono::microseconds>(t2-t1);

cout<<duration.count()<<" microsecond"<<endl;

}
