fun solve() {
    val n = readN()
    val matrix = Array(n) { readInts().toIntArray() }
    val goodMatrix = Array(n) { IntArray(n) }
    val mid = (n - 1) / 2

    for (i in 0 until n) {
        val k = n - i - 1
        goodMatrix[i][i] = matrix[i][i]
        goodMatrix[i][k] = matrix[i][k]

        goodMatrix[mid][i] = matrix[mid][i]
        goodMatrix[i][mid] = matrix[i][mid]
    }

    val ans = goodMatrix.sumOf { it.sum() }

    println(ans)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()