#include<stdio.h>
#include"header_file.h"
int main()
{
	disp_global();
	global=20;
	disp_global();
	global=0;
	disp_global();
	return 0;
}
