#include <stdio.h>

int main() {
    int usd_to_vnd = 24000; 
    int eur_to_vnd = 26000;  
    int gbp_to_vnd = 30000;  
    int jpy_to_vnd = 180;    
	int vnd_to_usd = 1 / usd_to_vnd; 
    int vnd_to_eur = 1 / eur_to_vnd;
    int vnd_to_gbp = 1 / gbp_to_vnd;
    int vnd_to_jpy = 1 / jpy_to_vnd;

    int amount, choice;
    printf("============== CHUONG TRINH CHUYEN DOI TIEN TE ==============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi (1-8): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:  
            printf("Nhap so tien USD can chuyen doi: ");
            scanf("%d", &amount);
            printf("%d USD = %d VND\n", amount, amount * usd_to_vnd);
            break;
        case 2:  
            printf("Nhap so tien EUR can chuyen doi: ");
            scanf("%d", &amount);
            printf("%d EUR = %d VND\n", amount, amount * eur_to_vnd);
            break;
        case 3:  
            printf("Nhap so tien GBP can chuyen doi: ");
            scanf("%d", &amount);
            printf("%d GBP = %d VND\n", amount, amount * gbp_to_vnd);
            break;
        case 4:  
            printf("Nhap so tien JPY can chuyen doi: ");
            scanf("%d", &amount);
            printf("%d JPY = %d VND\n", amount, amount * jpy_to_vnd);
            break;
        case 5:  
            printf("Nhap so tien VND can chuyen doi: ");
            scanf("%d", &amount);
            printf("%d VND = %d USD\n", amount, amount / usd_to_vnd);
            break;
        case 6:  
            printf("Nhap so tien VND can chuyen doi: ");
            scanf("%d", &amount);
            printf("%d VND = %d EUR\n", amount, amount / eur_to_vnd);
            break;
        case 7:  
            printf("Nhap so tien VND can chuyen doi: ");
            scanf("%d", &amount);
            printf("%d VND = %d GBP\n", amount, amount / gbp_to_vnd);
            break;
        case 8:  
            printf("Nhap so tien VND can chuyen doi: ");
            scanf("%d", &amount);
            printf("%d VND = %d JPY\n", amount, amount / jpy_to_vnd);
            break;
        default:
            printf("Lua chon khong hop le! Vui long chon tu 1 den 8.\n");
    }

    return 0;
}

