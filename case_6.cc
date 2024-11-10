#include <iostream>                                                             
long long a;

unsigned long long mat[6][6] = {
  { 1,  2,  3,  4,  5,  6, },
  { 7,  8,  9,  10,  11,  12, },
  { 13,  14,  15,  16,  17,  18, },
  { 19,  20,  21,  22,  23,  24, },
  { 25,  26,  27,  28,  29,  30, },
  { 31,  32,  33,  34,  35,  36, },
};

int compute_starlink() {
  unsigned long long ******a5 = (unsigned long long ******)&mat[5][0];
  unsigned long long **a1 = (unsigned long long **)&mat[1][0];
  unsigned long long ***a2 = (unsigned long long ***)&mat[2][0];
  unsigned long long ****a3 = (unsigned long long ****)&mat[3][0];
  unsigned long long *a0 = (unsigned long long *)&mat[0][0];
  unsigned long long *****a4 = (unsigned long long *****)&mat[4][0];
  *a2 = a1;
  *a3 = a2;
  *a4 = a3;
  *a1 = a0;
  *a5 = a4;
  *a0 = a;

  unsigned long long res = ******a5                                                   
    + (unsigned long long)*(***a5 + 3)
    + (unsigned long long)*(****a5 + 4)
    + (unsigned long long)*(*****a5 + 1)
    + (unsigned long long)*(**a5 + 2)
    ;
  std::cout << std::hex << "0x" << res << std::endl;             
  return 0;
}
int main() {
  a = 0xabcd;                                                                      
  compute_starlink();
                                                                                
  return 0;                                                                     
}
