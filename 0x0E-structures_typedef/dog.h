#ifndef DOG_H
#define DOG_H
/**
 * dog_t - typedef for struct dog
 * @name: Charlie
 * @age: 5 years
 * @owner: Olamide
 */
typedef struct dog dog_t;

/**
 * struct dog -i struct that stores some information of my dog
 * @name: my dog's name
 * @age: my dog's age
 * @owner: the owner of the dog
 *
 * Addtional information: this struct called "dog" stores all the dog details
 * such as name, age, owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
