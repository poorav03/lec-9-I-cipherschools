// Lecture 9 I - Functions Pt 3

#include <iostream>
using namespace std;

// function can have multiple return but return only one value
int compare(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int comparee(int a){
    if (a==5) return 1;
    return 0;
}

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    int a, b;
    cout << "Enter any two number : ";
    cin >> a >> b;
    cout << compare(a, b) << " is greater." <<  endl;
    cout << a << " is equal to 5 " << comparee(a) << endl;
    cout << b << " is equal to 5 " << comparee(b) << endl;
    cout << "Sum of the " << a << " and " << b << " is " << sum(a, b) << endl; 
    return 0;
}