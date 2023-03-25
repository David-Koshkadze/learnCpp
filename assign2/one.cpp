// კამათლების გაგორება
// #include <iostream>
// #include <stdlib.h>
// #include <time.h>

// using namespace std;

// int main() {
//   int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, face;

//   srand(time(0));

//   for (int i = 1; i <= 20; i++)
//   {
//     face = 1 + rand() % 6;
//     switch (face) {
//     case 1:
//       x1++;
//       break;
//     case 2:
//       x2++;
//       break;
//     case 3:
//       x3++;
//       break;
//     case 4:
//       x4++;
//       break;
//     case 5:
//       x5++;
//       break;
//     case 6:
//       x6++;
//       break;
//     }
//   }
  
//   cout << "one=" << x1 << endl;
//   cout << "two=" << x2 << endl;
//   cout << "three=" << x3 << endl;
//   cout << "four=" << x4 << endl;
//   cout << "five=" << x5 << endl;
//   cout << "six=" << x6 << endl;

//   return 0;
// }


// 1

// #include <iostream>
// #include <stdlib.h>
// #include <time.h>

// using namespace std;

// int main() {
//     int gerbi = 0;
//     int sapasuri = 0;

//     srand(time(0));

//     for (int i = 0; i < 20; i++) {
//         int n = rand() % 2 + 1;     

//         switch (n) {
//             case 1: gerbi++; break;
//             case 2: sapasuri++; break;
//         }   
//     }

//     cout << "Gerbi: " << gerbi << endl;
//     cout << "Sapasuri: " << sapasuri << endl;
// }

// 2

// #include <iostream>
// #include <stdlib.h>
// #include <time.h>

// using namespace std;

// int main() { 
//     int target_count = 0; 

//     int x3 = 0, x5 = 0, x6 = 0;
    
//     srand(time(0)); 
    
//     for (int i = 0; i < 30; i++) {
//         int dice_roll = rand() % 6 + 1; 
//         switch (dice_roll) {
//             case 3:
//                 x3++; break;
//             case 5:
//                 x5++; break;
//             case 6:
//                 x6++; break;
//             default:
//                 break;
//         }
//     }
      
//     cout << "three=" << x3 << endl;
//     cout << "five=" << x5 << endl;
//     cout << "six=" << x6 << endl;

//     return 0;
// }

// 3

// #include <iostream>
// #include <stdlib.h>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter any number from 1 to 5: " << '\n';
//     cin >> n;

//     switch (n) {
//         case 1:
//             cout << "One" << endl;
//             break;
//         case 2:
//             cout << "Two" << endl;
//             break;
//         case 3:
//             cout << "Three" << endl;
//             break;
//         case 4:
//             cout << "Four" << endl;
//             break;
//         case 5:
//             cout << "Five" << endl;
//             break;
//         default:
//             cout << "Invalid input!" << endl;
//             break;
//     }

//     return 0;

// }

// 4

// #include <iostream>
// #include <stdlib.h>

// using namespace std;

// int main() {
//     char symbol;

//     cout << "Enter a symbol (*, %, &, @, $): ";
//     cin >> symbol;

//     switch (symbol) {
//         case '*':
//             cout << "Asterisk" << endl;
//             break;
//         case '%':
//             cout << "Percent" << endl;
//             break;
//         case '&':
//             cout << "Ampersand" << endl;
//             break;
//         case '@':
//             cout << "At sign" << endl;
//             break;
//         case '$':
//             cout << "Dollar sign" << endl;
//             break;
//         default:
//             cout << "Invalid input!" << endl;
//             break;
//     }

//     return 0;
// }

// 5

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int jami = 0;
    int namravli = 1;
    int sashualo = 0;

    for (int i = 1; i < 15; i++) {
        jami = jami + i;
        namravli = namravli * i;
    }        

    sashualo = jami / 15;

    cout << "Jami: " << jami << '\n';
    cout << "Namravli: " << namravli << '\n';
    cout << "Sashualo: " << sashualo << '\n';

}