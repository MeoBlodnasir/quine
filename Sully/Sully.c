#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av){
int i = 5;
if (i==0)return 0; if (strchr(av[0], '_')) i--; char*name;char*bin;asprintf(&name, "Sully_%d.c", i);asprintf(&bin, "Sully_%d", i);FILE*file=fopen(name, "w");char*str="#define _GNU_SOURCE%c#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%cint main(int ac, char **av){%cint i = %d;%cif (i==0)return 0; if (strchr(av[0], %c_%c)) i--; char*name;char*bin;asprintf(&name, %cSully_%%d.c%c, i);asprintf(&bin, %cSully_%%d%c, i);FILE*file=fopen(name, %cw%c);char*str=%c%s%c;fprintf(file, str, 10, 10, 10, 10, 10, i, 10, 39, 39, 34, 34, 34, 34, 34, 34, 34, str, 34, 34, 34, 10);fclose(file);char*cmd; asprintf(&cmd, %cgcc -o %%s %%s && ./%%s%c, bin, name, bin);system(cmd);}%c";fprintf(file, str, 10, 10, 10, 10, 10, i, 10, 39, 39, 34, 34, 34, 34, 34, 34, 34, str, 34, 34, 34, 10);fclose(file);char*cmd; asprintf(&cmd, "gcc -o %s %s && ./%s", bin, name, bin);system(cmd);}
