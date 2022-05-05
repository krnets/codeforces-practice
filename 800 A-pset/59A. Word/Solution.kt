fun solve() {
    val s = readln()
    val countUpper = s.count { it.isUpperCase() }
    println(if (countUpper > s.length / 2) s.uppercase() else s.lowercase())
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun main() = solve()
