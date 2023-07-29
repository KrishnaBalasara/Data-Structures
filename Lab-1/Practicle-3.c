/* Write a c program to get record (Player name, team name & runs of innings)
of any three players from Indian cricket team. Print the record according to
name of players in ascending order. */

#include<stdio.h>
#include<string.h>
struct crickter{
 char name[10];
 char team[10];
 int runs;
}player[100],temp;
int main() {
 printf("Enter info of 3 players as follow name, team and runs\n");
 for(int i=0; i<3; i++){
 scanf("%s %s %d",player[i].name, player[i].team, &player[i].runs);
 }
 for(int i=0; i<2; i++){
 for(int j=i+1; j<3; j++) {
 if(strcmp(player[i].name, player[j].name)>0) {
 temp=player[i];
 player[i]=player[j];
 player[j]=temp;
 }
 }
 }
 printf("Record of players in ascending order\n");
 printf("---------------------------------------------\n");
 printf("Name\t\t Team name\t\t Runs\n");
 printf("---------------------------------------------\n");

 for(int i=0; i<3; i++){
 printf("%s\t\t %s\t\t\t%d\n", player[i].name ,player[i].team, player[i].runs);
 }
}

/* OUTPUT
Enter info of 3 players as follow name, team and runs
Virat India 200
Rohit India 150
Rahul India 100
Record of players in ascending order
---------------------------------------------
Name Team name Runs
---------------------------------------------
Rahul India 100
Rohit India 150
Virat India 200 */
