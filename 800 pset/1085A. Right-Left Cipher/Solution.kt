fun solve() {
    val encrypted = readln()
    val original = StringBuilder()
    var left = (encrypted.length - 1) / 2
    var right = left + 1

    for (i in encrypted.indices)
        if (i % 2 == 0)
            original.append(encrypted[left--])
        else original.append(encrypted[right++])

    println(original)
}

fun main() = solve()