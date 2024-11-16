
#include<iostream>
using namespace std;
int main() {
    int a, b;
    char s;
    cout << "请输入一组算式:" << endl;
    for (;;)
    {
        cin >> a >> s >> b;
        switch (s)
        {
        case '+': 
            cout << a << "+" << b << "=" << a + b<<endl;
            break;
        case '-':
            cout << a << "-" << b << "=" << a - b << endl;
            break;
        case '/':
            cout << a << "/" << b << "=" << a / b << endl;
            break;
        case '*':
            cout << a << "*" << b << "=" << a / b << endl;
            break;


            default:
            break;
       

        }
    }

    return 0;
}
  
