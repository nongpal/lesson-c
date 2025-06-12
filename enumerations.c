#include <stdio.h>

enum MyEnum {FIRST, SECOND, THIRD};

enum DAYS {
  TUESDAY = 2,
  SUNDAY = 0,
  SATURDAY = 6,
  WEDNESDAY = 3,
  THURSDAY = 4,
  MONDEY = 1,
  FRIDAY = 5,
};

enum ANOTHER_ENUM {
  KEDUA = 2,
  KETIGA,
  KEEMPAT,
};

int main() {
  enum MyEnum MyEnumVar;

  MyEnumVar = SECOND;

  printf("value of enum: %d\n", MyEnumVar);


  enum DAYS theDays;

  theDays = SUNDAY;
  printf("Sunday: %d\n", theDays);

  enum ANOTHER_ENUM another;

  another = KEEMPAT;
  printf("KEEMPAT: %d\n", another);
}
