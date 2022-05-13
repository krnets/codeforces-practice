fun solve() {
    val (_, k) = readInts()
    val a = readInts()
    val b = readInts()
    val c = a.zip(b).sortedBy { (ramIncreaseBy, _) -> ramIncreaseBy }
    var currentRam = k

    for ((ramIncreaseBy, ramPermanent) in c)
        if (currentRam < ramIncreaseBy) break
        else currentRam += ramPermanent

    println(currentRam)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }