#include <stdio.h>
#include <string.h>

struct student {
    char name[15];
    char surname[15];
    int number;
    char address[100];
};
//student adinda bir degisken tanimladim icine toplamak istedigim bilgi basliklarini topladim

int main() {
    struct student info[5];
    int i;

    // ogrenci bilgilerini alma
    for (i = 0; i < 5; i++) {
        printf(" %d. Ogrencinin Bilgileri:\n", i+1);
        printf("Ad: ");
        scanf("%s", info[i].name);
        printf("Soyad: ");
        scanf("%s", info[i].surname);
        printf("Numara: ");
        scanf("%d", &info[i].number);
        printf("Adres: ");
        getchar(); // Onceki girdilerden '\n' karakterini okur
        scanf("%[^\n]", info[i].address);
        printf("\n");
        //dongu 5 kez donecek ve 5 ogrencinin bilgilerini klavyeden isteyecek
    }

    // Ogrenci bilgilerini ekrana yazdirma
    printf("Ogrenci Bilgileri:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. OGrenci:\n", i+1);
        printf("Ad: %s\n", info[i].name);
        printf("Soyad: %s\n", info[i].surname);
        printf("Numara: %d\n", info[i].number);
        printf("Adres: %s\n", info[i].address);
        printf("\n");
    }

    return 0;
}

