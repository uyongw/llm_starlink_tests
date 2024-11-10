# LLM test cases for programming (C++)

Test case to test LLM's capability for programming with increased complexity.
The program involves:
1.	Initializing an nxn matrix with values from 1 to n^2.
2.	Manipulating pointers with varying levels of indirection to modify the matrix.
3.	Calculating a result based on these manipulations.
4.	Printing specific values derived from the pointer manipulations.


# Cases

| Test-case | Complexity | Ground    |
|-----------|------------|-----------|
| case_3    | 3          | 0xabcf    |
| case_4    | 4          | 0xabd7    |
| case_5    | 5          | 0xabe6    |
| case_6    | 6          | 0xabff    |
| case_7    | 7          | 0xac23    |
| case_8    | 8          | 0xac61    |
| case_9    | 9          | 0xacae    |
| case_10   | 10         | 0xad17    |
| case_11   | 11         | 0xad8c    |
| case_12   | 12         | 0xae22    |
| case_13   | 13         | 0xaee0    |
| case_14   | 14         | 0xafc2    |
| case_15   | 15         | 0xb0aa    |
| case_16   | 16         | 0xb1fc    |
| case_17   | 17         | 0xb355    |
| case_18   | 18         | 0xb4d8    |
| case_19   | 19         | 0xb695    |
| case_20   | 20         | 0xb8b9    |
| case_21   | 21         | 0xba65    |
| case_22   | 22         | 0xbced    |
| case_23   | 23         | 0xbfad    |
| case_24   | 24         | 0xc294    |
| case_25   | 25         | 0xc5ce    |
| case_26   | 26         | 0xc90c    |
| case_27   | 27         | 0xccb7    |
| case_28   | 28         | 0xd0b1    |
| case_29   | 29         | 0xd575    |
| case_30   | 30         | 0xd9e1    |
| case_31   | 31         | 0xdef3    |
| case_32   | 32         | 0xe426    |

# Case generation
Generate all cases
```bash
./genall.sh
```
Or generate one case
```bash
./gen.sh <level of complexity, must be >=3, default 3>
```
