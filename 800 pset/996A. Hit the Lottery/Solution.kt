fun solve() {
    var dollars = readInt()
    val denominations = intArrayOf(1, 5, 10, 20, 100)
    var bills = 0

    denominations.reversed().forEach {
        bills += dollars / it
        dollars -= it * (dollars / it)
    }
    println(bills)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
