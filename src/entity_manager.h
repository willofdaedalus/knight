#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H

#include "entity.h"
#include <stdlib.h>

typedef struct {
	size_t count;
	size_t capacity;
	Entity **entities;
} EntityManager;


EntityManager *CreatePool();
void CleanUpPool(EntityManager *manager);
Entity *GetEntityByTag(const EntityManager *manager, Tag tag);
int AddEntityToPool(EntityManager *manager, Entity *entity);

#endif /*ENTITY_MANAGER_H*/