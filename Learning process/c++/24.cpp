#include <iostream>

using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id\n"
             << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of employee is  " << id << "of enp no, " << count << endl;
    }
};
int employee::count;
int main()
{
    employee ayush, ayushg, ayushh;
    // ayush.id=1;
    // ayush.cout=1;can t be done it is private

    ayush.setdata();
    ayush.getdata();

    ayushg.setdata();
    ayushg.getdata();

    ayushh.setdata();
    ayushh.getdata();

    return 0;
}