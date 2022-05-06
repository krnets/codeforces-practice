fun solve() {
    readInt()
    val children = readInts()
    val subjects = 3
    val teams = MutableList(subjects) { mutableListOf<Int>() }

    children.forEachIndexed { index, subject ->
        teams[subject - 1].add(index + 1)
    }
    val teamsPossible = teams.minOf { it.size }

    println(teamsPossible)

    for (i in 0 until teamsPossible) {
        val skillsIndices = mutableListOf<Int>()

        for (j in 0 until subjects)
            skillsIndices.add(teams[j][i])

        println(skillsIndices.joinToString(" "))
    }
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
