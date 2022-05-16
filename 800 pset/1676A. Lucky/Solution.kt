fun solve() {
    val ticket = readln().toCharArray().map { it.digitToInt() }

    println(
        if (ticket.take(3).sum() == ticket.drop(3).sum())
            "Yes"
        else "No"
    )
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }