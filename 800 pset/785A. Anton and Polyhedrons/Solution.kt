fun solve() {
    val polyhedrons = mapOf(
        "Tetrahedron" to 4,
        "Cube" to 6,
        "Octahedron" to 8,
        "Dodecahedron" to 12,
        "Icosahedron" to 20
    )
    val n = readInt()
    var ans = readLines(n).sumOf { polyhedrons.getOrDefault(it, 0) }

    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()
