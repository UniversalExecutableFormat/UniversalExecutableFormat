// --------------------------------------------- MAIN ------------------------------------------------- \\
//                                   official part of LunaCompiler                                      \\
//                                        Authors: LunaTeam                                             \\
// ---------------------------------------------------------------------------------------------------- \\
package main

import (
	"fmt"
	"os"
	//"utils"
)

var args []string = os.Args

func main() {
	typesalocate()
	switch len(args) {
	case 1:
		noargs()
	case 2:
		switch args[1] {
		case "help":
			help()
		case "build", "compile":
			fmt.Println(bcna)
		default:
			fmt.Println(iop)
		}
	case 3:
		switch args[1] {
		case "build", "compile":
			ifile(args[2])
		default:
			fmt.Println(iop)
		}
	default:
		fmt.Println(tma)
	}
}