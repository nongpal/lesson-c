#include <stdio.h>

struct data {
	int age;
	char *name;
	char *gf;
};

void set_girlfriend(struct data *o, char *gf_name);

int main(void) {
	struct data Orang = {.name="Nongpal", .age=19};

	set_girlfriend(&Orang, "Finola");

	printf("GF's name: %s\n", Orang.gf);
}

void set_girlfriend(struct data *o, char *gf_name) {
	//(*o).gf = gf_name;
	
	o->gf = gf_name;
}
