#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
	double x;
	settickets(40);
	
	for(int i =0; i < 90000000; i++){
		x = x + x* 3.14/ 452455 * 1250243;
	}
	exit();
	return 0;
}
