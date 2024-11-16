
#include<iostream>
using namespace std;
int main() {
    int a, b;
    char s;
    cout << "请输入一组算式:" << endl;
    for (;;)
    {
        cin >> a >> s >> b;
        if (s == '+') {
            cout << a << "+" << b << "=" << a + b<<endl;
        }
        else if (s == '-') {
            cout << a << "-" << b << "=" << a - b<<endl;
        }
        else if (s == '*') {
            cout << a << "*" << b << "=" << a * b << endl;
        }
        else if (s == '/') {
            cout << a << "/" << b << "=" << a / b<<endl;
        }
    }
    return 0;
}
  