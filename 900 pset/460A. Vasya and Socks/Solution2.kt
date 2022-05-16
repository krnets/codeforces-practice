fun solve() {
    val (n, m) = readInts()
    var i = n + n / (m - 1)

    if (n % (m - 1) == 0)
        i--

    println(i)
}

fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()