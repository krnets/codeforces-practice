fun solve() {
    val (n, a, b) = readInts()
    val letters = ('a'..'z').shuffled().joinToString("")

    val ans = generateSequence(letters.take(b)) { it }
        .take(n / b + 1)
        .joinToString("")
        .substring(0, n)

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }