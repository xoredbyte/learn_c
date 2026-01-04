#include <stdio.h>
#include <unistd.h>

/* Global variables */
char g_data[] = "DATA";      // .data
char *g_ro = "RODATA";       // pointer in .data, string in .rodata
int g_bss;                   // .bss

int main() {
    char s_stack[] = "STACK"; // stack (copied from .rodata)
    char *p_stack = "RODATA"; // pointer on stack, string in .rodata

    printf("PID: %d\n", getpid());

    /* Print addresses */
    printf("g_data   : %p\n", g_data);
    printf("g_ro     : %p\n", g_ro);
    printf("g_bss    : %p\n", &g_bss);
    printf("s_stack  : %p\n", s_stack);
    printf("p_stack  : %p\n", &p_stack);

    puts("Press Enter to inspect /proc/<pid>/maps");
    getchar();
    return 0;
}
