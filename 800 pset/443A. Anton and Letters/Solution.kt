fun solve() {
    val s = readln()
    val set = s.substring(1, s.lastIndex).split(", ").toSet()

    println(if (s.length == 2) 0 else set.size)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
