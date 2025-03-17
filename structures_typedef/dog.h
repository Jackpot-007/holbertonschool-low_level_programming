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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
