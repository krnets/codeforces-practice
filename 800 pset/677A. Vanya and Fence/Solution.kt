fun solve() {
    val (_, h) = readInts()
    val ans = readInts().map { if (it > h) 2 else 1 }.sum()

    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
