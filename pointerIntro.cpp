#include <iostream>
using namespace std;

int main(){

    /*
    int num = 6;
    cout << num << endl << &num << endl;    //prints num and num address

    int *ptr;
    ptr = NULL;

    ptr = &num; //ptr is the address of the number

    cout << ptr << endl;    // prints address

    // you can also dereference a pointer, and it will give you the number not the address
    cout << *ptr << endl;
    // the star does dofferent things:
    //declaration, star indicates that thing is a pointer
    //anywhere else the star is a dereferencing operater, that indicates the thing stored at the address, not the address itself (opposite as declaration)
    */













    int a[5];
    int *ptr2;

    ptr2 = a;       //a by itself (without brackets) represents location
                    //brackets actually perform dereferencing
    cout << a << endl << ptr2 << endl;      //this returns the two same addresses

    for (int i = 0; i < 5; i++){
        a[i] = i;
    }

    cout << *ptr2 << endl << endl;
    cout << *(ptr2+2) << endl << a[2] << endl;      //before dereferencing, increase pointer +2, so will print what is at location of index2 (should print 2

    // if you dont put the star and you do pointer arythemtic, it will just print out adress + 2 locations (so pointer will be 8 bytes bigger)
    cout << ptr2 << endl << ptr2+2 << endl;

    return 0;

}
