#include <iostream>
#include <string.h>
using namespace std;
const char *strcat(const char *desk,const char *src)
{
   static char concatenated[100]; // Adjust the size as needed
    size_t dest_len = strlen(desk);

    for (size_t i = 0; desk[i] != '\0'; i++) {
        concatenated[i] = desk[i];
    }
 
    for (size_t i = 0; src[i] != '\0'; i++) {
        concatenated[dest_len + i] = src[i];
    }

    concatenated[dest_len + strlen(src)] = '\0';

    return concatenated;
}
int main()
{
    string a, b, c;
    cin >> a >> b;
   const char *x = a.c_str();
    const char *y = b.c_str();
    c = strcat(x, y);
    cout << c;

    return 0;
}