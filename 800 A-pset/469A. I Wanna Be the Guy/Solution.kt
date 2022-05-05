fun solve() {
    val n = readInt()
    val littleX = readInts().filter { it > 0 }.toSet()
    val littleY = readInts().filter { it > 0 }.toSet()
    val combined = littleX + littleY
    val canPass = combined.size == n
    val ans = if (canPass) "I become the guy." else "Oh, my keyboard!"

    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
