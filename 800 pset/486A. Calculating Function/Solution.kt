fun solve() {
    val n = readLong()
    val ans = if (n % 2 == 0L) n / 2 else (n - 1) / 2 - n

    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
