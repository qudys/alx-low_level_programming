#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Desc: Header file that describes a new struct type struct dog.
 */

/**
 * struct dog - a new type describing a dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
