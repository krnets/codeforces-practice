fun solve() {
    val (n, m) = readInts()
    var nextPrime = n + 1

    while (!isPrime(nextPrime))
        nextPrime++

    if (nextPrime == m)
        println("YES")
    else println("NO")
}

fun isPrime(n: Int): Boolean {
    for (i in 2..Math.sqrt(n.toDouble()).toInt())
        if (n % i == 0) return false

    return true
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }
fun gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)

fun main() = solve()