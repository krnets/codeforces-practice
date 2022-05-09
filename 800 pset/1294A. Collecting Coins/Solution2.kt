fun solve() {
    val list = readInts().toList()
    val max = list.subList(0, 3).maxOf { it }
    var n = list.last()

    list.subList(0, 3).forEach {
        n -= (max - it)
    }
    println(if (n >= 0 && n % 3 == 0) "YES" else "NO")
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