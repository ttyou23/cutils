#include <stdio.h>
#include <stdlib.h>

#include "base256.h"

void test_base256()
{
    int i, str_len;
    unsigned char *str = "你a";
    wchar_t wstr[]= L"你a";
    str_len = wcslen(wstr);
    printf("%d \n", str_len);
    printf("%ls \n", wstr);
    for(i=0; i<str_len; i++)
    {
        printf("%x ", wstr[i]);
    }
    printf("\n");

    str_len = strlen(str);
    printf("%d \n", str_len);
    printf("%s \n", str);
    for(i=0; i<str_len; i++)
    {
        printf("%x ", str[i]);
    }
}

int main()
{
    printf("Hello cutils!\n");
    test_base256();
    return 0;
}
