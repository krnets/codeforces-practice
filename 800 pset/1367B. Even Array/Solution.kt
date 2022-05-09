fun solve() {
    val n = readInt()
    var countParityMismatchEven = 0
    var countParityMismatchOdd = 0

    readInts().forEachIndexed { index, x ->
        if (index % 2 != x % 2) {
            if (x % 2 == 0)
                countParityMismatchEven++
            else countParityMismatchOdd++
        }
    }

    if (countParityMismatchEven == countParityMismatchOdd)
        println(countParityMismatchOdd)
    else println(-1)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }