fun solve() {
    val n = readN()
    val mid = n / 2
    val square = MutableList(n) { readln().toCharArray() }
    val corners = mutableListOf<Pair<Int, Int>>()

    for (i in square.indices)
        for (j in square.indices)
            if (square[i][j] == '*')
                corners.add(Pair(i, j))

    val (rowX, colX) = corners.first()
    val (rowY, colY) = corners.last()

    if (rowX == rowY) {

        square[(rowX + mid) % n][colX] = '*'
        square[(rowY + mid) % n][colY] = '*'

    } else if (colX == colY) {

        square[rowX][(colX + mid) % n] = '*'
        square[rowY][(colY + mid) % n] = '*'

    } else {

        square[rowX][colY] = '*'
        square[rowY][colX] = '*'
    }

    for (line in square)
        println(line)
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }