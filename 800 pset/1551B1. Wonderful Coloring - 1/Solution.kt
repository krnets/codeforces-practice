fun solve() {
    val letters = readln()
    val freq = IntArray(128)
    var redCount = 0

    for (c in letters) {
        if (freq[c.code] <= 1)
            redCount++

        freq[c.code]++
    }

    println(redCount / 2)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = repeat(readN()) { solve() }