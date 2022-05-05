fun solve() {
    val (k, l, m, n, d) = readLines(5).map { it.toInt() }
    val ans = (1..d).count {
        it % k == 0 || it % l == 0 || it % m == 0 || it % n == 0
    }
    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
