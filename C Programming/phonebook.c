#include <stdio.h>
#define size 200

void save();
void more();
void add();
char number[10];
char contact[size];

int main() {
  add();
  return 0;
}
//function for adding name and phone number
void add(){
  int choice;
  printf("Please enter the Contact Name: ");
  scanf("%[^\n]*c",&contact);
  fflush(stdin);
  printf("Please enter the Phone Number: ");
  scanf("%s",&number);
  fflush(stdin);
  more();
}
//this function will take over after user input the name and phone number
void more(){
  int choice;
  printf("Do you want to add more?\n    1. Yes       2.No\nYour choice: ");
  scanf("%d",&choice);
  fflush(stdin);
  printf("-----------------------------------------------------------------");
  if (choice==1) {
    save();
    add();
  }else {
    save();
  }
}
//function for saving phonenumber to a txt file
void save() {
  FILE *fptr;
	fptr = (fopen("D:\\Internship\\Github\\C programming\\phone book\\phonebook.txt","a"));//include your txt file path
	fprintf(fptr,"Name: %s\nPhone Number:%s\n",contact,number);
	fprintf(fptr,"---------------------------\n");
	fclose(fptr);
}
