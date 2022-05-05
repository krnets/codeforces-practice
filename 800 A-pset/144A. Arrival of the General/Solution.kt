fun solve() {
    val n = readInt()
    val arr = readInts()
    var min = Int.MAX_VALUE
    var max = Int.MIN_VALUE
    var minPos = 0
    var maxPos = 0

    arr.forEachIndexed { index, x ->
        if (x > max) {
            max = x
            maxPos = index
        }
        if (x <= min) {
            min = x
            minPos = index
        }
    }
    val swaps = maxPos + n - 1 - minPos - (if (minPos < maxPos) 1 else 0)

    println(swaps)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
