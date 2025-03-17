#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructura dog
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueÃo del perro
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

#endif /* DOG_H */
