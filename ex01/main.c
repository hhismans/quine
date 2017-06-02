#include <stdio.h>
#define DATA "#include <stdio.h>%c#define DATA %c%s%c%c#define MAIN int main(){FILE *file = fopen(%cGrace_kid.c%c, %cw%c);fprintf(file, DATA, 10, 34, DATA, 34, 10, 34,34,34,34,10,10);}%cMAIN%c"
#define MAIN int main(){FILE *file = fopen("Grace_kid.c", "w");fprintf(file, DATA, 10, 34, DATA, 34, 10, 34,34,34,34,10,10);}
MAIN
