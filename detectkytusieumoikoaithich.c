#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char kt;
    int demKyTu = 0;

    // Nhap chuoi
    printf("Nhap chuoi bat ky: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Loi khi nhap chuoi.\n");
        return 1;
    }
    // Xoa ky tu newline neu co
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // In lai chuoi (nhu terminal trong anh)
    printf("%s\n\n", str);

    // Nhap ky tu muon tim (bo qua khoang trang/newline truoc do)
    printf("Nhap ky tu muon tim trong chuoi: ");
    if (scanf(" %c", &kt) != 1) {
        printf("Loi khi nhap ky tu.\n");
        return 1;
    }

    // Dem so lan xuat hien
    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] == kt) {
            demKyTu++;
        }
    }

    // Xuat ket qua
    if (demKyTu > 0) {
        printf("%c xuat hien %d lan trong chuoi.\n", kt, demKyTu);
    } else {
        printf("Khong tim thay %c trong chuoi %s", kt, str);
    }

    return 0;
}
