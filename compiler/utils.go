// --------------------------------------------- UTILS ------------------------------------------------ \\
//                                   official part of LunaCompiler                                      \\
//                                        Authors: LunaTeam                                             \\
// ---------------------------------------------------------------------------------------------------- \\
package main

import (
	"fmt"
	"os"
)

func ShowErr(args ...interface{}) {
	fmt.Print(est)
	for _, arg := range args {
		fmt.Print(arg)
	}
	fmt.Print(ekn)
	os.Exit(1)
}

func ShowErri(i int, args ...interface{}) {
	fmt.Printf("\033[1;91m%d:%s", i, est)
	for _, arg := range args {
		fmt.Print(arg)
	}
	fmt.Print(ekn)
	os.Exit(1)
}