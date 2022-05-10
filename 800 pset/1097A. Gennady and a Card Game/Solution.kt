fun solve() {
    val cardOnTable = readln()
    val cardsInHand = readStrings()
    val canPlay = cardsInHand.any { it.first() == cardOnTable.first() || it.last() == cardOnTable.last() }

    if (canPlay)
        println("Yes")
    else println("No")
}

fun readStrings() = readln().split(' ')
fun main() = solve()