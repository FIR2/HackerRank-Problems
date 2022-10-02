// Input Format

// You will be given two positive integers,a  and b (a<=b), separated by a newline.

// Output Format

// For each integer  in the inclusive interval [a,b]:

// If 1<= n <=9 , then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
// Else if n>9  and it is an even number, then print "even".
// Else if n>9 and it is an odd number, then print "odd".
// Note: [a,b]= {x belong to Z| a<=x<=y} = {a,a+1,.......,b}


#include <iostream>
#include <cstdio>
using namespace std;


int main(){
int i,a,b;
cin>>a>>b;

string nums[11] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};

for (i=a; i<=b; i++){
    if (i>9 && i%2==0)
    {
        cout<<nums[9]<<endl;
    }
    else if (i>9 && i%2!=0)
    {
            cout<<nums[10]<<endl;
    }
    else{
        cout<<nums[i-1]<<endl;
    }
}
}