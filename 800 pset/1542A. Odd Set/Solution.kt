fun solve() {
    val n = readN()
    val (odd, even) = readInts().partition { it % 2 == 0 }

    if (odd.size == even.size && odd.size == n)
        println("Yes")
    else println("No")
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }
fun gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)
fun lcm(a: Int, b: Int): Int = (a * b) / gcd(a, b)

fun main() = repeat(readN()) { solve() }