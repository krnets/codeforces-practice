fun solve() {
    val n = readInt()
    var sameColours = 0
    var homeUniforms = mutableListOf<Int>()
    var guestUniforms = mutableListOf<Int>()

    repeat(n) {
        val (hostColour, guestColour) = readInts()
        homeUniforms.add(hostColour)
        guestUniforms.add(guestColour)
    }

    for (i in 0 until n)
        for (j in 0 until n)
            if (guestUniforms[j] == homeUniforms[i])
                sameColours++

    println(sameColours)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
