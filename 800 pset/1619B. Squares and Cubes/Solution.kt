fun solve() {
    val n = readN()
    val seq1 = generateSequence(1) { it + 1 }.map { it * it }.takeWhile { square -> square <= n }.toSet()
    val seq2 = generateSequence(1) { it + 1 }.map { it * it * it }.takeWhile { cube -> cube <= n }.toSet()
    val ans = seq1.union(seq2).size

    println(ans)
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }