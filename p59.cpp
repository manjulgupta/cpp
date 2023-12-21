/*
. Padding is introduced in memory allocation to ensure proper 
alignment of data within structures. CPUs have specific memory 
alignment requirements for different types of data. When you
 have a structure containing different data types, the compiler
  might insert "padding bytes" between members to align 
  them according to the CPU's requirements. 

2. Greedy alignment refers to the practice of arranging the 
members of a structure or class in such a way that padding is
 minimized. By placing members with larger alignment 
 requirements before those with smaller alignment requirements,
  you can potentially reduce the amount of padding required.
In languages like C++, where memory layout has a significant
 impact on performance due to cache lines and memory access 
 patterns, arranging members to minimize padding can lead to 
 better memory utilization and potentially improved runtime efficiency.
 */
#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}