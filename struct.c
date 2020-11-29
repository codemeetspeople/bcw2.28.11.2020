#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[10];
    char gender;
    int age;
} Person;

typedef struct {
    char *name;
    int id;
    int id2;
} Person2;

void describePerson(Person *person) {
    // operator -> for struct pointer

    printf("name: %s\n", person->name);
    printf("gender: %s\n", (person->gender == 'm') ? "male" : "female");
    printf("age: %d\n\n", person->age);
}

void describePersonCopy(Person person) {
    // operator . for struct instance

    printf("name: %s\n", person.name);
    printf("gender: %s\n", (person.gender == 'm') ? "male" : "female");
    printf("age: %d\n\n", person.age);
}

void changePersonName(Person *person, char name[]) {
    char *personName = person->name;

    for ( ; *name != '\0'; name++, personName++ ) {
        *personName = *name;
    }
    *personName = '\0';
}

void changeName(char name[], char newName[]) {
    for ( ; *newName != '\0'; newName++, name++ ) {
        *name = *newName;
    }
    *name = '\0';
}

Person createPerson(char name[], char gender, int age) {
    Person newPerson = {"", gender, age};
    
    changeName(newPerson.name, name);
    return newPerson;
}


int main() {
    Person2 p = {(char*) malloc(20 * sizeof(char)), 1, 2};
    Person2 p2 = {(char*) malloc(50 * sizeof(char)), 2, 2};

    changeName(p.name, "1234567890123456789");
    changeName(p2.name, "12345678901234567891234567890123456789123456789");

    printf("%lu\n", sizeof(p));
    printf("%lu\n", sizeof(p2));

    printf("%s\n", p.name);
    printf("%s\n", p2.name);

    free(p.name);
    free(p2.name);


    // Person john = {"John", 'm', 21};
    // Person jane = {"Jane", 'f', 18};
    // Person mike = createPerson("Mike", 'm', 30);

    // describePerson(&john);
    // describePerson(&jane);
    // describePersonCopy(mike);

    // changePersonName(&john, "Jack");
    // changeName(jane.name, "Mary");

    // describePerson(&john);
    // describePerson(&jane);

    return 0;
}
