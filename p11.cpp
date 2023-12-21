//PASCAL S TRIANGLE
#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << std::endl;
    }

    return 0;
}
