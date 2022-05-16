fun solve() {
    var (n, m) = readInts()
    var i = 0

    while (n > 0) {
        n--

        if (i % m == 0) {
            n++
        }
        i++
    }

    println(i - 1)
}

fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()