fun solve() {
    var (n, k) = readInts()

    repeat(k) {
        if (n % 10 == 0)
            n /= 10
        else n--
    }
    println(n)
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun main() = solve()
