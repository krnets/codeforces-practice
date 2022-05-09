fun solve() {
    val (a, b) = readInts()

    if (a == b)
        println(0)
    else if (
        a > b && (a - b) % 2 == 0 ||
        a < b && (b - a) % 2 == 1
    ) println(1)
    else println(2)
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }
fun gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)

fun main() = repeat(readN()) { solve() }