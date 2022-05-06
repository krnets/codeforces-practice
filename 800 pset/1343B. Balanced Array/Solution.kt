fun solve() {
    val n = readInt()

    if (n / 2 % 2 == 1)
        println("NO")
    else {
        println("YES")

        val evens = generateSequence(2) { it + 2 }.take(n / 2)
        var lastValue = n + n / 2 - 1
        val odds = generateSequence(1) { it + 2 }.take(n / 2 - 1) + lastValue

        print(evens.joinToString(" ") + " ")
        println(odds.joinToString(" "))
    }
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
