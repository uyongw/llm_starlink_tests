#include <iostream>                                                             
long long a;

unsigned long long mat[12][12] = {
  { 1,  2,  3,  4,  5,  6,  7,  8,  9,  10,  11,  12, },
  { 13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24, },
  { 25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  36, },
  { 37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,  48, },
  { 49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60, },
  { 61,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72, },
  { 73,  74,  75,  76,  77,  78,  79,  80,  81,  82,  83,  84, },
  { 85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,  96, },
  { 97,  98,  99,  100,  101,  102,  103,  104,  105,  106,  107,  108, },
  { 109,  110,  111,  112,  113,  114,  115,  116,  117,  118,  119,  120, },
  { 121,  122,  123,  124,  125,  126,  127,  128,  129,  130,  131,  132, },
  { 133,  134,  135,  136,  137,  138,  139,  140,  141,  142,  143,  144, },
};

int compute_starlink() {
  unsigned long long ******a5 = (unsigned long long ******)&mat[5][0];
  unsigned long long *********a8 = (unsigned long long *********)&mat[8][0];
  unsigned long long *******a6 = (unsigned long long *******)&mat[6][0];
  unsigned long long **a1 = (unsigned long long **)&mat[1][0];
  unsigned long long ***********a10 = (unsigned long long ***********)&mat[10][0];
  unsigned long long **********a9 = (unsigned long long **********)&mat[9][0];
  unsigned long long ************a11 = (unsigned long long ************)&mat[11][0];
  unsigned long long ********a7 = (unsigned long long ********)&mat[7][0];
  unsigned long long ***a2 = (unsigned long long ***)&mat[2][0];
  unsigned long long ****a3 = (unsigned long long ****)&mat[3][0];
  unsigned long long *a0 = (unsigned long long *)&mat[0][0];
  unsigned long long *****a4 = (unsigned long long *****)&mat[4][0];
  *a6 = a5;
  *a9 = a8;
  *a7 = a6;
  *a2 = a1;
  *a11 = a10;
  *a10 = a9;
  *a8 = a7;
  *a3 = a2;
  *a4 = a3;
  *a1 = a0;
  *a5 = a4;
  *a0 = a;

  unsigned long long res = ************a11                                                   
    + (unsigned long long)*(*******a11 + 4)
    + (unsigned long long)*(**********a11 + 3)
    + (unsigned long long)*(********a11 + 3)
    + (unsigned long long)*(***a11 + 3)
    + (unsigned long long)*(***********a11 + 1)
    + (unsigned long long)*(*********a11 + 5)
    + (unsigned long long)*(****a11 + 10)
    + (unsigned long long)*(*****a11 + 5)
    + (unsigned long long)*(**a11 + 5)
    + (unsigned long long)*(******a11 + 8)
    ;
  std::cout << std::hex << "0x" << res << std::endl;             
  return 0;
}
int main() {
  a = 0xabcd;                                                                      
  compute_starlink();
                                                                                
  return 0;                                                                     
}
