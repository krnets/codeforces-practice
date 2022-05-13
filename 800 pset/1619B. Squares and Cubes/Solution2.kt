fun solve() {
    val n = readln().toDouble()
    val squareRootN = Math.sqrt(n).toInt()
    val cubeRootN = Math.cbrt(n).toInt()
    val set = mutableSetOf<Int>()

    for (i in 1..squareRootN) set.add(i * i)
    for (i in 1..cubeRootN) set.add(i * i * i)

    println(set.size)
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }