fun solve() {
    readInt()
    val events = readInts()
    var untreatedCrimesCount = 0
    var availableOfficers = 0

    events.map {
        if (it > 0) availableOfficers += it
        else if (availableOfficers > 0)
            availableOfficers--
        else untreatedCrimesCount++
    }
    println(untreatedCrimesCount)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
