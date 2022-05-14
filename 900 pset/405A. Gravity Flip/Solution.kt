fun solve() {
    val n = readN()

    if (n == 1) {
        println(readln())
    } else {
        val ans = readInts().sorted().joinToString(" ")
        println(ans)
    }
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()