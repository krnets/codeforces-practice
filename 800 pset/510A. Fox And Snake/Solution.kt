fun solve() {
    val (n, m) = readInts()
    var flag = false

    for (i in 0 until n)
        if (i % 2 == 0)
            println("#".repeat(m))
        else {
            if (flag)
                println("#" + ".".repeat(m - 1))
            else println(".".repeat(m - 1) + "#")

            flag = !flag
        }
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
