fun solve() {
    val hallway = readln()

    for (i in hallway.indices) {
        if (hallway[i].isUpperCase() &&
            hallway.substring(i + 1)
                .contains(hallway[i].lowercaseChar())
        ) {
            println("No")
            return
        }
    }

    println("Yes")
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }