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

