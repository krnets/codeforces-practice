fun solve() {
    val sticks = readInts()
    val sum = sticks.sum()

    val ans: Boolean =
        if (sticks.distinct().size < 3)
            sum % 2 == 0
        else
            sticks.maxOf { it } * 2 == sum

    println(if (ans) "Yes" else "No")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }