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
void print_dog(struct dog *d);
#ifndef _DOG_T_
#define _DOG_T_
/**
 * struct dog_t - new dog type
 * @name: new dog name
 * @owner: new dog owner
 * @age: new dog age
 */
struct dog_t *new_dog(char *name, float age, char *owner)
{
	char *name;
	float age;
	char *owner;
}
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
