fun solve() {
    val hallway = readln()
    val seen = mutableSetOf<Char>()

    for (c in hallway) {
        if (c.isUpperCase())
            seen.add(c)
        else if (c.uppercaseChar() in seen) {
            println("No")
            return
        }
    }

    println("Yes")
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }