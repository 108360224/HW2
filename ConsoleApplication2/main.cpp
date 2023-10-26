// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
void q3_17() {
	int Account = 0;
	float begin = 0.0, charge = 0.0, credit = 0.0, credit_limit = 0;

	printf("Enter account number(-1 to end):");
	while (scanf_s("%d", &Account) == 1 && Account != -1) {
		printf("Beginning balance:");
		scanf_s("%f", &begin);
		printf("Total charges:");
		scanf_s("%f", &charge);
		printf("Total credit:");
		scanf_s("%f", &credit);
		printf("Credit limit:");
		scanf_s("%f", &credit_limit);
		if ((begin + charge - credit) > credit_limit) {
			printf("Account :\t%d", Account);
			printf("Credit limit :\t%.2f", credit_limit);
			printf("Balance :\t%.2f", (begin + charge - credit));
			puts("Credit Limit Exceed.");
		}
		printf("Enter account number(-1 to end):");
	}
}
void q3_18() {
	float sales;
	const float baseSalary = 200.0;
	const float commissionRate = 0.09;

	while (1) {
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sales);

		if (sales == -1) {
			break;
		}

		float earnings = baseSalary + (sales * commissionRate);

		printf("Salary is: $%.2f\n", earnings);
	}

	
}
void q3_19() {
	double principal = 0.00, rate = 0.0, days = 0.0;
	printf("Enter loan principal :(-1 to end)");
	while (scanf_s("%lf", &principal) == 1 && (int)principal != -1) {
		printf("Enter interest rate : ");
		scanf_s("%lf", &rate);
		printf("Enter term of loan in days : ");
		scanf_s("%lf", &days);
		printf("The interest charge is %.2lf\n", (principal*rate*days) / 365);
		printf("Enter loan principal :(-1 to end)");
	}
}
void q3_20() {
	int hours = 0;
	double rate = 0.0;
	printf("Enter # of hours worked (-1 to end ) : ");
	while (scanf_s("%d", &hours) == 1 && hours != -1) {
		printf("Enter hourly rate of worked($00.00) : ");
		scanf_s("%lf", &rate);
		if (hours <= 40) {
			printf("Salary is %.2lf\n", hours*rate);
		}
		else {
			printf("Salary is %.2lf\n", hours*rate + (hours - 40)*(rate / 2));
		}
		printf("Enter # of hours worked (-1 to end ) : ");
	}
}
void q3_33() {
	int hours = 0;
	double rate = 0.0;
	printf("Enter # of hours worked (-1 to end ) : ");
	while (scanf_s("%d", &hours) == 1 && hours != -1) {
		printf("Enter hourly rate of worked($00.00) : ");
		scanf_s("%lf", &rate);
		if (hours <= 40) {
			printf("Salary is %.2lf\n", hours*rate);
		}
		else {
			printf("Salary is %.2lf\n", hours*rate + (hours - 40)*(rate / 2));
		}
		printf("Enter # of hours worked (-1 to end ) : ");
	}
}
void q4_15() {
	const double compound[5] = { 0.1,0.105,0.11,0.115,0.12 };
	for (int i = 0; i < 5; i++) {
		printf("The money after 15 years is %lf  (%lf)\n", 5000 * pow(1 + compound[i], 15), compound[i]);
	}
}
void q4_16() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("%s", "*");
		}
		putchar('\n');
	}

	putchar('\n');

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			printf("%s", "*");
		}
		putchar('\n');
	}

	putchar('\n');

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			printf("%s", " ");
		}
		for (int j = i; j < 10; j++) {
			printf("%s", "*");
		}
		putchar('\n');
	}

	putchar('\n');

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 9; j++) {
			printf("%s", " ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("%s", "*");
		}
		putchar('\n');
	}
}
void q4_27() {
	int limit = 500;
	for (int a = 1; a <= limit; a++) {
		for (int b = a; b <= limit; b++) {
			for (int c = b; c <= limit; c++) {
				if (a * a + b * b == c * c) {
					printf("%d, %d, %d\n", a, b, c);
				}
			}
		}
	}
	
}


void q4_28() {
	int type = 0;
	printf("Enter work type:");
	while (scanf_s("%d", &type) == 1 && type >= 1 && type <= 4) {
		double salary;
		int hour = 0;
		int item = 0;
		switch (type)
		{
		case 1:
			printf("Enter Salary of manager :");
			scanf_s("%lf", &salary);
			printf("Manager's salary is %.2lf \n", salary);
			break;
		case 2:
			
			printf("Enter salary per hour :");
			scanf_s("%lf", &salary);
			printf("Enter work days of week :");
			scanf_s("%d", &hour);
			if (hour <= 40) {
				printf("Salary is %.2lf\n", salary*hour);
			}
			else {
				printf("Salary is %.2lf\n", salary*hour + (hour - 40)*(salary / 2));
			}
			break;
		case 3:
			printf("Enter gross weekly sale :");
			scanf_s("%lf", &salary);
			printf("Salary is %.2lf\n", (double)250.0 + salary * (double)0.057);
			break;
		case 4:
			
			printf("Enter price per item :");
			scanf_s("%lf", &salary);
			printf("Enter item count :");
			scanf_s("%d", &item);
			printf("Salary is %.2lf\n", salary*(double)item);
			break;
		default:
			
			break;
		}
		printf("Enter work type:");
	}
}
void q4_31() {
	for (int i = 0; i < 9; i++) {
		if (i < 5) {
			for (int j = i; j < 4; j++) {
				printf("%s", " ");
			}
			for (int j = 0; j < 2 * i + 1; j++) {
				printf("%s", "*");
			}
		}
		else {
			for (int j = 5; j < i + 1; j++) {
				printf("%s", " ");
			}
			for (int j = i; j < 2 * i + 2 - (i - 5) * 3; j++) {
				printf("%s", "*");
			}
		}
		printf("\n");
	}
}
int main()
{
	q3_17();
	q3_18();
	q3_19();
	q3_20();
	q3_33();
	q4_15();
	q4_16();
	q4_27();
	q4_28();
	q4_31();
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
