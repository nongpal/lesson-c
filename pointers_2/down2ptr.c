#include <stdio.h>
#include <stdlib.h>

struct animal {
    char *name;
    int n_legs;
};


int compare(const void *elm1, const void *elm2) {
    const struct animal *animal1 = elm1;
    const struct animal *animal2 = elm2;

    if (animal1->n_legs > animal2->n_legs) {
        return 1;
    } else if (animal1->n_legs < animal2->n_legs) {
        return -1;
    }

    return 0;  // return this if animal1->n_legs == animal2->n_legs
}

int main(void) {
    struct animal a[4] = {
        {.n_legs=4, .name="Dog"},
        {.n_legs=2, .name="Monkeys"},
        {.n_legs=4, .name="Cow"},
        {.n_legs=0, .name="Whale"},
    };

    qsort(a, 4, sizeof(struct animal), compare);

    for (int i = 0; i<4; i++){
        printf("%s have %d legs\n", a[i].name, a[i].n_legs);
    }
}
