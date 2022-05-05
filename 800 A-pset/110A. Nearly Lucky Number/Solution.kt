fun solve() {
    val luckyDigits = "47"
    val countLuckyDigits = readln().count { it in luckyDigits }

    println(if (luckyDigits.contains("$countLuckyDigits")) "YES" else "NO")
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun main() = solve()
