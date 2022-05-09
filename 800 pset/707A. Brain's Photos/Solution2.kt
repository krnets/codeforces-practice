fun solve() {
    val (n, _) = readInts()
    val hasColour = Array(n) { readln() }.any { row ->
        row.any { it in "CMYK" }
    }
    println(if (hasColour) "#Color" else "#Black&White")
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