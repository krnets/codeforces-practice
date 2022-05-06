fun solve() {
    readInt()
    val (anton, danik) = readln().asSequence().sorted().partition { it == 'A' }

    println(
        when {
            anton.size > danik.size -> "Anton"
            anton.size < danik.size -> "Danik"
            else -> "Friendship"
        }
    )
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
