// Working of logical operators

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);// 1 && 1
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);//1 && 0 Logical AND
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);// 1 || 0 Logical OR
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);// 0 || 0
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b); //!0 Logical NOT
    printf("!(a != b) is %d \n", result);

    result = !(a == b);// !1
    printf("!(a == b) is %d \n", result);
    
    return 0;

}
