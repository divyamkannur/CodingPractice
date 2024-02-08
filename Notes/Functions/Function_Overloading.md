# FUNCTION OVERLOADING

*What is function overloading?*
- using same functionnname for various functions.
- It provides **abstraction**. -> Gives only relavant or necessary information to the user and rest is handled behind the scenes. Hides unnecessary data.
- It provides **polymorphism** -> many forms for the same concept.

EXAMPLE CODE WITH PRINTING INT AND DOUBLE:

void print(int num);
void print(char num);
void print(double num);
void print(string s);
void print_2_str(string s, char str[100]);

void print(int num){
    cout << "printing num" << num;
}

void main()
{
    print(100);// 100
    print(125.5); // 125.5
    print('A'); // char is implicitly promoted to integer and the ASCII value of A is printed. ie; 65
    print(125.5);// 125.5
    print(125.5F); // float argument is passed, but gets promoted to double and prints 125.5
}

----------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------

!!! CAUTION !!!
 While using function overloading, it is essential to handle the default arguments carefully.

EXAMPLE 1:

print(int num = 100);
print(double num);

//definitions for both print(int num) and print(double num);

main(){
    print(); // default arg from print int is called and prints 100
    print(120); // 120
    print(125.56); //125.56
}

-----------------------------------------------------------------------------------------------

EXAMPLE 2:
print(int num);
print(double num= 99.9);

//definitions for both print(int num) and print(double num);

main(){
    print(); // default arg from print double is called and prints 99.9
    print(120); // 120
    print(125.56); //125.56
}

----------------------------------------------------------------------------------------------

EXAMPLE 3:


print(int num= 200);
print(double num= 99.9);

//definitions for both print(int num) and print(double num);

main(){
    print(); // this gives compilation error as it is confused to call the print with int or to call the print with double.
    print(120);
    print(125.56);
}

compilation error: print() is *ambiguous*.