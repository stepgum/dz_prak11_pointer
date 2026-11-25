#include <stdio.h>
#include <stddef.h>   /* для wchar_t и size_t */
#include <locale.h>

#define PRINT_SIZE(T) \
    { \
        T a[2]; \
        printf("%-25s %d байт\n", #T, (int)((char*)&a[1] - (char*)&a[0])); \
    }

int main(void)
{
    setlocale(LC_ALL, "Russian");

    printf("Размеры типов данных:\n\n");

    PRINT_SIZE(char)
        PRINT_SIZE(short int)
        PRINT_SIZE(unsigned short int)
        PRINT_SIZE(int)
        PRINT_SIZE(unsigned char)
        PRINT_SIZE(wchar_t)
        PRINT_SIZE(long long int)
        PRINT_SIZE(size_t)
        PRINT_SIZE(float)
        PRINT_SIZE(double)
        PRINT_SIZE(signed int)

        return 0;
}