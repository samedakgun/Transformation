#include<iostream>
#include<fstream>
#include<stdlib.h> 
#include "bus.h"
#include<string.h>

int busA::count=0;

void busA::plus()

{
	count+=1;
}

void busA::minus()
{
	count-=1;
}
void busA::show()
{
	cout<<count;
}


