#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - define dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H_ */
