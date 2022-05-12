fun solve() {
    val n = readN()
    val nums = readInts()
    val start = nums.indexOf(1)
    val end = nums.lastIndexOf(1)

    val ans = nums.drop(start).dropLast(n - end - 1).count { it == 0 }

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }