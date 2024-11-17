#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
    while(1)
    {
        HWND hWnd=GetForegroundWindow();
        ShowWindow(hWnd,SW_HIDE);
    } 
}
