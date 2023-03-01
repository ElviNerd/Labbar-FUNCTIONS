#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include "safeinput.h" 

  /*Skapa ett program med en ny funktion som heter plussaTalMindre100.
Metoden skall ta emot två inparametrar av typen int.
Addera alla tal som är mindre än 100
Returnera det nya värdet
Anropa den nya metoden frånm main - lägg resultatet i en ny variabel, och skriv ut på skärmen.
Ex: plussaTalMindre100( 50,90 ) -> 140
plussaTalMindre100( 150,90 ) -> 90
plussaTalMindre100( 150,190 ) -> 0

/1.
int addNumbers(tal1, tal2){
int result=0;
if (tal1<100)
    result+= tal1;
if (tal2<100)
    result+=tal2;
    return result;


}
int main(){
int result =0;
int tal1;
int tal2;
printf("Give me a number ");
scanf("%d", &tal1);
printf("Give me another number ");
scanf("%d", &tal2);
result = addNumbers(tal1, tal2);
printf("Det blev siffran %d", result);
}



Skapa en metod som räknar ut hur mycket momsen blir på en viss summa. Endast normal (25%) sats
Summan skall vara en inparameter av typen float.
Metoden skall returnera momsvärdet (också float)
Skriv kod som matar in: Ange pris inkl moms
Sen anropar du funktionen, får resultat och lägger i en variabel. Och sen skriver du ut
Om varan kostar 100 kr är 20 kr moms

//2.
float calculateVat(float vatPrice){
return vatPrice*0.25;
}


float main(){
float price;
printf("Ange pris inkl moms: \n");
scanf("%f", &price);
float vat = calculateVat(price);
printf("Varan kostar %f, varav %f är moms", price, vat);
}


void adultOrNot(){
int age;
printf("How old are you?");
scanf("%d", &age);
if (age>=18)
    printf("You are an adult");
else if(age<=18)
    printf("You are not an adult");
}
int main(){
adultOrNot();
}

Skapa en metod som du döper till hittaLangstaOrdet.
Metoden skall ta tre strängar och returnera det LÄNGSTA (char *)
Skriv kod som matar in tre texter och anropar funktionen sen*/
/*
char *hittaLangstaOrdet(char *word1,char *word2, char*word3){
    if(strlen(word1)>strlen(word2) && strlen(word1)>strlen(word3))
        printf("The longest word is %s ", word1);
    else if((strlen(word2)>strlen(word1)) && (strlen(word2)>strlen(word3)))
        printf("The longest word is %s ", word2);
    else if((strlen(word3)>strlen(word1)) && (strlen(word3)>strlen(word2)))
        printf("The longest word is %s ", word3);
    else
        printf("There are more than one word with the longest length");
}

void main(){
char word1[20], word2[20], word3[20];
printf("Enter three different words:\n");
scanf("%s %s %s", word1, word2, word3);
char longest = hittaLangstaOrdet( word1, word2, word3);
}

int taxesOnSalary(int salary, int vatRate){

if (salary >=30000)
    vatRate = salary * 0.31;
else if(salary< 15000)
    vatRate = salary * 0.12;
else if(salary<30000)
    vatRate = salary*0.28;
else 
    printf("YOu need to type in a valid salary");
return vatRate;
}

int main(){
int vatRate;
int salary = 0;
printf("How much do you earn?\n");
scanf("%d", &salary);
vatRate = taxesOnSalary(salary, vatRate);
printf("Your monthly vat rate of your salary is: %d", vatRate);
}


int charactersTot(characters){
int consonants;
int vowel;
int characters= consonants + vowel;
return characters;
}

int main(){
    char text[100];
    int vowel =0;
    int consonants=0;
    
    printf("Enter any text\n");
    fgets(text, sizeof(text), stdin);

    for(int i=0; text[i] != '\0'; i++){
        if(tolower(text[i]) =='a'|| tolower(text[i])=='e' || tolower(text[i]) =='i' ||tolower(text[i])=='o' ||tolower(text[i]) =='u' ||tolower(text[i]) =='y')
            vowel++;
        else
            consonants++; 
    }
    int characters=charactersTot(characters);
    printf("The text contains %d vowels and %d characters.\n ", vowel, charactersTot());

}

//COUNT VOWELS & CHARACTERS
bool isVowel(char ch){
    tolower(ch);
    if( ch == 'a'  || 
        ch == 'o' || 
        ch == 'u' ||
        ch == 'å' ||
        ch == 'e' ||
        ch == 'i' ||
        ch == 'y' ||
        ch == 'ä' ||
        ch == 'ö' ) 
            return true;
    return false;
}


int countVowels(char *s){
    int counter = 0;
    for(int i=0; i < strlen(s);i++){
        char ch = s[i]; // define ch as each letter in array s
        if(isVowel(ch))
            counter++;
    }
    return counter;
}


int countCharacters(char *s){
    int counter = 0;
    for(int i=0; i < strlen(s);i++){
        char ch = s[i];
        if(isalnum(ch))
            counter++;
    }
    return counter;

}

bool isConsonant(char ch){
    return isalpha(ch) && !isVowel(ch);
}
void main(){
   // system("cls");
    SetConsoleOutputCP(65001);
    //Vokaler
    char ch = 'A';
    bool b = isVowel(ch);
    printf("%c\n", ch); //'a'
    char txt[100];

    fgets(" %s", txt);
    
    int vowelCount = countVowels(txt);
    printf("Your text is %d characters and contains %d vowels", 
        countCharacters(txt), 
        vowelCount );
}


//RÖVARSPRÅKET dubbla varje konsonant & placera "o" mellan dessa.

bool isVowel(char ch){
    tolower(ch);
    if( ch == 'a' ||
        ch == 'e' ||
        ch == 'i' ||
        ch == 'o' ||
        ch == 'y' ||
        ch == 'å' ||
        ch == 'ä' ||
        ch == 'ö')
        return true;
    return false;
}

void translateToPirate(char *input, char *output){ //* för att komma åt input och ändra..
    for(int i= 0; i<strlen(input); i++){
        if(isalpha(input[i]) && !isVowel(input[i])){
            int lastIndex = strlen(output);
            output[lastIndex] = input[i];
            output[lastIndex + 1] = 'o';
            output[lastIndex + 2] = input[i];
            output[lastIndex + 3] = 0;} //lägger till en nolla allra sist, annars ignoreras den och loopen körks om.
        else{
            int lastIndex = strlen(output);
            output[lastIndex] = input[i];
            output[lastIndex + 1] = 0; 
        }

    }
}


void main(){
SetConsoleOutputCP(65001);
char input[100];
char output [100] = "";
GetInput("Input text ", input, sizeof(input));
translateToPirate(input, output);

printf("Your text %s in Rövarspråket is %s", input, output);

}

//SWAP VALUES IN VARIABLES
void swap(int *p1, int *p2){

int temp = *p1; //*p1 värdet läggs i en temporär variabel.
*p1= *p2; //*p1 kan sen tryggt sno p2 värde
*p2 = temp;

}
int main(){
int i=1;
int j=2;
int *p1 = &j;
int *p2 = &i;
void swap(int *p1,int *p2);

printf("%d %d %d %d", *p1, *p2, i, j); //Dereferencing
}


//RETURN & MODIFY  Change salary in a different function:
bool addBonus(int *salary, int age){
    if (age >50 && *salary>30000){
       *salary *= 1.10; //increase salary by 10%
        return true;}
    else
        return false;
}

void main(){
int age;
int salary = 38000;
printf("How old are you?\n");
scanf("%d", &age);
if(addBonus(&salary, age))
    printf("Your new salary after bonus %d", salary);
else
    printf("Unfortunetly you do not recieve a bonus, salary remains %d", salary);
}


//MODIFY A STRING

void capitalLetter(char *sentence){
int i;
int sentencelen= strlen(sentence); // VI BEHÖVER EN INT ATT JÄMFÖRA i MED!
sentence[0] = toupper (sentence[0]);

    for(i=1; i < strlen(sentence); i++){ //Här börjar vi nu gå igenom bokstäver från 2:a bokstaven 
                                             //då vi redan ändrat på första
        if (sentence[i-1] == ' ')  //om det är en mellanrum innan ett [i] så blir det en stor bokstav
            sentence[i] = toupper(sentence[i]);
    }
}

void main(){
char sentence[200];

GetInput("Write a sentence:\n", sentence, sizeof(sentence));
capitalLetter(sentence);
printf("Sentence in capital letters: %s", sentence);
return 0;
}
 // Stefans version MODIFY A STRING 
void titleCase(char *txt){
    bool beforeWasSpace = true;

    for(int i = 0; i < strlen(txt); i++){
        if(beforeWasSpace)
            txt[i] = toupper(txt[i]);
        if(txt[i] == ' ')
            beforeWasSpace = true;
        else
            beforeWasSpace = false;
    }
}

void main(){
    char s[100] = "stefan holmberg heter jag";
    titleCase(s);
    printf("%s\n",s);


*/



