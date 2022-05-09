fun solve() {
    val s = readInts()
    val caseA = s.take(2).minOf { it } > s.takeLast(2).maxOf { it }
    val caseB = s.take(2).maxOf { it } < s.takeLast(2).minOf { it }

    println(if (caseA || caseB) "NO" else "YES")
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