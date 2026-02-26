#include <windows.h> // türkçe karakter için kullandığım kütüphane
#include <stdio.h>   // kütüphane

int main() {

    SetConsoleOutputCP(CP_UTF8); // Standart olan UTF-8
    SetConsoleCP(CP_UTF8);       // windows.h kütüphanesinde bulunan türkçe karakterlerin olduğu sayfaya ulaşıp çağırıyoruz

    printf("İletişim ve Sunum Teknikleri Dersine Hoşgeldiniz\n");

    return 0;
}
