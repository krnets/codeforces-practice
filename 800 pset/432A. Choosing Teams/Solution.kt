fun solve() {
    val (_, k) = readInts()
    val countParticipants = readInts().count { 5 - it >= k }

    println(countParticipants / 3)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
