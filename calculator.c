#include <stdio.h>
#include <conio.h>

typedef int bulat;
typedef float pecahan;

void penjumlahan(pecahan a, pecahan b) {
    printf("Hasil %.2f + %.2f adalah %.2f\n", a, b, a + b);
}

void pengurangan(pecahan a, pecahan b) {
    printf("Hasil %.2f - %.2f adalah %.2f\n", a, b, a - b);
}

void pembagian(pecahan a, pecahan b) {
    printf("Hasil %.2f / %.2f adalah %.2f\n", a, b, a / b);
}

pecahan perkalian(pecahan a, pecahan b) {
    return a * b;
}

pecahan pangkat(pecahan a) {
    pecahan b = 1;

    for(int i = 0; i < 2; i++) {
        b *= a;
    }
    return b;
}

pecahan faktorial(pecahan a) {
    if(a == 0) {
        return 1;
    } else {
        return a * faktorial(a-1);
    }
}

void main(){
    bulat pilihan;
    pecahan input1, input2;

    menu:
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Pembagian\n");
        printf("4. Perkalian\n");
        printf("5. Pangkat 2\n");
        printf("6. Faktorial\n");
        printf("7. Keluar\n");
        printf("Pilihan : ");
        scanf("%d", &pilihan);

    switch(pilihan) {
    case 1:
        printf("Masukkan angka 1 : ");
        scanf("%f", &input1);
        printf("Masukkan angka 2 : ");
        scanf("%f", &input2);
        penjumlahan(input1, input2);
        printf("Klik terserah untuk lanjut");
        getch();
        system("cls");
        goto menu;
        break;

    case 2:
        printf("Masukkan angka 1 : ");
        scanf("%f", &input1);
        printf("Masukkan angka 2 : ");
        scanf("%f", &input2);
        pengurangan(input1, input2);
        printf("Klik terserah untuk lanjut");
        getch();
        system("cls");
        goto menu;
        break;

    case 3:
        printf("Masukkan angka 1 : ");
        scanf("%f", &input1);
        printf("Masukkan angka 2 : ");
        scanf("%f", &input2);
        pembagian(input1, input2);
        printf("Klik terserah untuk lanjut");
        getch();
        system("cls");
        goto menu;
        break;

    case 4:
        printf("Masukkan angka 1 : ");
        scanf("%f", &input1);
        printf("Masukkan angka 2 : ");
        scanf("%f", &input2);
        printf("Hasil %.2f * %.2f adalah %.2f\n", input1, input2, perkalian(input1, input2));
        printf("Klik terserah untuk lanjut");
        getch();
        system("cls");
        goto menu;
        break;

    case 5:
        printf("Masukkan angka : ");
        scanf("%f", &input1);
        printf("Hasil pangkat 2 dari %.2f adalah %.2f\n", input1, pangkat(input1));
        printf("Klik terserah untuk lanjut");
        getch();
        system("cls");
        goto menu;
        break;

    case 6:
        printf("Masukkan angka : ");
        scanf("%f", &input1);
        printf("Hasil faktorial dari %.2f adalah %.2f\n", input1, faktorial(input1));
        printf("Klik terserah untuk lanjut");
        getch();
        system("cls");
        goto menu;
        break;

    case 7:
        printf("Terimakasih by 672019252 Gruda Sakti Krida Prastya");
        getch();
        break;

    default:
        printf("Pilihan tidak ada\n");
        printf("Klik terserah untuk lanjut");
        getch();
        system("cls");
        goto menu;
        break;
    }
}
