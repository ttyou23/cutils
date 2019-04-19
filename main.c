#include <stdio.h>
#include <stdlib.h>

#include "base256.h"

void test_base256()
{
    int i, str_len;
    unsigned char *str = "·¢2k";
    wchar_t wstr[]= L"ÖÐÎÄ";
    str_len = wcslen(wstr);
    printf("%d \n", str_len);
    printf("%s \n", wstr);
    for(i=0; i<str_len; i++)
    {
        printf("%d ", wstr[i]);
    }

}

int main()
{
    printf("Hello cutils!\n");
    test_base256();
    return 0;
}
