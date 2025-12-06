#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char kt;
    int demKyTu = 0;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin); // nhập chuỗi
    str[strcspn(str, "\n")] = '\0'; // loại bỏ ký tự xuống dòng

    printf("Nhap ky tu muon tim trong chuoi: ");
    scanf(" %c", &kt); // thêm khoảng trắng để bỏ qua ký tự thừa

    // Đếm số lần xuất hiện của kt trong str
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == kt) {
            demKyTu++;
        }
    }

    if (demKyTu > 0) {
        printf("Ky tu '%c' xuat hien %d lan trong chuoi \"%s\".\n", kt, demKyTu, str);
    } else {
        printf("Khong tim thay ky tu '%c' trong chuoi \"%s\".\n", kt, str);
    }

    return 0;
}
