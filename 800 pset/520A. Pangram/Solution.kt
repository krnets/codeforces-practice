fun solve() {
    readInt()
    val s = readln()

    println(if (s.lowercase().toSet().size == 26) "YES" else "NO")
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
