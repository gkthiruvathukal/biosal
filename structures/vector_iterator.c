
#include "vector_iterator.h"

#include <stdlib.h>

void bsal_vector_iterator_init(struct bsal_vector_iterator *self, struct bsal_vector *list)
{
    self->list = list;
    self->index = 0;
}

void bsal_vector_iterator_destroy(struct bsal_vector_iterator *self)
{
    self->list = NULL;
    self->index = 0;
}

int bsal_vector_iterator_has_next(struct bsal_vector_iterator *self)
{
    return self->index < bsal_vector_size(self->list);
}

void bsal_vector_iterator_next(struct bsal_vector_iterator *self, void **value)
{
    *value = bsal_vector_at(self->list, self->index);

    self->index++;
}

