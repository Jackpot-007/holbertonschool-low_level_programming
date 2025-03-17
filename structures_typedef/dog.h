#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructura dog
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueÃo del perro
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
