//sentence
#include<stdio.h>
int main()
{
// array to store string taken as  input
char sentence[20];
// take user input
printf("enter any sentende :");
//use scanf to teke input
scanf("%[^\n]s", sentence);
// printing the input value
printf("you entered: %s ",sentence);
return 0;
}
