fun solve() {
    val students = readInts().first()
    val qtyPiecesPerPuzzle = readInts().sorted()

    println(qtyPiecesPerPuzzle.windowed(students)
        .minOfOrNull { combo -> combo.maxOf { it } - combo.minOf { it } } ?: 0)
}

fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()