fun solve() {
    val n = readN()
    val bids = readInts()
    val freqMap = IntArray(n + 1)

    for (bid in bids)
        freqMap[bid]++

    val ans = freqMap.indices.firstOrNull { i -> freqMap[i] == 1 } ?: -1

    if (ans < 0)
        println(ans)
    else println(bids.indexOf(ans) + 1)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }