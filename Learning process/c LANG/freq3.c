#include <stdio.h>
#include <string.h>

int main() {
    char num[20];
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%s", num);

    int n = strlen(num);

    for(int i = 0; i < n; i++){
        int digit = num[i] - '0';
        count[digit]++;
    }

    for(int i = 0; i <= 9; i++){
        if(count[i] != 0){
            printf("%d %d\n", i, count[i]);
        }
    }

    return 0;
}
