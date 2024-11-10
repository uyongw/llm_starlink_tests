#!/bin/bash

echo "Test-case Complexity  Ground"
for n in $(seq 3 32); do
  r=$(./gen.sh $n)
  echo "case_$n $n  $r"
done
