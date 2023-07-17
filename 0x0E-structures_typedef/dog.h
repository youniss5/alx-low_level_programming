#ifndef dog_h
#define dog_h
/**
 * struct dog - structure called dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
