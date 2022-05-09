fun solve() {
    val (n, m) = readInts()
    val arr = Array(n) { readln() }
    var hasColour = false

    arr.forEach { row ->
        if (row.any { it in "CMYK" }) hasColour = true
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