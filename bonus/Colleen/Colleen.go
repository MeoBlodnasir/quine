package main

import "fmt"

/*com1*/
func f() { /*com2*/ }
func main() {
	str := "package main%c%cimport %cfmt%c%c%c/*com1*/%cfunc f() { /*com2*/ }%cfunc main() {%c%cstr := %c%s%c%c%cfmt.Printf(str, 10, 10, 34, 34, 10, 10, 10, 10, 10, 9, 34, str, 34, 10, 9, 10, 10)%c}%c"
	fmt.Printf(str, 10, 10, 34, 34, 10, 10, 10, 10, 10, 9, 34, str, 34, 10, 9, 10, 10)
}
