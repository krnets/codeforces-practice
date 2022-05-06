fun solve() {
    var (a, b) = readInts()
    var years = 0

    while (a <= b) {
        a *= 3
        b *= 2
        years++
    }
    println(years)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun main() = solve()
