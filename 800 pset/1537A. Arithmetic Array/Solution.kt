fun solve() {
    val n = readN()
    val arr = readInts()
    val sum = arr.sum()

    when {
        sum < n -> println(1)
        sum > n -> println(sum - n)
        else -> println(0)
    }
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }