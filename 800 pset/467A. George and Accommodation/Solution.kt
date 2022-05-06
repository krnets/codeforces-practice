fun solve() {
    val n = readInt()
    var ans = 0

    repeat(n) {
        val (p, q) = readInts()
        if (q - p >= 2)
            ans++
    }
    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
