// Basic Idea of E-Wallet//
#include <stdio.h>
#include<iostream>
#include <conio.h>
#include <string.h>
#include<stdlib.h>

void bank_services(struct existing_user *);
void bill_payments(void);
void transfer_money(char[]);
void change_pin(void);
class new_user
{
	public: 
		  char name[100];
		  int pin1;
		  long int phone_no;
		  long int amount;
} s1[10], s;

class existing_user
{
	public:
		  char name[30];
		  int pin2;
		  long int phone_no;
		  char Bank[10];
		  long int Balance;
};

existing_user s2[10] = {
			{"shiva", 1006, 1006, "SBI", 60000}, 
			{"sreya", 1007, 1007, "ICICI", 60000}, 
			{"karthik", 1008, 1008, "Kotak", 60000}, 
			{"pavan", 1009, 1009, "Canara", 60000}, 
			{"prakash", 1010, 1010, "Swiss", 60000}
};

existing_user *p, *x = &s2[0];


int main(){
  int main_choice, user, i = 0, temp, l, c;
  long int OTP, temp1;
  system("cls");
  printf("\t   *************************************************************\n");
  printf("\t\t\t\t     E-WALLET\n");
  printf("\t   *************************************************************\n");
  printf("\n\t   1.NEW USER\n\t   2.EXISTING USER\n\n\t   Please Enter your Choice : ");
  scanf("%d", &user);
  if (user == 1)
  {
    printf("\n");
    printf("\t   Please Enter Your Details:\n");
    printf("\t   * Name : ");
    fflush(stdin);
    gets(s1[i].name);
    printf("\t   * phone number : ");
    scanf("%ld", s1[i].phone_no);

    printf("\n\t   An OTP has been sent to above number.\n");
    printf("\t   Enter the OTP number : ");
    scanf("%ld", &OTP);
    if (OTP == 805508)
    {
      printf("\n\t   Account has been created Successfully...!!\n");
    PIN:
      printf("\n\t   Enter a New Pin : ");
      scanf("%d", &s1[i].pin1);
      printf("\t   Re-Enter Pin    : ");
      scanf("%d", &temp);
      if (temp == s1[i].pin1)
      {
        printf("\n\t   * New Pin has been Created\n");
        printf("\t    Logged In Successfully...!!\n");
      }
      else
      {
        printf("\n\t     Pin mismatch.Try again...!\n");
        goto PIN;
      }
    }
    else
    {
      printf("\n\t   You have Entered wrong OTP number\n\t   Sorry Try Again ):");
    }
  }
  else if (user == 2)
  {
  DETAILS:
    printf("\n\t   Enter Name : ");
    fflush(stdin);
    gets(s1[0].name);
    printf("\t   Enter Pin  : ");
    scanf("%d", &s1[0].pin1);

    if (strcmp(s1[0].name, s2[0].name) == 0 && s1[0].pin1 == s2[0].pin2)
    {
      printf("\n\t   Welcome SHIVA..!!\n");
      p = &s2[0];
    }
    else if (strcmp(s1[0].name, s2[1].name) == 0 && s1[0].pin1 == s2[1].pin2)
    {
      printf("\n\t   Welcome SREYA..!!\n");
      p = &s2[1];
    }
    else if (strcmp(s1[0].name, s2[2].name) == 0 && s1[0].pin1 == s2[2].pin2)
    {
      printf("\n\t   Welcome KARTHIK..!!\n");
      p = &s2[2];
    }
    else if (strcmp(s1[0].name, s2[3].name) == 0 && s1[0].pin1 == s2[3].pin2)
    {
      printf("\n\t   Welcome PAVAN TEJA..!!\n");
      p = &s2[3];
    }
    else if (strcmp(s1[0].name, s2[4].name) == 0 && s1[0].pin1 == s2[4].pin2)
    {
      printf("\n\t   Welcome SAI PRAKASH..!!\n");
      p = &s2[4];
    }
    else
    {
      printf("\n\t   Please Enter correct Name and Pin number\n");
      goto DETAILS;
    }

    do
    {
      // system("cls");
      printf("\n\n\t   *************************************************************\n");
      printf("\t\t\t\t  -- MAIN MENU --\n");
      printf("\n\t   1.BANK SERVICES\n\t   2.BILL PAYMENTS\n\t   3.TRANSFER MONEY\n\t   4.CHANGE PIN\n\t   5.EXIT\n");
      printf("\n\t   Please Enter your choice : ");
      scanf("%d", &main_choice);
      switch (main_choice)
      {
      case 1:
        bank_services(p);
        break;
      case 2:
        bill_payments();
        break;
      case 3:
        transfer_money(s1[0].name);
        break;
      case 4:
        change_pin();
        break;
      case 5:
        printf("\n\t   CONFIRM EXIT\n");
        break;
      default:
        printf("\t   Wrong choice!\n\t   Try Again ):");
        break;
      }

    } while (main_choice != 5);
  }
  getch();
  return 0;
}

void bank_services(struct existing_user *p){
  long OTP1, temp;
  int x;
  char x1;
  OTP1 = 805508;
  do
  {
    printf("\n\n\t\t\t\t ***************\n");
    printf("\t\t\t       -- BANK SERVICES --\n");
    printf("\t\t\t\t ***************\n");
    printf("\n\n\t   1.Default Bank Details\n\t   2.Manage account Details\n\t   3.Change Bank account linked\n\t   4.Exit to main menu");
    printf("\n\n\t   Please Enter your choice: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
      printf("\n\t   Username: %s", p->name);
      printf("\n\t   Phone no: %ld", p->phone_no);
      printf("\n\t   Bank    : %s", p->Bank);
      break;

    case 2:
      printf("\n\t   a.Change User name\n\t   b.Change Mobile Number");
      printf("\n\n\t   Enter your choice : ");
      fflush(stdin);
      scanf("%c", &x1);
      if (x1 == 'a')
      {
        printf("\n\t   -----------------------Change Username--------------------\n");
        printf("\n\n\t   Enter new username: ");
        fflush(stdin);
        gets(p->name);
        printf("\n\t   Username has been changed successfully...!!\n");
        printf("\n\t   New username is   : ");
        puts(p->name);
      }
      else if (x1 == 'b')
      {
        printf("\n\t   ----------------------Change Mobile.No--------------------\n");
        printf("\n\t   Enter New Mobile Number: ");
        scanf("%ld", &p->phone_no);
        printf("\n\n\t   An OTP has been sent to above Mobile Number.\n\t   Please Enter the OTP : ");
        scanf("%ld", &temp);
        if (temp == OTP1)
          printf("\n\t   Mobile no. has been changed Successfully...!!");
        else
          printf("\n\t   You have Entered Wrong OTP.Please Try again...!\n");
      }
      else
      {
        printf("\n\t   Invalid choice...! Retry...!");
      }
      break;

    case 3:
      printf("\n\t   ---------------------Change linked Bank-------------------\n");
      printf("\n\n\t   Enter new bank name: ");
      fflush(stdin);
      gets(p->Bank);
      printf("\n\t   Bank link has been changed successfully...!\n");
      printf("\n\n\t   New Bank Linked to your Mobile Number is  ");
      puts(p->Bank);
      break;

    case 4:
      printf("\n\t   Exiting to main menu...");
      break;

    default:
      printf("\n\t   Invalid Choice...!!");
      break;
    }
  } while (x != 4);
  return;
}

void bill_payments(void){
  long int ph, sn, cn;
  int ch;
  char an[20], sp[20];
  float ra, ba;
  do
  {
    printf("\n\n\t\t\t\t   *************\n");
    printf("\t\t\t        -- BILL PAYMENTS --\n");
    printf("\t\t\t\t   *************\n");
    printf("\n\n\t   1.Mobile Recharge\n\t   2.Electricity Bill\n\t   3.Broadband Bill\n\t   4.Water Bill\n\t   5.Exit to main menu\n");
    printf("\n\t   Please Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
      printf("\n\t   Enter Mobile Number : ");
      scanf("%ld", &ph);
      printf("\t   Enter Recharge Amount(in Rupees) : ");
      scanf("%f", &ra);
      printf("\n\t   The number has be recharged with %.2f pack successfully...!!\n", ra);
      break;
    }
    case 2:
    {
      printf("\n\t   Enter Service Number : ");
      scanf("%ld", &sn);
      printf("\t   Enter Account Number : ");
      scanf("%s", &an);
      printf("\t   Enter Bill Amount(in Rupees) : ");
      scanf("%f", &ba);
      printf("\n\t   %.2f amount has been paid Successfully...!!\n", ba);
      break;
    }
    case 3:
    {
      printf("\n\t   Enter name of the Service Provider : ");
      fflush(stdin);
      gets(sp);
      printf("\t   Enter Service Number : ");
      scanf("%f", &sn);
      printf("\t   Enter Account Name : ");
      fflush(stdin);
      gets(an);
      printf("\t   Enter Bill Amount(in Rupees) : ");
      scanf("%f", &ba);
      printf("\n\t   %.2f amount has paid Successfully...!!\n", ba);
      break;
    }
    case 4:
    {
      printf("\n\t   Enter CAN number : ");
      scanf("%ld", &cn);
      printf("\t   Enter Account name : ");
      scanf("%s", &an);
      printf("\t   Enter Bill Amount : ");
      scanf("%f", &ba);
      printf("\n\t   %.2f amount has been paid Successfully...!!\n", ba);
      break;
    }
    case 5:
      printf("\n\t   Exiting to main menu...\n");
      break;
    default:
      printf("\t   Wrong choice!\n\t   Try Again...!\n");
    }
  } while (ch != 5);
}

void transfer_money(char inf[]){
  int i = 0, temp, y = 0;
  do
  {
    printf("\n\n\t\t\t\t  ****************\n");
    printf("\t\t\t\t-- MONEY TRANSFER --\n");
    printf("\t\t\t\t  ****************\n");
    printf("\n\t   1.Transfer Money\n\t   2.Exit to main menu\n");
    printf("\n\n\t   Please Enter your choice: ");
    scanf("%d", &temp);
    if (temp == 1)
    {
      printf("\n\t   Enter the name of the user to transfer: ");
      fflush(stdin);
      gets(s.name);
      for (i = 0; i < 5; i++)
      {
        if (strcmp(s.name, (x + i)->name) == 0 && strcmp(s.name, inf) != 0)
        {
          printf("\n\t   Your current balance        : Rs.%ld", (x + i)->Balance);
          printf("\n\t   Enter the amount to transfer: Rs.");
          scanf("%ld", &s.amount);
          (x + i)->Balance = (x + i)->Balance - (s.amount);
          printf("\n\n\t   Transfer Successful...!!");
          printf("\n\n\t   Your current balance is Rs.%ld ", (x + i)->Balance);
          break;
        }

        else if (strcmp(s.name, (x + i)->name) == 0 && strcmp(s.name, inf) == 0)
        {
          printf("\n\t   Cannot tranfer money to your own account...!");
          printf("\n\t   Please Retry again...!\n");
          break;
        }

        else
          y++;
      }

      if (y == 5)
        printf("\n\t   User not found ! Retry.\n");
    }
  } while (temp != 2);
  return;
}

void change_pin(void){
  int test_pin, new_pin1, new_pin2;
  printf("\n\n\t\t\t\t   ************\n");
  printf("\t\t\t\t -- PIN CHANGE --\n");
  printf("\t\t\t\t   ************\n");
  printf("\n\t   Please enter old pin: ");
  scanf("%d", &test_pin);

  while (test_pin == s1[0].pin1)
  {
    printf("\n\t   Enter new pin    : ");
    scanf("%d", &new_pin1);
  ENTER2:
    printf("\n\t   Re-Enter new pin : ");
    scanf("%d", &new_pin2);
    if (new_pin1 == new_pin2)
    {
      printf("\n\t   Pin Changed Successfully...!!");
      printf("\n\t   Your new pin is %d.\n", new_pin1);
      break;
    }
    else
    {
      printf("\n\t   Pin mismatch! Please Re-Enter.\n");
      goto ENTER2;
    }
  }

  if (test_pin != s1[0].pin1)
    printf("\n\t   Wrong pin. Please try again...!\n");
  return;
}

// Basic Idea of E-Wallet//
#include <stdio.h>
#include<iostream>
#include <conio.h>
#include <string.h>
#include<stdlib.h>

void bank_services(struct existing_user *);
void bill_payments(void);
void transfer_money(char[]);
void change_pin(void);
class new_user
{
	public: 
		  char name[100];
		  int pin1;
		  long int phone_no;
		  long int amount;
} s1[10], s;

class existing_user
{
	public:
		  char name[30];
		  int pin2;
		  long int phone_no;
		  char Bank[10];
		  long int Balance;
};

existing_user s2[10] = {
			{"shiva", 1006, 1006, "SBI", 60000}, 
			{"sreya", 1007, 1007, "ICICI", 60000}, 
			{"karthik", 1008, 1008, "Kotak", 60000}, 
			{"pavan", 1009, 1009, "Canara", 60000}, 
			{"prakash", 1010, 1010, "Swiss", 60000}
};

existing_user *p, *x = &s2[0];


int main(){
  int main_choice, user, i = 0, temp, l, c;
  long int OTP, temp1;
  system("cls");
  printf("\t   *************************************************************\n");
  printf("\t\t\t\t     E-WALLET\n");
  printf("\t   *************************************************************\n");
  printf("\n\t   1.NEW USER\n\t   2.EXISTING USER\n\n\t   Please Enter your Choice : ");
  scanf("%d", &user);
  if (user == 1)
  {
    printf("\n");
    printf("\t   Please Enter Your Details:\n");
    printf("\t   * Name : ");
    fflush(stdin);
    gets(s1[i].name);
    printf("\t   * phone number : ");
    scanf("%ld", s1[i].phone_no);

    printf("\n\t   An OTP has been sent to above number.\n");
    printf("\t   Enter the OTP number : ");
    scanf("%ld", &OTP);
    if (OTP == 805508)
    {
      printf("\n\t   Account has been created Successfully...!!\n");
    PIN:
      printf("\n\t   Enter a New Pin : ");
      scanf("%d", &s1[i].pin1);
      printf("\t   Re-Enter Pin    : ");
      scanf("%d", &temp);
      if (temp == s1[i].pin1)
      {
        printf("\n\t   * New Pin has been Created\n");
        printf("\t    Logged In Successfully...!!\n");
      }
      else
      {
        printf("\n\t     Pin mismatch.Try again...!\n");
        goto PIN;
      }
    }
    else
    {
      printf("\n\t   You have Entered wrong OTP number\n\t   Sorry Try Again ):");
    }
  }
  else if (user == 2)
  {
  DETAILS:
    printf("\n\t   Enter Name : ");
    fflush(stdin);
    gets(s1[0].name);
    printf("\t   Enter Pin  : ");
    scanf("%d", &s1[0].pin1);

    if (strcmp(s1[0].name, s2[0].name) == 0 && s1[0].pin1 == s2[0].pin2)
    {
      printf("\n\t   Welcome SHIVA..!!\n");
      p = &s2[0];
    }
    else if (strcmp(s1[0].name, s2[1].name) == 0 && s1[0].pin1 == s2[1].pin2)
    {
      printf("\n\t   Welcome SREYA..!!\n");
      p = &s2[1];
    }
    else if (strcmp(s1[0].name, s2[2].name) == 0 && s1[0].pin1 == s2[2].pin2)
    {
      printf("\n\t   Welcome KARTHIK..!!\n");
      p = &s2[2];
    }
    else if (strcmp(s1[0].name, s2[3].name) == 0 && s1[0].pin1 == s2[3].pin2)
    {
      printf("\n\t   Welcome PAVAN TEJA..!!\n");
      p = &s2[3];
    }
    else if (strcmp(s1[0].name, s2[4].name) == 0 && s1[0].pin1 == s2[4].pin2)
    {
      printf("\n\t   Welcome SAI PRAKASH..!!\n");
      p = &s2[4];
    }
    else
    {
      printf("\n\t   Please Enter correct Name and Pin number\n");
      goto DETAILS;
    }

    do
    {
      // system("cls");
      printf("\n\n\t   *************************************************************\n");
      printf("\t\t\t\t  -- MAIN MENU --\n");
      printf("\n\t   1.BANK SERVICES\n\t   2.BILL PAYMENTS\n\t   3.TRANSFER MONEY\n\t   4.CHANGE PIN\n\t   5.EXIT\n");
      printf("\n\t   Please Enter your choice : ");
      scanf("%d", &main_choice);
      switch (main_choice)
      {
      case 1:
        bank_services(p);
        break;
      case 2:
        bill_payments();
        break;
      case 3:
        transfer_money(s1[0].name);
        break;
      case 4:
        change_pin();
        break;
      case 5:
        printf("\n\t   CONFIRM EXIT\n");
        break;
      default:
        printf("\t   Wrong choice!\n\t   Try Again ):");
        break;
      }

    } while (main_choice != 5);
  }
  getch();
  return 0;
}

void bank_services(struct existing_user *p){
  long OTP1, temp;
  int x;
  char x1;
  OTP1 = 805508;
  do
  {
    printf("\n\n\t\t\t\t ***************\n");
    printf("\t\t\t       -- BANK SERVICES --\n");
    printf("\t\t\t\t ***************\n");
    printf("\n\n\t   1.Default Bank Details\n\t   2.Manage account Details\n\t   3.Change Bank account linked\n\t   4.Exit to main menu");
    printf("\n\n\t   Please Enter your choice: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
      printf("\n\t   Username: %s", p->name);
      printf("\n\t   Phone no: %ld", p->phone_no);
      printf("\n\t   Bank    : %s", p->Bank);
      break;

    case 2:
      printf("\n\t   a.Change User name\n\t   b.Change Mobile Number");
      printf("\n\n\t   Enter your choice : ");
      fflush(stdin);
      scanf("%c", &x1);
      if (x1 == 'a')
      {
        printf("\n\t   -----------------------Change Username--------------------\n");
        printf("\n\n\t   Enter new username: ");
        fflush(stdin);
        gets(p->name);
        printf("\n\t   Username has been changed successfully...!!\n");
        printf("\n\t   New username is   : ");
        puts(p->name);
      }
      else if (x1 == 'b')
      {
        printf("\n\t   ----------------------Change Mobile.No--------------------\n");
        printf("\n\t   Enter New Mobile Number: ");
        scanf("%ld", &p->phone_no);
        printf("\n\n\t   An OTP has been sent to above Mobile Number.\n\t   Please Enter the OTP : ");
        scanf("%ld", &temp);
        if (temp == OTP1)
          printf("\n\t   Mobile no. has been changed Successfully...!!");
        else
          printf("\n\t   You have Entered Wrong OTP.Please Try again...!\n");
      }
      else
      {
        printf("\n\t   Invalid choice...! Retry...!");
      }
      break;

    case 3:
      printf("\n\t   ---------------------Change linked Bank-------------------\n");
      printf("\n\n\t   Enter new bank name: ");
      fflush(stdin);
      gets(p->Bank);
      printf("\n\t   Bank link has been changed successfully...!\n");
      printf("\n\n\t   New Bank Linked to your Mobile Number is  ");
      puts(p->Bank);
      break;

    case 4:
      printf("\n\t   Exiting to main menu...");
      break;

    default:
      printf("\n\t   Invalid Choice...!!");
      break;
    }
  } while (x != 4);
  return;
}

void bill_payments(void){
  long int ph, sn, cn;
  int ch;
  char an[20], sp[20];
  float ra, ba;
  do
  {
    printf("\n\n\t\t\t\t   *************\n");
    printf("\t\t\t        -- BILL PAYMENTS --\n");
    printf("\t\t\t\t   *************\n");
    printf("\n\n\t   1.Mobile Recharge\n\t   2.Electricity Bill\n\t   3.Broadband Bill\n\t   4.Water Bill\n\t   5.Exit to main menu\n");
    printf("\n\t   Please Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
      printf("\n\t   Enter Mobile Number : ");
      scanf("%ld", &ph);
      printf("\t   Enter Recharge Amount(in Rupees) : ");
      scanf("%f", &ra);
      printf("\n\t   The number has be recharged with %.2f pack successfully...!!\n", ra);
      break;
    }
    case 2:
    {
      printf("\n\t   Enter Service Number : ");
      scanf("%ld", &sn);
      printf("\t   Enter Account Number : ");
      scanf("%s", &an);
      printf("\t   Enter Bill Amount(in Rupees) : ");
      scanf("%f", &ba);
      printf("\n\t   %.2f amount has been paid Successfully...!!\n", ba);
      break;
    }
    case 3:
    {
      printf("\n\t   Enter name of the Service Provider : ");
      fflush(stdin);
      gets(sp);
      printf("\t   Enter Service Number : ");
      scanf("%f", &sn);
      printf("\t   Enter Account Name : ");
      fflush(stdin);
      gets(an);
      printf("\t   Enter Bill Amount(in Rupees) : ");
      scanf("%f", &ba);
      printf("\n\t   %.2f amount has paid Successfully...!!\n", ba);
      break;
    }
    case 4:
    {
      printf("\n\t   Enter CAN number : ");
      scanf("%ld", &cn);
      printf("\t   Enter Account name : ");
      scanf("%s", &an);
      printf("\t   Enter Bill Amount : ");
      scanf("%f", &ba);
      printf("\n\t   %.2f amount has been paid Successfully...!!\n", ba);
      break;
    }
    case 5:
      printf("\n\t   Exiting to main menu...\n");
      break;
    default:
      printf("\t   Wrong choice!\n\t   Try Again...!\n");
    }
  } while (ch != 5);
}

void transfer_money(char inf[]){
  int i = 0, temp, y = 0;
  do
  {
    printf("\n\n\t\t\t\t  ****************\n");
    printf("\t\t\t\t-- MONEY TRANSFER --\n");
    printf("\t\t\t\t  ****************\n");
    printf("\n\t   1.Transfer Money\n\t   2.Exit to main menu\n");
    printf("\n\n\t   Please Enter your choice: ");
    scanf("%d", &temp);
    if (temp == 1)
    {
      printf("\n\t   Enter the name of the user to transfer: ");
      fflush(stdin);
      gets(s.name);
      for (i = 0; i < 5; i++)
      {
        if (strcmp(s.name, (x + i)->name) == 0 && strcmp(s.name, inf) != 0)
        {
          printf("\n\t   Your current balance        : Rs.%ld", (x + i)->Balance);
          printf("\n\t   Enter the amount to transfer: Rs.");
          scanf("%ld", &s.amount);
          (x + i)->Balance = (x + i)->Balance - (s.amount);
          printf("\n\n\t   Transfer Successful...!!");
          printf("\n\n\t   Your current balance is Rs.%ld ", (x + i)->Balance);
          break;
        }

        else if (strcmp(s.name, (x + i)->name) == 0 && strcmp(s.name, inf) == 0)
        {
          printf("\n\t   Cannot tranfer money to your own account...!");
          printf("\n\t   Please Retry again...!\n");
          break;
        }

        else
          y++;
      }

      if (y == 5)
        printf("\n\t   User not found ! Retry.\n");
    }
  } while (temp != 2);
  return;
}

void change_pin(void){
  int test_pin, new_pin1, new_pin2;
  printf("\n\n\t\t\t\t   ************\n");
  printf("\t\t\t\t -- PIN CHANGE --\n");
  printf("\t\t\t\t   ************\n");
  printf("\n\t   Please enter old pin: ");
  scanf("%d", &test_pin);

  while (test_pin == s1[0].pin1)
  {
    printf("\n\t   Enter new pin    : ");
    scanf("%d", &new_pin1);
  ENTER2:
    printf("\n\t   Re-Enter new pin : ");
    scanf("%d", &new_pin2);
    if (new_pin1 == new_pin2)
    {
      printf("\n\t   Pin Changed Successfully...!!");
      printf("\n\t   Your new pin is %d.\n", new_pin1);
      break;
    }
    else
    {
      printf("\n\t   Pin mismatch! Please Re-Enter.\n");
      goto ENTER2;
    }
  }

  if (test_pin != s1[0].pin1)
    printf("\n\t   Wrong pin. Please try again...!\n");
  return;
}

