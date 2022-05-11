fun solve() {
    val n = readN()
    val candies = readInts()
    val sum = candies.sum()

    if (sum % n != 0)
        println(-1)
    else {
        val res = candies.count { sum / n < it }
        println(res)
    }
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }