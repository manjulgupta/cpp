#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1={4,0};
    int element, size;
    cout << "Enter the size of your vector" << endl;
    // cin >> size;
    vec1.push_back(6);
    vec1.push_back(9);
    vec1.push_back(5);

    // vector<char> vec2(4);    // 4-element character vector

    vector<int> vec3(vec1); // 4-element vector inherited from vec1
    vector<int> vec4(6, 3); // six times 3
    // cout << vec3.size()<<"<" <<endl;
    // cout << vec1.capacity();
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    //REVERSE ITERATOR EXISTS
    
    vec1.insert(iter, 566);
    cout<<*iter;
    display(vec1);
    vec1.erase(vec1.begin()+1);
    display(vec1);

    return 0;
}