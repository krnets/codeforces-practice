fun solve() {
    var (n, m, x) = readLongs()
    x--

    val row = x % n
    val col = x / n
    val ans = row * m + col + 1

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readLongs() = readStrings().map { it.toLong() }

fun main() = repeat(readN()) { solve() }