#!/bin/bash
#
# Usage:
# ./gen.sh <level of complexity, must be >=3, default 3>
#

# Complexity level
n=${1:-3}

# Ensure the complexity level is an integer and greater than 3
if ! [[ "$n" =~ ^[0-9]+$ ]]; then
  echo "Error: complexity level must be an integer."
  exit 1
elif [[ "$n" -lt 3 ]]; then
  echo "Error: complexity level must be >= 3."
  exit 1
fi

asterisks0() {
  local n=$(( $1 + 1 ))
  printf "%*s" "$n" | tr " " "*"
}

asterisks1() {
  local n=$1
  printf "%*s" "$n" | tr " " "*"
}

ooo() {
  local a=$1 b=$2
  seq $a $b | awk '{print $0, rand()}' | sort -k2,2 | awk '{print $1}'
}


cat <<EOF > case_$n.cc
#include <iostream>                                                             
long long a;

unsigned long long mat[$n][$n] = {
$(for i in $(seq 0 $(( n-1 ))); do
  echo -n "  {"
  for j in $(seq 1 $n); do
    echo -n " $(( i*n+j )), "
  done
  echo "},"
done)
};

int compute_starlink() {
$(for i in $(ooo 0 $(( n-1 ))); do
  echo "  unsigned long long $(asterisks0 $i)a$i = (unsigned long long $(asterisks0 $i))&mat[$i][0];"
done
for i in $(ooo 1 $(( n-1 ))); do
  echo "  *a$i = a$((i - 1));"
done)
  *a0 = a;

  unsigned long long res = $(asterisks1 $n)a$(( n-1 ))                                                   
$(for i in $(ooo 2 $(( n-1 ))); do
  echo "    + (unsigned long long)*($(asterisks1 $i)a$(( n-1 )) + $(( (RANDOM % $(( n - 2 ))) + 1 )))"
done)
    ;
  std::cout << std::hex << "0x" << res << std::endl;             
  return 0;
}
int main() {
  a = 0xabcd;                                                                      
  compute_starlink();
                                                                                
  return 0;                                                                     
}
EOF

# Ground it
g++ -g -o case_$n case_$n.cc
./case_$n
