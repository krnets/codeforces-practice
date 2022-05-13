fun solve() {
    val n = readN()
    val encrypted = readln()
    val sb = StringBuilder()
    var i = 0

    while (i < n) {
        sb.append(encrypted[i])
        i += sb.length
    }

    println(sb)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()