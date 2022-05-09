fun solve() {
    val input = readInts()
    val friends = input[0]
    val bottles = input[1]
    val milliLiters = input[2]
    val limes = input[3]
    val slices = input[4]
    val totalSaltGrams = input[5]
    val needMlPerDrink = input[6]
    val needSaltPerDrink = input[7]
    val totalDrinkMLs = bottles * milliLiters

    val totalPossibleDrinkMixes = minOf(
        limes * slices,
        totalSaltGrams / needSaltPerDrink,
        totalDrinkMLs / needMlPerDrink
    )
    val ans = totalPossibleDrinkMixes / friends

    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()