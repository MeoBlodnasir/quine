/*com1*/
#include <stdio.h>
void func(){/*com2*/}
int main(){char*str="/*com1*/%c#include <stdio.h>%cvoid func(){/*com2*/}%cint main(){char*str=%c%s%c;printf(str, 10, 10, 10, 34, str, 34, 10);return(0);}%c";printf(str, 10, 10, 10, 34, str, 34, 10);return(0);}
