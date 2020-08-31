#include<iostream>
using namespace std;

int glo = 6;

void sum(){
    cout<<glo;
}

// local varaiable has higher precedence over global variable

int main(){
     int glo=9 ;
    // int a = 3;
    // int  b = 5;
    int a = 3, b = 5;
  //   cout<<"the value of a is "<<a<<". the value of b is "<<b;
    
    float pi =3.14;
  //  cout<< "\n the value of pi is"<<pi;

    char alphabet = 'a';
  //  cout<< "\n the alphabet is"<<alphabet;

   
    sum();
    cout<< glo;

    bool is_true = true;
  // cout<<is_true;


    return 0;
}