fun solve() {
    val n = 5
    val matrix = readLines(n).map { it.split(' ') }

    for (row in 0 until n)
        for (col in 0 until n)
            if (matrix[row][col] == "1") {
                println(Math.abs(row - 2) + Math.abs(col - 2))
                return
            }
}

fun readInt() = readln().toInt()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun main() = solve()
