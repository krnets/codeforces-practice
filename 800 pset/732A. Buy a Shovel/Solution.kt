fun solve() {
    val (k, r) = readInts()
    var buyShovels = 1
    fun calc() = buyShovels * k % 10

    while (calc() != r && calc() != 0)
        buyShovels++

    println(buyShovels)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
