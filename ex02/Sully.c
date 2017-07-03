#include<stdio.h>
#include<string.h>
#include<unistd.h>
#define Q(x) char s[]=#x;x
Q(int main() {int i = 5;s[20]--;char compil[100] = "/usr/bin/gcc ";char name[] = "Sully_X.c";name[6] = s[20];if (i){fprintf(fopen(name, "w"),"#include<stdio.h>\n#define Q(x) char s[]=#x;x\nQ(%s)\n",s);execle(compil,"-o hey", name);}})

//int main()
//{
//	char s[1000] = "int main(){ i = 6";
//	s[16]--;
//	printf("%s", s);
//}
