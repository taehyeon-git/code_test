#include <stdio.h>
#include <string.h>

int main() {
    char str[100005];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {   
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' + 13) % 26;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' + 13) % 26;
        }
    }

    printf("%s", str);  
    return 0;
}