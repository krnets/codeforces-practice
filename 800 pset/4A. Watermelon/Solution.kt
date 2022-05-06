fun main() {
    solve()
}

fun solve() {
    val weight = readln().toInt()
    println(
        if (weight > 2 && weight % 2 == 0) "Yes"
        else "No"
    )
}
