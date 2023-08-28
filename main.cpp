#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    map<string, string> myDictionary;
    myDictionary.insert(pair<string,string>("apple", "der Apfel"));
    myDictionary.insert(pair<string,string>("banana", "die Banane"));
    myDictionary.insert(pair<string,string>("orange", "die Orange, Die Apfelsine"));
    myDictionary.insert(pair<string,string>("strawberry", "die Erdbeere"));

    for (auto pair : myDictionary) {

        cout << pair.first << " - " << pair.second << endl;
    }


    map < char, int> myKeyNumber;

    myKeyNumber.insert (pair<char,int>('a', 4));
    myKeyNumber.insert (pair<char,int>('b', 3));
    myKeyNumber.insert (pair<char,int>('c', 2));
    myKeyNumber.insert (pair<char,int>('d', 5));

    for (auto pair: myKeyNumber){

        cout << pair.first << " - " << pair.second <<endl;
    }

    map <string, int> myDictionary01;
    myDictionary01.insert(pair <string, int>("e", 7));
    myDictionary01.insert(pair <string, int>("f", 8));
    myDictionary01.insert(pair <string, int>("g", 9));
    myDictionary01.insert(pair <string, int>("h", 10));

    for (auto pair: myDictionary01){

        cout << pair.first << " - " << pair.second << endl;

    }







    return 0;
}
