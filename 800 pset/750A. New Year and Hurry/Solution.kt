fun solve() {
    val (n, k) = readInts()
    val timeForContest = 240 - k
    var sum = 0

    for (i in 1..n) {
        sum += 5 * i

        if (sum > timeForContest) {
            println(i - 1)
            return
        }
    }
    println(n)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
