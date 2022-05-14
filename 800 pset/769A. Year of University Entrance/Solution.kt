fun solve() {
    val n = readN()
    val years = readInts().sorted()

    println(years[n / 2])
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()