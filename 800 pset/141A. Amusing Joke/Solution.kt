fun solve() {
    val guestName = readln().toList()
    val hostName = readln().toList()
    val lettersInPile = readln().toList()
    var ans = (guestName + hostName).sorted() == lettersInPile.sorted()

    println(if (ans) "YES" else "NO")
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
