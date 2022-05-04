fun solve() {
    val n = readInt()
    val stones = readln()
    val ans = (1 until n).count { i -> stones[i] == stones[i - 1] }

    println(ans)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun main() = solve()
