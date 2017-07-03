#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Q(x) char s[]=#x;x
Q(int main() {int i = 4;s[20]--;char compil[100];sprintf(compil, "gcc -o Sully_%d Sully_%d.c\n", i - 1, i - 1);char name[100];sprintf(name,"Sully_%d.c", i - 1);if (i){fprintf(fopen(name, "w"),"#include<stdio.h>\n#include<string.h>\n#include<stdlib.h>\n#define Q(x) char s[]=#x;x\nQ(%s)\n",s);name[7]='\n'; name[8] = 0;puts(compil);name[7] = 0;puts(name);}})
