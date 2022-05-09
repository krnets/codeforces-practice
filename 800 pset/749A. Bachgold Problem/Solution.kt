fun solve() {
    val n = readInt()
    println(n / 2)

    if (n % 2 == 0)
        print("2 ".repeat(n / 2))
    else {
        print("2 ".repeat(n / 2 - 1))
        println(3)
    }
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = solve()