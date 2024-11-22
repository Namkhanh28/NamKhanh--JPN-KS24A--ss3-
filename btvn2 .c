#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Yêu cầu người dùng nhập nhiệt độ theo độ Celsius
    printf("Nhập nhiệt độ theo độ Celsius: ");
    scanf("%f", &celsius);

    // Chuyển đổi nhiệt độ từ độ Celsius sang độ Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hiển thị kết quả
    printf("Nhiệt độ theo độ Fahrenheit là: %.2f\n", fahrenheit);

    return 0;
}
