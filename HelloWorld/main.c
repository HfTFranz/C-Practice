#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main()
{
    uint8_t name[] = "Hannah";
    uint8_t* pName = name;
    printf("\nHello World and %s\n", name);
    strcpy(pName, "Franz");
    printf("New name is now %s\n", pName);
    return 0;
}
