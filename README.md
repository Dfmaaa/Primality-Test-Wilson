# Primality-Test-Wilson
## Proof of Wilson's theorem
It is easy to check the result when p is 2 or 3, so let us assume p > 3. If p is composite, then its positive divisors are among the integers

1, 2, 3, 4, ... , p-1
and it is clear that gcd((p-1)!,p) > 1, so we can not have (p-1)! ≡ -1 (mod p).

However if p is prime, then each of the above integers are relatively prime to p. So for each of these integers a there is another b such that ab ≡ 1 (mod p). It is important to note that this b is unique modulo p, and that since p is prime, a ≡ b if and only if a is 1 or p-1. Now if we omit 1 and p-1, then the others can be grouped into pairs whose product is one showing

2.3.4.....(p-2) ≡ 1     (mod p)

(or more simply (p-2)! ≡ 1 (mod p)). Finally, multiply this equality by p-1 to complete the proof. 
## Compiling
Clone this repository and run make in it. The automatic variables have to be modified if one is not using the GNU coreutils or gcc.
## NOTE
I know I could've made an integer test by doing ⌊cos^2 πx⌋ but I was too lazy.
