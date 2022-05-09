fun solve() {
    val n = readN()
    val list = (n.downTo(1)).toMutableList()
    val mid = n / 2

    list[mid] = list[n - 1].also {
        list[n - 1] = list[mid]
    }
    println(list.joinToString(" "))
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