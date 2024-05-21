#include <stdio.h>
#include <string.h>
#define C_SIZE 50

union Address
{
	char name[C_SIZE];
	char hname[C_SIZE];
	char cityname[C_SIZE];
	char state[C_SIZE];
	char pin[C_SIZE];
};

void main() {
    union Address record1;
    printf("Enter name:");
    getchar();
    gets(record1.name);

    printf("Enter house name:");
    getchar();
    gets(record1.hname);

    printf("Enter city name:");
    getchar();
    gets(record1.cityname);

    printf("Enter state name:");
    getchar();
    gets(record1.state);

    printf("Enter pin:");
    getchar();
    gets(record1.pin);

    printf("Union record1 values ....\n");
    printf(" Name          : %s \n", record1.name);
    printf(" House Name    : %s \n", record1.hname);
    printf(" City Name     : %s \n", record1.cityname);
    printf(" State name    : %s \n", record1.state);
    printf(" Pin       	  : %s \n\n", record1.pin);
}
