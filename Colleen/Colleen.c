/*
	com1
*/
#include <stdio.h>
void func(){
/*
	com2
*/
}
int main(){char*str="/*%c%ccom1%c*/%c#include <stdio.h>%cvoid func(){%c/*%c%ccom2%c*/%c}%cint main(){char*str=%c%s%c;printf(str, 10, 9, 10, 10, 10, 10, 10, 9, 10, 10, 10, 34, str, 34, 10);return(0);}%c";printf(str, 10, 9, 10, 10, 10, 10, 10, 9, 10, 10, 10, 34, str, 34, 10);return(0);}
