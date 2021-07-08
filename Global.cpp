#include <bits/stdc++.h>
using namespace std;
int global=10;
void by_value(int x);
void by_reference(int &x);
int main(){
    int a1=5, a2=5;
    cout<< "Before:a1=" <<",a2="<< "\n";
    by_value(a1);
    by_reference(a2);
    cout<< "After: a1="<<global<<",a2="<<a2<<"\n";

    return 0;
}

void by_value(int x){
    x*=2;
}
void by_reference(int &x){
    x*=2;
}

