// Do-while loop exercise
// Exercise: Find the First Vowel in a Vector

// Specification: Write a C++ program that uses a do-while loop to find the first English vowel in a hard-coded std::vector of characters. The vector should contain a mixture of vowels and consonants (for example: {'h', 'e', 'l', 'l', 'o'}). The program should print the first vowel found in the vector. If no vowel is found, it should print a message indicating that no vowel was found.

// Instructions

// You will be writing your code within the provided function find_first_vowel(const std::vector<char>&  vec). Do not change the function name or its parameter.

// Do-While Loop: Utilize a do-while loop to iterate through the characters in the provided std::vector<char> named vec.

// Vowel Identification: In each iteration, check if the current character is a lowercase English vowel ('a', 'e', 'i', 'o', 'u').

// Output:

// If a vowel is found, use cout to display: "Vowel found: " followed by the vowel.

// If no vowel is found in the entire vector, display: "No vowel was found".

// Examples: Here are some sample vectors and the expected output:

// For vector {'f','r','a','n','k'}, your function should output: Vowel found: a.

// For vector {'F','R','A','N','K'}, your function should output: No vowel was found.

// For vector {'h','e','l','l','o'}, your function should output: Vowel found: e.

// For an empty vector {}, your function should output: No vowel was found.

// For vector {'x','y','z','o'}, your function should output: Vowel found: o.

// Do Not Add Line Breaks: Please ensure that you do not add std::endl or '\n' to your output.

// Code Placement: Write your code between the comments
// //---- WRITE YOUR CODE BELOW THIS LINE---- and //---- WRITE YOUR CODE ABOVE THIS LINE----.

// Notes

// Ensure your solution works correctly for all the provided examples and considers the case of an empty vector.

// Focus on correctly implementing the do-while loop and the logic for checking each character.

// Your solution should be efficient and neatly formatted to maintain readability.


// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;
void find_first_vowel(const std::vector<char>& vec) {
    int i =0; int count =0;
    if(vec.size()==0)
    {
        cout << "No vowel was found";
    }
    else{
        do
        {
            if(vec.at(i) == 'a')
            {
                cout << "a";
                count++;
            }
            else if(vec.at(i) == 'e')
            {
                cout << "e";
                count++;
            }
            else if(vec.at(i) == 'i')
            {
                cout << "i";
                count++;
            }
            else if(vec.at(i) == 'o')
            {
                cout << "o";
                count++;
            }
            else if(vec.at(i) == 'u')
            {
                cout << "u";
                count++;
            }
            i++;
        }
        while(i< vec.size() && (count == 0));
        if(count ==0)
        {
           cout << "No vowel was found"; 
        }
    }
}
    

int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    
    vector<char> vec = {'F','R','A','N','K'};
    find_first_vowel(vec);
    return 0;
}