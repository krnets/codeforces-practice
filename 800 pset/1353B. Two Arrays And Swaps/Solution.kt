fun solve() {
    val (n, k) = readInts()
    val a = readInts().sorted().toMutableList()
    val b = readInts().sortedDescending().toMutableList()
    var i = 0

    while (i < k) {
        if (a[i] < b[i]) {
            a[i] = b[i]
                .also { b[i] = a[i] }
        }
        i++
    }
    println(a.sum())
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }