fun solve() {
    val n = readInt()
    val events = readInts()
    var untreatedCrimesCount = 0
    var availableOfficers = 0

    for (i in 0 until n) {
        if (events[i] > 0) {
            availableOfficers += events[i]
        } else if (events[i] < 0) {
            if (availableOfficers > 0)
                availableOfficers--
            else untreatedCrimesCount++
        }
    }
    println(untreatedCrimesCount)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
