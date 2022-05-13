fun solve() {
    val n = readN()
    var ans = 1

    while (ans * ans < n) {
        ans++
    }

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }