#include <iostream>
#include <string>
using namespace std;
class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
};
void Binary::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
int main()
{
    Binary b;
    b.read();
    b.chk_bin();
    return 0;
}