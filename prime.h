namespace prime {
   bool isPrime(int n) {
       // Every negative number is not prime
       // And 1 isnt prime because he doesnt deserve it
       // (they should make it a prime number)
       if (n <= 1) {
          return false;
       }
       // 2 is a prime number but in the next
       // This is because the next if statement
       // Will say that it isnt
       if (n == 2) {
          return true;
       }
       // All prime numbers (except for 2) are odd
       if (n % 2 == 0) {
          return false;
       }
       // Do the funi
       for (int i = 2; i <= sqrt(n); i++) {
          if (n % i == 0) {
             // number is divisible by another number?!?
	     // that isnt a prime number..
             return false;
           }
       }
       return true;
   }
}
