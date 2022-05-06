fun solve() {
    val n = readInt()
    var list = readInts().sorted()

    for (i in 1 until n)
        if (list[i] - list[i - 1] > 1) {
            println("NO")
            return
        }

    println("YES")
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
