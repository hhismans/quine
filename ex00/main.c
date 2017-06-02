#include <stdio.h>
/*
	Quine Ex00 (Colleen)
*/
void call(){}
int main()
{
/*
	Second comment
*/
char *a = "#include <stdio.h>%c/*%c%cQuine Ex00 (Colleen)%c*/%cvoid call(){}%cint main()%c{%c/*%c%cSecond comment%c*/%cchar *a = %c%s%c;printf(a,10,10,9,10,10,10,10,10,10,9,10,10,34,a,34,10,10,10,10);%ccall();%creturn (0);%c}%c";printf(a,10,10,9,10,10,10,10,10,10,9,10,10,34,a,34,10,10,10,10);
call();
return (0);
}
