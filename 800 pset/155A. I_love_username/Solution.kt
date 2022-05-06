fun solve() {
    val n = readInt()
    val contests = readInts()
    var amazingCount = 0
    var previousBest = contests.first()
    var previousWorst = previousBest

    for (i in 1 until n) {
        if (contests[i] > previousBest) {
            previousBest = contests[i]
            amazingCount++
        } else if (contests[i] < previousWorst) {
            previousWorst = contests[i]
            amazingCount++
        }
    }
    println(amazingCount)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
