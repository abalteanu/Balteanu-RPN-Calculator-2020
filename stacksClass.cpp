#include <iostream>
#include <fstream>

using namespace std;

class stack{

protected:
    double s[20];
    int top;
public:
    stack();    //constructor: to initialize class and everything needed for class ( in our case it is top and initializes every array value to 0)
                //constructor is called automatically when you declare an object (ex a in main)
    ~stack();   //destructor: cleans up memory in addition to what you want to do
                //(this is needed if you reuse the class multiple times, so that the same memory locatoin is not used)
                //if used properly, prevents memory leakes, which can fry a computer by using up all your memory
                //compiler recognises ~ sign as a destructor and automatically deconstructs
    void push(double n);
    double pop();
    bool isEmpty();
};

stack::stack(){
    top = -1;
    for(int i = 0; i < 20; i++){
        s[i] = 0;
    }
}

stack::~stack(){};

void stack::push(double n){
    //error checking, making sure that there is no overflow in the stack, does not go out of bounds
    if (top == 19)
        cout << "stack overflow" << endl;
    top++;
    s[top] = n;
}

double stack::pop(){
    double number;
    number = s[top];        //reads top number into a variable
    top--;                  //decreases number of variables held in array by 1
    s[top] = 0;             //its good practice to set it to zero before going to the previous location
    return number;          //returns the number you just read
}

bool stack::isEmpty(){
    if (top == -1){
        return 0;
    } else {
        return 1;
    }
}

//an operation class that extends the functionality of the stack function (adding arithmetic)
class arithmetic: public stack{
public:
    arithmetic();
    ~arithmetic();
    //methods are functions inside a class: defining arithmetic methods

    double addition();

};

arithmetic::~arithmetic(){};

double arithmetic::addition(){
    double x = stack::pop();
    double y = pop();  //Line above the same thing, nut you specifically ask to see pop from class stack (preventing overriding)
    double sum = x + y;
    stack::push(sum);
    return sum;
}
/*


void arithmetic::setX(double &x){
    //this is a setter function (setter functions will usually be a void) and sets the outside value to the representative value inside the class
    //x is what is passed into function in main
    //this function assigns value x to private member mX
    arithmetic.mX = x;
}

void arithmetic::setY(double &y){
    //x is what is passed into function in main
    //this function assigns value y to private member mY
    arithmetic.mY = y;
}

double getX(){
    //accessor, that allows the user to know what the X is from outside the class
    return mX;
}

double getX(){
    //accessor, that allows the user to know what the Y is from outside the class
    return mY;
}
*/



int main(){

    //instance of class a (a is an object of type class stack)
    stack a;

    if (!a.isEmpty()){
        //a.push(4);
        for (int i = 0; i < 19; i++){
                    a.push(5);
        }
        double number = a.pop();
        cout << number << endl; //  a.~stack() << endl;
        cout << a.isEmpty() << endl;
    }
    char operation;
    cout << "What operation would you like to perform to the top two elements of this stack?" << endl;
    cin >> operation;

    ///CREATE SWITCH STATEMENT HERE WITH OPERATIONS
    return 0;
}
