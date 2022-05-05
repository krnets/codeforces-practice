fun solve() {
    val ans = generateSequence(readInt() + 1) { it + 1 }.first { year ->
        "$year".map { it }.distinct().count() == 4
    }
    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
