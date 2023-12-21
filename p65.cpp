// Create a class to represent a bank account, including member variables for
//  account number, name, and balance. Implement file input/output operations
//   to store and retrieve account details.

#include<bits/stdc++.h>
#include<string>
using namespace std;

class sbi{
    long acNo;
    string name;
    int bal;
    public:
    void setData(){
        cout<<"Enter Account No.: ";
        cin>>acNo;
        cout<<"Enter Name: "<<endl;
        //cin>>name;
        //  CIN.IGNORE() LIKHNA JARURI HAI NHI TO ERROR DEGA
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Balance: ";
        cin>>bal;
    }
    void saveData(){
        ofstream bank("sample.txt");
        bank<<acNo<<endl
            <<name<<endl
            <<bal<<endl;
        bank.close();//
    }
    void getData(){
        string a;
        
        ifstream bank;
        bank.open("sample.txt");
        //bank>>a;
        getline(bank,a);
        cout<<"Account No.: "<<a<<endl;
        //cin.ignore();
        //bank>>a;
        getline(bank,a);
        cout<<"Name: "<<a<<endl;
        bank>>a;
        //getline(cin,a);
        cout<<"Balance: "<<a;

    }
};

int main(){
    sbi varun;
    // varun.setData();
    // varun.saveData();
    varun.getData();

    return 0;
}