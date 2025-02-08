// Problem: Design a Number Container System
// Implemented two unordered maps, one with the indice as key and the number as the value, another with the number itself as key
// and a set as values which stored all the indices the number can appear on, then modified these two sets according to the two methods.

#include <bits/stdc++.h>
using namespace std;

class NumberContainers {
    public:
        unordered_map<int, set<int>> numberIndice;
        unordered_map<int, int> indiceNumber;
    
        NumberContainers() {
    
        }
        
        void change(int index, int number) {
            if (indiceNumber.count(index)){
    
                int oldNumber = indiceNumber[index];
                numberIndice[oldNumber].erase(index);
    
                if (numberIndice[oldNumber].empty()) numberIndice.erase(oldNumber);
            }
    
            indiceNumber[index] = number;
            numberIndice[number].insert(index);
        }
        
        int find(int number) {
            if (numberIndice.count(number) && !numberIndice[number].empty()) return *numberIndice[number].begin();
    
            else return -1;
        }
    };
    