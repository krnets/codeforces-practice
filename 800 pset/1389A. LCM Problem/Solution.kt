fun solve() {
    var (l, r) = readInts()

    if (r % 2 == 1)
        r--
    if (r / 2 >= l)
        println("${r / 2} $r")
    else
        println("-1 -1")
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