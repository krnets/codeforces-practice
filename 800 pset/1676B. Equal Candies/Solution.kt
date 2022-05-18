fun solve() {
    readln()
    val candies = readInts().sorted()
    val smallest = candies.first()
    var ans = 0

    for (c in candies)
        ans += (c - smallest)

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }