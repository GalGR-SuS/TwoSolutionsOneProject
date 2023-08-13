#include <stdio.h>
#include "../../SharedProjects/BuildShared_IntermediateShared/Func.h"
#include "../../SharedProjects/BuildShared_IntermediateNotShared/Func.h"
#include "../../SharedProjects/BuildNotShared_IntermediateShared/Func.h"
#include "../../SharedProjects/BuildNotShared_IntermediateNotShared/Func.h"

int main()
{
	printf("I am Project 2!\n");
	BuildShared_IntermediateShared();
	BuildShared_IntermediateNotShared();
	BuildNotShared_IntermediateShared();
	BuildNotShared_IntermediateNotShared();

	return 0;
}
