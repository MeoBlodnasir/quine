package main

import (
	"fmt"
	"os"
)

/*com*/
func main() {
	file, _ := os.OpenFile("Grace_kid", os.O_CREATE|os.O_RDWR, 0666)
	str := "package main%c%cimport (%c%c%cfmt%c%c%c%cos%c%c)%c%c/*com*/%cfunc main() {%c%cfile, _ := os.OpenFile(%cGrace_kid%c, os.O_CREATE|os.O_RDWR, 0666)%c%cstr := %c%s%c%c%cfmt.Fprintf(file, str, 10, 10, 10, 9, 34, 34, 10, 9, 34, 34, 10, 10, 10, 10, 10, 9, 34, 34, 10, 9, 34, str, 34, 10, 9, 10, 10)%c}%c"
	fmt.Fprintf(file, str, 10, 10, 10, 9, 34, 34, 10, 9, 34, 34, 10, 10, 10, 10, 10, 9, 34, 34, 10, 9, 34, str, 34, 10, 9, 10, 10)
}/awdwdaw
