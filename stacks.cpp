#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 20;
    int top = -1;
    char stack[SIZE];


void push(char c) {
    top++;
    stack[top] = c;
}


char pop() {
    char c = stack [ top ];
    top--;
    return c ;
}

int main(){
    push('A');
    push('B');
    push('D');
    pop();
    push('C');
    push('D');
    push('E');
    pop();
    pop();

    cout << top << endl;    // top should be 2, as it has been popped ot the 'C' position
    cout << endl;

    for(int i = top; i > -1; i--){
        cout << stack[i] << endl;   //prints everything after 'C' inclusive (so C   B   A)
    }
    cout << pop << endl;    //why does this return 1

    return 0;
}
