/*(Comparing Integers) Write a program that asks the user
to enter two integers, obtains the numbers from the user, then
prints the larger number followed by the words "is larger." If
the numbers are equal, print the message
"These numbers are equal .  (c++ hot to program)"*/
// program comparing two numbers
#include <iostream>
using namespace std ;
int main () {
    int x (0) , y (0) ;
    cout << " Enter two numbers : " ;
    cin >> x >> y ;
    if (x>y) {
        cout << x << " is larger\n";

    }
    if (x<y) {
        cout << y << " is larger \n";
    }
    if (x==y){
        cout << "These numbers are equal \n" ;
    }
}