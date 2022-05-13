fun solve() {
    readln()
    val arrA = readInts().toIntArray()
    val arrB = readInts().toIntArray()

    var maxA = arrA.maxOf { it }
    var maxB = arrB.maxOf { it }

    if (maxA < maxB) {
        for (i in arrA.indices) {
            if (arrA[i] > arrB[i])
                arrA[i] = arrB[i].also { arrB[i] = arrA[i] }
        }
        maxA = arrA.maxOf { it }

    } else {
        for (i in arrB.indices) {
            if (arrB[i] > arrA[i]) {
                arrB[i] = arrA[i].also { arrA[i] = arrB[i] }
            }
        }
        maxB = arrB.maxOf { it }
    }

    println(maxA * maxB)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }