## Part 1
```
Show that the square root of 2 is irrational.
```
```
√2 = a / b
2 = a^2 / b^2
2b^2 = a^2
u = b^2
2u = a^2

* a^2 is even
* a is even
a = 2k

* Using 2 = a^2 / b^2:
2 = (2k)^2 / b^2
2b^2 = 4k^2
b^2 = 2(k^2)
v = k^2
b^2 = 2v

* b^2 is even
* b is even

* This means both a and b are divisible by 2
* a and b are not in their simplest forms
* √2 is irrational
```
-- --
```
If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.
```
```
* Proof by exhaustion
n = 25, 25 = 5^2, 25 = 3^2 + 4^2
n = 100, 100 = 10^2, 100 = 8^2 + 6^2
n = 169, 169 = 13^2, 169 = 12^2 + 5^2
* True in all cases
```
-- --
```
The sum of two odd integers is even. 
Hint: By definition, even integers can be expressed as 2n, thus odd integers can be expressed as 2n + 1
```
```
* odd integer 1 = a
* odd integer 2 = b
a = 2n + 1
b = 2m + 1
a + b 
2n + 1 + 2m + 1 
2(m + n + 1)
m + n + 1 = k
2k
* The result is even
```
-- --
```
The sum of an even integer and it's square is even
```
```
a = even integer
a = 2n
2n + (2n)^2
2n + 4n^2
2(n + 2n^2)
n + 2n^2 = k
2k
* The result is even
```
-- -- 
```
If n squared is odd, then n is odd
```
```
* Contraposition:
* if n is not odd then n^2 is not odd

* When n is even
(2k)^2
4k^2
2(2k^2)
p = 2k^2
2p
* n^2 is always even

* When n is odd
(2k + 1)^2
(2k + 1)(2k + 1)
4k^2 + 4k + 1
2(2k^2 + 2k) + 1
p = 2k^2 + 2k
2p + 1
* n^2 is always odd
```
## Part 2
```
Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)
```
```
* Prove base case, n=1:
1 = 1(2n-1)
1 = 1
* We know base case is true, k = base case, check if k+1 is true:
k(2k-1) + (4(k+1)-3) = (k+1)(2(k+1)-1)
2k^2 - k + 4k + 4 - 3 = (k+1)(2k+1)
2k^2 + 3k + 1 = 2k^2 + k +2k + 1
2k^2 + 3k + 1 = 2k^2 + 3k + 1
* k+1 is always true
```
-- --
```
Prove that for any positive integer number n, n^3 + 2n is divisible by 3
```
```
* Prove base case n=1:
* 1^3 + 2n = 3, which is divisible by 3
* k^3 + 2k is divisble by 3
* Check if k+1 is true:
(k+1)^3 + 2(k+1)
(k+1)(k+1)(k+1) + 2k + 2
(k^2 + 2k + 1)(k+1) + 2k + 2
k^3 + 2k^2 + k + k^2 + 2k + 1 + 2k + 2
(k^3 + 2k) + 3k^2 + 3k + 3
* (k^3 + 2k) is divisble by 3 
* 3k^2 + 3k + 3 is divisible by 3
* The whole thing is divisble by 3
* k+1 is always divisible by 3
```
-- --
```
Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers 
Hint: 4^(3+1) = 4 * 4^3 
Hint: If 9^n - 1 = 8m, then 9^n = 8m + 1
```
```
* Prove base case n = 1:
9^1 - 1 
8 
* 9^k - 1 is a multiple of 8
* Try to prove for k+1:
9^(k+1) - 1
9(9^k) - 1
* If 9^k - 1 is a multiple of 8, then:
9^k - 1 = 8m
9^k = 8m + 1
9(8m + 1) - 1
72m + 9 - 1
72m + 8
* k+1 is divisble by 8
```
