link-https://leetcode.com/problems/greatest-common-divisor-of-strings/
a = 'ABABAB'
b = 'AB'

both are made of 'AB' added multiple times and a+b == b+a .
Therefore GCD will exist for these two.

a= 'ABC'
b= 'A'
a+b = 'ABCA'
b+a = 'AABC'
a+b != b+a so gcd wont exist for these two strings.
Now that we know that GCD exists , another thing to notice is that the length of this GCD string will be the GCD of lengths of given two strings , so we take gcd(len(a),len(b)) and output the first prefix of this length from either of the strings.
string gcdOfStrings(string str1, string str2) {
         return (str1 + str2 == str2 + str1)? str1.substr(0, gcd(size(str1), size(str2))): "";
    }