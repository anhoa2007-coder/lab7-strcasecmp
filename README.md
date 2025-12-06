# lab7-strcasecmp
---
### 📝 Giải thích chương trình đếm ký tự (không phân biệt hoa thường)
### 📌 Mục đích
 - Chương trình cho phép người dùng nhập một chuỗi và một ký tự, sau đó đếm số lần ký tự đó xuất hiện trong chuỗi không phân biệt chữ hoa và chữ thường.

### ⚙️ Các bước hoạt động
- Khai báo biến
  - char str[100]; → Mảng ký tự để lưu chuỗi nhập vào.

  - char kt[2]; → Mảng ký tự để lưu ký tự cần đếm (thêm '\0' để tạo chuỗi).

  - int count = 0; → Biến đếm số lần xuất hiện.

- Nhập chuỗi

  - Sử dụng fgets(str, sizeof(str), stdin); để nhập chuỗi từ bàn phím.

  - Loại bỏ ký tự xuống dòng '\n' nếu có bằng cách kiểm tra str[len - 1].

- Nhập ký tự cần đếm

  - Dùng scanf(" %c", &kt[0]); để nhập một ký tự.

  - Gán kt[1] = '\0'; để biến kt thành một chuỗi hợp lệ.

- Duyệt chuỗi và so sánh

  - Dùng vòng lặp for (int i = 0; str[i]; i++) để duyệt từng ký tự trong chuỗi.

  - Tạo chuỗi tạm tmp[2] = {str[i], '\0'};.

  - So sánh tmp với kt bằng strcasecmp(tmp, kt):

    - strcasecmp so sánh không phân biệt hoa thường.

    - Nếu bằng nhau → tăng biến count.

- Xuất kết quả

    - In ra số lần ký tự xuất hiện bằng printf.

### 📊 Ví dụ chạy chương trình
```
Nhap chuoi: Hello World
Nhap ky tu can dem: o
Ky tu 'o' xuat hien 2 lan trong chuoi (khong phan biet hoa thuong).
```
### 🔑 Ý nghĩa chính
- `fgets`: nhập chuỗi an toàn, tránh tràn bộ nhớ.

- `strcasecmp`: so sánh chuỗi không phân biệt hoa thường.

- Kỹ thuật tạo chuỗi tạm: giúp so sánh từng ký tự với ký tự nhập vào.
- Gọn hơn thàng `strstr` hay `strlwr` làm dài dòng :))))
