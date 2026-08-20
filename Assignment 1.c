/*
Q2:Half pyramid of Numbers
1
12
123
1234
12345

Q2:Answer
#include <stdio.h>
int main()
{
	int i,j,rows;
	printf (Enter the Numbers of rows:
"");

    scanf("%d",&rows);
    for(i=1;1<=rows;i++)
    { 
        for(j=1;<=i;j++)
        {
        	printf("%d",j);
		}
		
		printf("\n");
    }
    
   return 0;
}


Q3: Half Pyramid of Alphabets

A
B B
C C C
D D D D
E E E E E

Q3: Answer
#include <iostream>
using namespace std;

int main() {
    for (char i = 'A'; i <= 'E'; i++) {
        for (char j = 'A'; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}


Q4: Inverted Half Pyramid of *

* * * * * *
* * * * *
* * * *
* * *
* *
*

Q4: Answer
#include <iostream>
using namespace std;

int main() {
    for (int i = 6; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


Q5: Inverted Half Pyramid of Numbers

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Q5: Answer
#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}


Q6: Full Pyramid of 
        *
       ***
      *****
     *******
    *********
       
Q6: Answer
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}


Q7: Full Pyramid of Numbers


        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

Q7: Answer
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {

        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }

        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j << " ";
        }

        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}


Q8: Inverted Full Pyramid of 

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

Q8: Answer
#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {

        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}


Q9: Pascal's Triangle


          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
1   5   10  10  5   1

Q9: Answer
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 6; i++) {

        int num = 1;

        for (int j = 0; j < 6 - i; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}


Q10: Floyd's Triangle


1
2 3
4 5 6
7 8 9

Q10: Answer
#include <iostream>
using namespace std;

int main() {
    int num = 1;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
	
	

