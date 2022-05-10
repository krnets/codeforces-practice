fun solve() {
    val s = readln()
    val hasRepeatingSequence = s.take(s.length / 2) == s.takeLast(s.length / 2)

    if (s.length % 2 == 0 && hasRepeatingSequence)
        println("YES")
    else println("NO")
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