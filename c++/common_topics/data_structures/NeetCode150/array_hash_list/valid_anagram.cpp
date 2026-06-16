/******************************************************************************
@@@@@ Valid Anagram @@@@@

Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Input: s = "racecar", t = "carrace"
Output: true

Input: s = "jar", t = "jam"
Output: false

Input: s = "xx", t = "x"
Output: false

*******************************************************************************/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map;
        // iterate through first string and create a frequency map
        //iterate through second string, if char is present in first map
        // decrease the count
        //if count is less than 0, return false. Else return true.
        
        if(s.size()!=t.size())
        {
            return false;   
        }
        for(int i=0; i< s.size(); i++)
        {
           s_map[s[i]]++;
        }
        
        for(int j=0; j<t.size(); j++)
        {
           if(s_map.find(t[j])!=s_map.end())
           {
            s_map[t[j]]--;
            
            if(s_map[t[j]] < 0)
               {
                return false;
               }
           }
           else{ return false;}
        }
        return true;
    }
};


int main()
{
    string s = "xx";
    string t = "x";
    Solution S;
    bool result{false};
    result = S.isAnagram(s, t);
    std::cout<< result<< endl;
    std::cout<<"Hello World";

    return 0;
}