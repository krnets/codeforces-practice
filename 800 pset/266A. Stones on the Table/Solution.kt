fun solve() {
    val n = readInt()
    val stones = readln()
    var cnt = 0

    for (i in 1 until n)
        if (stones[i - 1] == stones[i])
            cnt++

    println(cnt)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun main() = solve()
