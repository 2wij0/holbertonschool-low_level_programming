#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: First member, name of the dog (char *)
 * @age: Second member, age of the dog (float)
 * @owner: Third member, owner of the dog (char *)
 *
 * Description: This structure stores basic identification and
 * age information for a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
