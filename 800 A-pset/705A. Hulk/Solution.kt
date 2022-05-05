fun solve() {
    val n = readInt()
    val s = (1..n).joinToString(" that ", postfix = " it") { i ->
        if (i % 2 == 0) "I love"
        else "I hate"
    }
    println(s)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
