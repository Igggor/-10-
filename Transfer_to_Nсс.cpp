#include <iostream>
#include <string>

using namespace std;
const char* m_num = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int len_num(int num, int base){
    int lenght = 0;
    while (num != 0){
        num /= base;
        ++lenght;
    }
    return lenght;
}

void itoa(char* buf, int num, int base){
    int length = len_num(num, base);

    int count = length;
    while(num != 0){
        int rem = num % base;
        num /= base;
        char symbol = m_num[rem];
        buf[--count] = symbol;
    }
    buf[length] = 0;
}

int main()
{
    int num = 193100;
    char str[256] = {};
    itoa(str, num, 2);
    cout << str;
    return 0;
}
