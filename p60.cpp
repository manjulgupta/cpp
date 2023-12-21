//  parent can point to its daughter but not vice versa
#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived <<endl;
    }

    void randomP()
    {
        cout << "Dispalying Nothing "<< endl;
    }

};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;


    //BASE:
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived cla
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();
    base_class_pointer->var_base = 3400;
    base_class_pointer->display();
    //base_class_pointer->randomP();    //SAYS NO SUCH MEMBER EXISTS

    //DERIVED:
    DerivedClass *derived_class_pointer;
    //derived_class_pointer = &obj_base;    SAYS NOT POSSIBLE
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}