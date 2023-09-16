#include <iostream>

#include <string>

using namespace std;
class binary
{
    string s;

public:
    void display(void);
    void check(void);
};
void binary::display(void)
{
    cout << "enter the number" << endl;
    cin >> s;
}
void binary::check(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            /* code */ cout << "not binary" << endl;
            
             
            exit(0);
        }
    }
    /* code */
}
int main()
{

    binary a;
    a.display();
    a.check();

    return 0;
}