//Talia Yehuda ID: 316471978
//When typing ps in xv6 it's runs this code, which called the cps178() command. 

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[]) {
	cps178();
	exit(0);
}

