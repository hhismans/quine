#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#define Q(x) char s[]=#x;x
Q(int main() {int i = 5;s[20]--;char compil[100];sprintf(compil, "gcc -o Sully_%d Sully_%d.c\n", i - 1, i - 1);char name[100];sprintf(name,"Sully_%d.c", i - 1);if (i > 0){
		int pid;int status;
		char prefixe[100] = "./";
		if ((pid = fork()) >= 0)
		{
		if (pid == 0)
		{
			fprintf(fopen(name, "w"),"#include<stdio.h>\n#include<unistd.h>\n#include<string.h>\n#include<stdlib.h>\n#define Q(x) char s[]=#x;x\nQ(%s)\n",s);
			exit(0);
		}
		pid = wait(&status);
		if ((pid = fork()) >= 0)
		{
		if (pid == 0)
		{
			system(compil);
			exit(0);
		}
		name[7]='\n';
	   	name[8] = 0;
		pid = wait(&status);
		system(strcat(prefixe,name));
		}
		}}})
