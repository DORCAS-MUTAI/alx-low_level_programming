#ifndef DOG_H
#define DOG_H
/**
*struct dog - dogs basic info
*@name: parameter 1
*@age: parameter 2
*@owner: parameter 3
*Description: longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
