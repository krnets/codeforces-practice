fun solve() {
    val n = readN()
    val candies = readInts()
    val count1s = candies.count { it == 1 }
    val count2s = n - count1s

    if ((candies.sum()) % 2 == 1)
        println("NO")
    else {
        val sum = (count1s + 2 * count2s) / 2

        if (sum % 2 == 0 || (sum % 2 == 1 && count1s > 0))
            println("YES")
        else
            println("NO")
    }
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = repeat(readN()) { solve() }