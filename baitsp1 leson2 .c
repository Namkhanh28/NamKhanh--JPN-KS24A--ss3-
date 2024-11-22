#include <stdio.h>

int main() {
    char name[50];  // Khai báo một mảng ký tự để lưu tên của người dùng

    printf("Nhập tên của bạn: ");
    scanf("%s", name);  // Yêu cầu người dùng nhập tên

    printf("Xin chào, %s!\n", name);  // In ra lời chào với tên người dùng

    return 0;
}
