#include <stdio.h>
void main()
{
   int cdigit;

   printf("Input Digit(0-9) : ");
   scanf("%d",&cdigit);
   switch(cdigit)
   {
	 case 0:
	       printf("Zero\n");
	       break;

	 case 1:
	       printf("One\n");
	       break;
	case 2:
	       printf("Two\n");
	       break;
	case 3:
	       printf("Three\n");
	       break;
	case 4:
	       printf("Four\n");
	       break;
	case 5
	       printf("Five\n");
	       break;
	case 6:
	       printf("Six\n");
	       break;
	case 7:
	       printf("Seven\n");
	       break;
	case 8:
	       printf("Eight\n");
	       break;
	case 9:
	       printf("Nine\n");
	default:
	       printf("Invalid digit. \nPlease try again ....\n");
	       break;
      }
}

