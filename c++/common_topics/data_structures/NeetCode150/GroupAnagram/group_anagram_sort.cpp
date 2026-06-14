/******************************************************************************
step 1: strs = ["eat", "tea", "tan"]
step 2: sort each string and create a map with sorted string as key and original string as value
eat aet
tea aet
ate aet
tan ant
step 3: iterate through the map and create a vector of vectors with the values of the map.
{
  "aet": ["eat", "tea", "ate"],
  "ant": ["tan", "nat"],
  "bat": ["bat"]
}
Time: O(n * k log k) (sorting each string)
time complexity of sorting string -> O(k log k) where k is the length of the string. We are doing this for n strings, so O(n * k log k)
Space: O(n * k) (storing the sorted string and original string in the map
*******************************************************************************/

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};
    unordered_map<string, vector<string>> my_map;
    for(auto elem : strs){
        string temp_key = elem;
        sort(temp_key.begin(), temp_key.end());
        my_map[temp_key].push_back(elem);
    }

    for (auto &it : my_map) {
        cout << "Key: " << it.first << " -> ";
        for (auto &str : it.second) {
            cout << str << " ";
        }
        cout << endl;
    }
    vector<vector<string>> result;
    for(auto it:my_map)
    {
        result.push_back(it.second);
    }
    
}