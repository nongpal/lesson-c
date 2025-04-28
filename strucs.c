#include <stdio.h>

struct data {
	char *name;
	int age;
};

//struct data Orang = {"Nongpal", 19};
struct data Orang = {.age=19, .name="Nongpal"};

int main() {
	//Orang.name = "Nongpal";
	//Orang.age = 19;

	printf("Nama: %s\n", Orang.name);
	printf("Umur: %d\n", Orang.age);
}
