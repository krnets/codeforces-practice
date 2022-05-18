fun solve() {
    readln()
    val s = readln().groupingBy { it }.eachCount()
    val cnt1 = s.getOrDefault('n', 0)
    val cnt0 = s.getOrDefault('z', 0)
    val ans = "1 ".repeat(cnt1) + "0 ".repeat(cnt0)

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()