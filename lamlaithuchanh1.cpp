#include <stdio.h>

int main() {
    printf("%-5s %-20s %-8s %-8s %-8s %-8s %-8s\n", "STT", "Ho va Ten", "Toan", "Vat Ly", "Hoa", "Sinh", "Diem TB");
    printf("%-5d %-20s %-8.1f %-8.1f %-8.1f %-8.1f %-8.1f\n", 1, "Nguyen Van A", 7.5, 7.0, 5.5, 8.5, 7.5);
    printf("%-5d %-20s %-8.1f %-8.1f %-8.1f %-8.1f %-8.1f\n", 2, "Nguyen Van B", 7.0, 8.5, 9.0, 5.0, 6.5);
    printf("%-5d %-20s %-8.1f %-8.1f %-8.1f %-8.1f %-8.1f\n", 3, "Nguyen Van C", 6.5, 7.2, 6.5, 10.0, 5.5);

    return 0;
}
