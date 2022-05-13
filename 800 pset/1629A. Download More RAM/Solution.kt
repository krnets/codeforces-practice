fun solve() {
    val (_, k) = readInts()
    val a = readInts()
    val b = readInts()
    val c = a.zip(b).sortedBy { (ramIncrease, _) -> ramIncrease }
    var currentRam = k

    c.indices
        .asSequence()
        .takeWhile { currentRam >= c[it].first }
        .forEach { currentRam += c[it].second }

    println(currentRam)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }