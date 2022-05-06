fun main() {
    solve()
}

fun solve() {
    var input = readln()

    println(
        input.replace("WUB", " ").split(" ")
            .filterNot { it.isEmpty() }.joinToString(" ")
    )
}
