#include <stdio.h>
#include "../../SharedProjects/BuildInProject_IntermediateInProject/Func.h"
#include "../../SharedProjects/BuildInProject_IntermediateInSolution/Func.h"
#include "../../SharedProjects/BuildInSolution_IntermediateInProject/Func.h"
#include "../../SharedProjects/BuildInSolution_IntermediateInSolution/Func.h"

int main()
{
    printf("I am Project 1!\n");
    BuildInProject_IntermediateInProject();
    BuildInProject_IntermediateInSolution();
    BuildInSolution_IntermediateInProject();
    BuildInSolution_IntermediateInSolution();

    return 0;
}
