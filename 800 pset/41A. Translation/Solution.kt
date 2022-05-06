fun solve() {
    val s = readln()
    val t = readln().reversed()
    println(if (s == t) "YES" else "NO")
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
