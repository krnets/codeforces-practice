fun solve() {
    val n = readln().toInt()
    val arr = readln().split(' ').map { it.toInt() }
    var maxLength = 1
    var currMaxLength = 1
    var prev = arr.first()

    arr.drop(1).forEach {
        if (it > prev) {
            currMaxLength++

            if (currMaxLength > maxLength)
                maxLength = currMaxLength
        } else
            currMaxLength = 1

        prev = it
    }

    println(maxLength)
}

fun main() = solve()