/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
Time complexity: O(n^2 * k) where n is the number of strings and k is the length of the longest string. 
We are comparing each string with every other string, which gives us O(n^2) and for each comparison we are checking if they are anagrams, which takes O(k) time.
Space complexity: O(n * k) where n is the number of strings and k is the length of the longest string.
 We are storing the anagrams in a vector of vectors, which can take up to O(n * k) space in the worst case when all strings are anagrams of each other.

*******************************************************************************/

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

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

int main()
{
    string s = "cat";
    string t = "act";
    vector<vector<string>> final_vector;
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};
    for(int i=0; i< strs.size(); i++)
    {
        vector<string> temp;
        temp.push_back(strs[i]);
        for(int j=i+1; j< strs.size();)
        {
            cout<< strs[i] << " " << strs[j] << endl;
            
            bool res = isAnagram(strs[i], strs[j]);
            cout << "res " << res<< endl;
            if(res)
            {
                temp.push_back(strs[j]);
                strs.erase(strs.begin()+j);
            }
            else{
                j++;
            }
        }
        final_vector.push_back(temp);
    }
    
    for(auto elem : final_vector){
        cout <<" " << endl;
        for(auto val : elem)
        {
            cout << val <<endl;
        }
    }
    return 0;
}