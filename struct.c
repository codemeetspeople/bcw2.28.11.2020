#include <stdio.h>

typedef struct {
    char name[10];
    char gender;
    int age;
} Person;

// struct Person2 {
//     char *name; 
// };

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
    Person john = {"John", 'm', 21};
    Person jane = {"Jane", 'f', 18};
    Person mike = createPerson("Mike", 'm', 30);

    describePerson(&john);
    describePerson(&jane);
    describePersonCopy(mike);

    changePersonName(&john, "Jack");
    changeName(jane.name, "Mary");

    describePerson(&john);
    describePerson(&jane);

    return 0;
}
