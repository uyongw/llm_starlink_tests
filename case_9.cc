#include <iostream>                                                             
long long a;

unsigned long long mat[9][9] = {
  { 1,  2,  3,  4,  5,  6,  7,  8,  9, },
  { 10,  11,  12,  13,  14,  15,  16,  17,  18, },
  { 19,  20,  21,  22,  23,  24,  25,  26,  27, },
  { 28,  29,  30,  31,  32,  33,  34,  35,  36, },
  { 37,  38,  39,  40,  41,  42,  43,  44,  45, },
  { 46,  47,  48,  49,  50,  51,  52,  53,  54, },
  { 55,  56,  57,  58,  59,  60,  61,  62,  63, },
  { 64,  65,  66,  67,  68,  69,  70,  71,  72, },
  { 73,  74,  75,  76,  77,  78,  79,  80,  81, },
};

int compute_starlink() {
  unsigned long long ******a5 = (unsigned long long ******)&mat[5][0];
  unsigned long long *********a8 = (unsigned long long *********)&mat[8][0];
  unsigned long long *******a6 = (unsigned long long *******)&mat[6][0];
  unsigned long long **a1 = (unsigned long long **)&mat[1][0];
  unsigned long long ********a7 = (unsigned long long ********)&mat[7][0];
  unsigned long long ***a2 = (unsigned long long ***)&mat[2][0];
  unsigned long long ****a3 = (unsigned long long ****)&mat[3][0];
  unsigned long long *a0 = (unsigned long long *)&mat[0][0];
  unsigned long long *****a4 = (unsigned long long *****)&mat[4][0];
  *a6 = a5;
  *a7 = a6;
  *a2 = a1;
  *a8 = a7;
  *a3 = a2;
  *a4 = a3;
  *a1 = a0;
  *a5 = a4;
  *a0 = a;

  unsigned long long res = *********a8                                                   
    + (unsigned long long)*(*******a8 + 2)
    + (unsigned long long)*(********a8 + 3)
    + (unsigned long long)*(***a8 + 2)
    + (unsigned long long)*(****a8 + 5)
    + (unsigned long long)*(*****a8 + 4)
    + (unsigned long long)*(**a8 + 7)
    + (unsigned long long)*(******a8 + 6)
    ;
  std::cout << std::hex << "0x" << res << std::endl;             
  return 0;
}
int main() {
  a = 0xabcd;                                                                      
  compute_starlink();
                                                                                
  return 0;                                                                     
}