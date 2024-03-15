#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - structure of dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* _DOG_H_ */
