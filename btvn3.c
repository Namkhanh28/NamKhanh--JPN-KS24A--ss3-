#include <stdio.h>

#define PI 3.14  // Khai báo hằng số PI

int main() {
    float ban_kinh, chu_vi, dien_tich;

    // Yêu cầu người dùng nhập bán kính hình tròn
    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &ban_kinh);

    // Tính toán chu vi và diện tích hình tròn
    chu_vi = 2 * PI * ban_kinh;       // Công thức tính chu vi hình tròn
    dien_tich = PI * ban_kinh * ban_kinh;  // Công thức tính diện tích hình tròn

    // In ra kết quả
    printf("Chu vi hình tròn là: %.2f\n", chu_vi);
    printf("Diện tích hình tròn là: %.2f\n", dien_tich);

    return 0;
}
