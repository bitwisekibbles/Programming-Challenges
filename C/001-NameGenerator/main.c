#include <time.h>
#include <stdlib.h>
#include <stdio.h>

const char *firstname[] = { "Harrison", "Leonardo", "Del", "Sherwood", "Isaiah", "Andrew", "Conrad", "Edmund", "Roger", "Elden", "Gilbert", "Bob", "Jewel", "Rupert", "Gail", "Horacio", "Adalberto", "Ernie", "Monroe", "Roberto", "Jeremy", "Michael", "Marshall", "Weldon", "Isaias", "Ronnie", "Ira", "Willian", "Joey", "Lewis", "Gary", "Dale", "Desmond", "Ivory", "Brian", "Chris", "Allen", "George", "Humberto", "Cory", "Rogelio", "Mason", "Darwin", "Robert", "Jerrell", "Claudio", "Valentin", "Marty", "Dominick", "Stevie" };

const char *lastname[] = {"Michale", "Galen", "Emil", "Santos", "Jose", "Francis", "Les", "Arron", "Josef", "Morgan", "Bennie", "David", "Eddie", "Glenn", "Jim", "Marcel", "Ernie", "Ezequiel", "Yong", "Mark", "Clarence", "Guillermo", "Shane", "Ezra", "Hipolito", "Raymundo", "Lyle", "Jackson", "Zachary", "Elwood", "Alonzo", "Hershel", "Loyd", "Reyes", "Ignacio", "Tracy", "Felipe", "Gerardo", "Earnest", "Theron", "Young", "Hai", "Newton", "Teddy", "Duncan", "Bobby","Leland", "Juan", "Werner", "Emerson" };


int main(void)
{
    srand(time(NULL));
    
    int first = rand() % 50;
    int last = rand() % 50;
    
    printf("%s %s", firstname[first], lastname[last]);
    
    return 0;
}