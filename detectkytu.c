#include <stdio.h>
#include <string.h>
#include <strings.h>

int main() {
    char str[100];
    char kt[2];
    int count = 0;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';
    printf("Nhap ky tu can dem: ");
    scanf(" %c", &kt[0]);
    kt[1] = '\0';
    for (int i = 0; str[i]; i++) {
        char tmp[2] = {str[i], '\0'};
        if (strcasecmp(tmp, kt) == 0) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi (khong phan biet hoa thuong).\n", kt[0], count);
    return 0;
}
