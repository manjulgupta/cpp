#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st = "HaPPY Coding! :-) !!";
    // Opening files using constructor and writing it
    ofstream out34("sample.txt"); // Write operation
    out34 << st;
    out34.close();

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample.txt"); // Read operation
    //in >> st2;  //USED TO GET ONLY FIRST WORD
    getline(in, st2);   //FULL LINE
    cout << st2;

    return 0;
}
