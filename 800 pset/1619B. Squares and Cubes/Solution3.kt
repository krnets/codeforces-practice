import kotlin.math.*

fun solve() {
    val n = readln().toDouble()
    val cubeRootN = Math.cbrt(n)
    val ans = floor(sqrt(n)) + floor(cubeRootN) - floor(sqrt(cubeRootN))

    println(ans.roundToInt())
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }