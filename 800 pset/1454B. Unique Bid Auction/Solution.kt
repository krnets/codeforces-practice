fun solve() {
    val n = readN()
    val bids = readInts()
    val freqMap = bids.groupingBy { it }.eachCount()
    val mn = freqMap.filter { it.value == 1 }.minByOrNull { it.key }

    if (mn == null)
        println(-1)
    else
        println(bids.indexOf(mn.key) + 1)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }