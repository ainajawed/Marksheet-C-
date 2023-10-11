#include<stdio.h>
#include<conio.h>
main()
{
	printf("\t\t\t\t\aMARKSHEET\n\t\t\t\t---------\n\n\t\t\t      For Class XII\n\t\t\t      _____________ \n\n\n");
    char na[15],fna[15];
    int roll;
    printf("Enter Student\'s name: ");
    gets(na);
    printf("Enter Father\'s name: ");
    gets(fna);
    printf("Enter Roll no.: ");
    scanf("%d",&roll);
    float c,m,p,ph,e,u;
    //c=computer;
	//m=maths;
	//p=p.st;
	//ph=physics;
	//e=english;
	//u=urdu;
	printf("\nEnter the Marks of following Subjects:\n\n  1. Computer= ");
	scanf("%f",&c);
	printf("  2. Maths   = ");
	scanf("%f",&m);
	printf("  3. P.St    = ");
	scanf("%f",&p);
	printf("  4. Physics = ");
	scanf("%f",&ph);
	printf("  5. English = ");
	scanf("%f",&e);
	printf("  6. Urdu    = ");
	scanf("%f",&u);
	if(c<=100&&m<=100&&ph<=100&&e<=100&&u<=100&&p<=50)
	{
		printf("\n\n\n\n\t\t\t  STATEMENT OF MARKS\n\t\t\t  ------------------\n\n\t\t  H.S.C PartII (CLASS XII) EXAMINATION\n\t\t  ____________________________________\n\n\n");
		printf(" NAME            %s\n FATHER\'S NAME   %s\n ROLL NUMBER     %d",na,fna,roll);
		printf("\n\n\n S.NO   SUBJECT\tMAXIMUM MARKS   MINIMUM MARKS   OBTAINED MARKS   REMARKS     \n__________________________________________________________________________\n\n");
		printf("  1    Computer\t     100     \t     40     \t    %.2f\t ",c);
    	if (c>=40)
		printf("Cleared\n");
		else
		printf("Failed\n"); 
		printf("  2    Maths\t     100     \t     40     \t    %.2f\t ",m);
    	if (m>=40)
		printf("Cleared\n");
		else
		printf("Failed\n"); 
		printf("  3    P.St\t     50     \t     20     \t    %.2f\t ",p);
    	if (p>=20)
		printf("Cleared\n");
		else
		printf("Failed\n");
		printf("  4    Physics\t     100     \t     40     \t    %.2f\t ",ph);
    	if (ph>=40)
		printf("Cleared\n");
		else
		printf("Failed\n");
		printf("  5    English\t     100     \t     40     \t    %.2f\t ",e);
    	if (e>=40)
		printf("Cleared\n");
		else
		printf("Failed\n"); 
		printf("  6    Urdu\t     100     \t     40     \t    %.2f\t ",u);
    	if (u>=40)
		printf("Cleared\n");
		else
		printf("Failed\n"); 
		printf("__________________________________________________________________________");
		float om=c+m+p+ph+e+u;
		float per=(om/550)*100;
		printf("\n\n\n\tTotal Marks:     550\n\tObtained Marks:  %.2f\n\tPercentage:      %.2f%%\n\tGrade:           ",om,per);
		if (per>=80)
		printf("A1");
		else
		if (per>=70)
		printf("A");
		else
		if (per>=60)
		printf("B");
		else
		if (per>=50)
		printf("C");
		else
		if (per>=40)
		printf("D");
		else
		printf("F");
		printf("\n\tResult:          ");
		if (c>=40&&m>=40&&p>=20&&ph>=40&&e>=40&&u>=40)
		printf("PASS");
		else
		printf("FAIL");
	}
	else
	printf("\n\n\tInvalid Input!");		
}
		
	
